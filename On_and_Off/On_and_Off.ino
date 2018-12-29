 
/* Now that you understand the fundamentals of an Arduino sketch, we can write one that turns an LED on and off at a particular interval.  You can copy and paste this code into the IDE if you’d like, or you can view the video tutorial online and type your own code along with it.*/

const int ledPin = 13;
const int ledPin2 = 12;
const int buzzerPin = 7;
const int buttonPin = 2;

int buttonState = 0;

void setup() {
// Here we’ll set up pin 7 to receive the output that turns the LED on and off.
//We’ll use the pinMode() function to to this.  This function needs two values to operate.  
//The first value is the pin number, and the second value is either INPUT or OUTPUT. 

pinMode(ledPin,OUTPUT);
pinMode (ledPin2, OUTPUT);
pinMode (buzzerPin, OUTPUT);
pinMode (buttonPin, INPUT);

//Note that each line of code we write must end in a ;

}

//We are done with our setup for this sketch so we can begin the  loop. 

void loop() {
digitalRead(buzzerPin);
// read the state of the pushbutton value:
    buttonState = digitalRead(buttonPin);

  // check if the pushbutton is pressed.
  // if it is, the buttonState is HIGH:
    if (buttonState == HIGH){
     digitalWrite(ledPin,LOW);
     digitalWrite(ledPin2, HIGH); 
     tone(buzzerPin, 35);
    }
   else {
    // turn LED off:
    digitalWrite(ledPin, HIGH);
    digitalWrite(ledPin2,LOW);
    noTone(buzzerPin);
  }  
}

//When the computer gets to the end of the loop, it will begin the process again.  
