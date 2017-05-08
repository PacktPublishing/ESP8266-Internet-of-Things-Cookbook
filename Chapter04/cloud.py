# Function to connect to the WiFi
def do_connect():
    import network
    sta_if = network.WLAN(network.STA_IF)
    if not sta_if.isconnected():
        print('connecting to network...')
        sta_if.active(True)
        sta_if.connect('<essid>', '<password>')
        while not sta_if.isconnected():
            pass
    print('network config:', sta_if.ifconfig())

# Function to send an HTTP request
def http_get(url):
    _, _, host, path = url.split('/', 3)
    addr = socket.getaddrinfo(host, 80)[0][-1]
    s = socket.socket()
    s.connect(addr)
    s.send(bytes('GET /%s HTTP/1.0\r\nHost: %s\r\n\r\n' % (path, host), 'utf8'))
    while True:
        data = s.recv(100)
        if data:
            print(str(data, 'utf8'), end='')
        else:
            break

# Connect to WiFi
do_connect();

# Make measurements
import dht
import machine
d = dht.DHT11(machine.Pin(5))

d.measure();
temperature = d.temperature();
humidity = d.humidity();

# Build request
url = 'https://dweet.io/dweet/for/myesp8266';
url += '?temperature=' + temperature;
url += '&humidity' + humidity;

# Send request
http_get();

