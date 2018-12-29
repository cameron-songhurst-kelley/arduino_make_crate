  
// This is the code to make an LED blink on and off.

// The first step is to define a variable called "ledPin."
// Whenever the computer sees "ledPin" in the program, the computer will think of it as the number 13
// The "const" tells the computer that "ledPin" is constant and cannot be changed in the program
// The "int" tells the computer that "ledPin" is an integer, such as 13, and not another type of number such as 13.5
// Note that each line of code we write must end in a ;
const int greenLedPin = 13;
const int whiteLedPin = 4;
const int redLedPin = 12;
const int blueLedPin = 8;
const int delayTime = 100;
const int buzzerPin = 7;
const int buttonPin = 2;
int buttonState = 0;

void setup() {
  // Here we’ll set up pin 13 to receive the output that turns the LED on and off.
  // We’ll use the pinMode() function to to this.  This function needs two values to operate.  
  // The first value is the pin number, and the second value is either INPUT or OUTPUT. 
  pinMode(greenLedPin,OUTPUT);
  pinMode(whiteLedPin,OUTPUT);
  pinMode(redLedPin,OUTPUT);
  pinMode(blueLedPin,OUTPUT);
  pinMode (buzzerPin, OUTPUT);
  pinMode (buttonPin, INPUT);
}

//We are done with our setup for this sketch so we can begin the loop. 

void loop() {

// read the state of the pushbutton value:
  buttonState = digitalRead(buttonPin);

  if(buttonState == HIGH){
    //blue on all others off
    digitalWrite(greenLedPin,LOW);
    digitalWrite(whiteLedPin,LOW);
    digitalWrite(redLedPin,LOW);
    digitalWrite(blueLedPin,HIGH);
    tone(buzzerPin, 25);
    delay(delayTime);
    
    //white on all others off
    digitalWrite(greenLedPin,LOW);
    digitalWrite(whiteLedPin,HIGH);
    digitalWrite(redLedPin,LOW);
    digitalWrite(blueLedPin,LOW);
    tone(buzzerPin, 100);
    delay(delayTime);
    
    //red on all others off
    digitalWrite(greenLedPin,LOW);
    digitalWrite(whiteLedPin,LOW);
    digitalWrite(redLedPin,HIGH);
    digitalWrite(blueLedPin,LOW);
    tone(buzzerPin, 200);
    delay(delayTime);
    
    //green on all others off
    digitalWrite(greenLedPin,HIGH);
    digitalWrite(whiteLedPin,LOW);
    digitalWrite(redLedPin,LOW);
    digitalWrite(blueLedPin,LOW);
    tone(buzzerPin, 300);
    delay(delayTime);
    
    //red on all others off
    digitalWrite(greenLedPin,LOW);
    digitalWrite(whiteLedPin,LOW);
    digitalWrite(redLedPin,HIGH);
    digitalWrite(blueLedPin,LOW);
    tone(buzzerPin, 200);
    delay(delayTime);
    
    //white on all others off
    digitalWrite(greenLedPin,LOW);
    digitalWrite(whiteLedPin,HIGH);
    digitalWrite(redLedPin,LOW);
    digitalWrite(blueLedPin,LOW);
    tone(buzzerPin, 100);
    delay(delayTime);
    
    //blue on all others off
    digitalWrite(greenLedPin,LOW);
    digitalWrite(whiteLedPin,LOW);
    digitalWrite(redLedPin,LOW);
    digitalWrite(blueLedPin,HIGH);
    tone(buzzerPin, 25);
    delay(delayTime);
  }else{
    //All off
    digitalWrite(greenLedPin,LOW);
    digitalWrite(whiteLedPin,LOW);
    digitalWrite(redLedPin,LOW);
    digitalWrite(blueLedPin,LOW);
    noTone(buzzerPin);
  }
}


//When the computer gets to the end of the loop, it will begin the process again.  

