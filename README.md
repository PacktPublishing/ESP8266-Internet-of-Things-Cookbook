# ESP8266 Internet of Things Cookbook
This is the code repository for [ESP8266 Internet of Things Cookbook](https://www.packtpub.com/hardware-and-creative/esp8266-internet-things-cookbook?utm_source=github&utm_medium=repository&utm_campaign=9781787288102), published by [Packt](https://www.packtpub.com/?utm_source=github). It contains all the supporting project files necessary to work through the book from start to finish.
## About the Book
This book contains practical recipes that will help you master all ESP8266 functionalities. You will start by configuring and customizing the chip in line with your requirements. Then you will focus on core topics such as on-board processing, sensors, GPIOs, programming, networking, integration with external components, and so on. We will also teach you how to leverage Arduino using the ESP8266 and you'll learn about its libraries, file system, OTA updates, and so on. The book also provide recipes on web servers, testing, connecting with the cloud, and troubleshooting techniques. Programming aspects include MicroPython and how to leverage it to get started with the ESP8266. Towards the end, we will use these concepts and create an interesting project (IOT).


## Instructions and Navigation
All of the code is organized into folders. Each folder starts with a number followed by the application name. For example, Chapter02.

The code will look like the following:
```
// LED pin
int inputPin = 5;
int val = 0;

void setup() {
  Serial.begin(9600);
  pinMode(inputPin, INPUT);
}

void loop() {
  
  // read pin
  val = digitalRead(inputPin);
 
  // display state of input pin  
  Serial.println(val);                              
  delay(1000);             
}

```

To build the projects you find in this book, any experience with programming and/or electronics is appreciated, but you will be able to follow even if you have little experience in the field, as we will start from the absolute basics of ESP8266.

## Related Products
* [Analytics for the Internet of Things (IoT)](https://www.packtpub.com/hardware-and-creative/analytics-internet-things-iot?utm_source=repository&utm_medium=github&utm_campaign=repository&utm_term=9781787120730)

* [Internet of Things with Arduino Cookbook](https://www.packtpub.com/hardware-and-creative/internet-things-arduino-cookbook?utm_source=repository&utm_medium=github&utm_campaign=repository&utm_term=9781785286582)

* [Smarter Decisions – The Intersection of Internet of Things and Decision Science](https://www.packtpub.com/big-data-and-business-intelligence/smarter-decisions-intersection-internet-things-and-decision-scien?utm_source=repository&utm_medium=github&utm_campaign=repository&utm_term=9781785884191)

### Suggestions and Feedback
[Click here](https://docs.google.com/forms/d/e/1FAIpQLSe5qwunkGf6PUvzPirPDtuy1Du5Rlzew23UBp2S-P3wB-GcwQ/viewform) if you have any feedback or suggestions. 
### Download a free PDF

 <i>If you have already purchased a print or Kindle version of this book, you can get a DRM-free PDF version at no cost.<br>Simply click on the link to claim your free PDF.</i>
<p align="center"> <a href="https://packt.link/free-ebook/9781787288102">https://packt.link/free-ebook/9781787288102 </a> </p>