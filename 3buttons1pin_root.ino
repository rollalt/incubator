/* Multiple buttons on one Analog pin Example
   Use 4 buttons to one bus to control 4 LEDs
   Dev: Vasilakis Michalis // Date: 1/7/2015 // www.ardumotive.com */
   
//Constants
const int yellowLed = 2;
const int redLed    = 3;
const int blueLed   = 4;

//Variables
int buttonValue; //Stores analog value when button is pressed


void setup()
{
 pinMode(yellowLed, OUTPUT);
  pinMode(redLed, OUTPUT);
  pinMode(blueLed, OUTPUT);
  
}

void loop()
{
  buttonValue = analogRead(A5); //Read analog value from A0 pin
  
  //For 1st button:
  if (buttonValue>=824 && buttonValue<=834){
    digitalWrite(yellowLed, HIGH);
  }
  //For 2nd button:
  else if (buttonValue>=925 && buttonValue<=935){
    digitalWrite(redLed, HIGH);
  }
  //For 3rd button:
  else if (buttonValue>=969  && buttonValue<=979){
    digitalWrite(blueLed, HIGH);
  }
  //No button pressed, turn off LEDs
  else{
    digitalWrite(yellowLed, LOW);
      digitalWrite(redLed, LOW);
      digitalWrite(blueLed, LOW);

  }
  delay(100);
}
