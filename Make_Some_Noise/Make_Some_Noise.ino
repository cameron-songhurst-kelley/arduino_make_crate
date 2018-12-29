
 
/* Now that you understand the fundamentals of an Arduino sketch, we can write one that turns an LED on and off at a particular interval.  You can copy and paste this code into the IDE if you’d like, or you can view the video tutorial online and type your own code along with it.*/

const int ledPin = 13;
const int ledPin2 = 12;
const int buzzerPin = 7;

void setup() {
// Here we’ll set up pin 7 to receive the output that turns the LED on and off.
//We’ll use the pinMode() function to to this.  This function needs two values to operate.  
//The first value is the pin number, and the second value is either INPUT or OUTPUT. 

pinMode(ledPin,OUTPUT);
pinMode (ledPin2, OUTPUT);
pinMode (buzzerPin, OUTPUT);

//Note that each line of code we write must end in a ;

}

//We are done with our setup for this sketch so we can begin the  loop. 

void loop() {
// Here we will write code that does the following:
//Turns the LED on
//Leaves it on for a short period of time
//Turns the LED off
//Leaves it off for a short period of time before beginning the loop again. 

//To turn an LED on, we must make that output HIGH.  Setting it to LOW will turn it off. 

//digitalWrite() s the function we use to change an output in.  It takes two values. 
//The first value is the pin number, and the second value is either HIGH or LOW.

//Turn the LED on
digitalWrite(ledPin,HIGH);

//Leave it on for a short period of time
//Here we will use the delay() function.  It requires 1 input- a time, measured in milliseconds. 
//To delay for 1 second, we need to ener 1000 milliseconds. 

delay(1000);

//Turn the first LED off, turn second LED on
 digitalWrite(ledPin,LOW);
 digitalWrite(ledPin2, HIGH);

 //Turn the buzzer on using the tone() function. We'll give it two inputs:  the pin, and a frequency. 

 tone(buzzerPin, 1000);

 //Leave the buzzer and red LED on for a brief time
 delay(1000);

 //Turn off the redLED and the buzzer
 digitalWrite(ledPin2,LOW);
noTone(buzzerPin);
 



}

//When the computer gets to the end of the loop, it will begin the process again.  
