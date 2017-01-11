// Script created on 11/01/2017
// By A.Mestries
//
// Goal : two buttons with 2 7segments displays 
// One for increasing
// The other one to decrease
// Variable of maximum value to reach --> Go to 1 after and reverse

// Library load
// Variables
#include "SevSeg.h"

//Create an instance of the object.
SevSeg myDisplay;

//Create constants
  //This pinout is for a bubble dispaly
       //Declare what pins are connected to the GND pins (cathodes)
       const int digit1 = 8; //Pin 1
       const int digit2 = 5; //Pin 10
       const int digit3 = 11; //Pin 4
       const int digit4 = 13; //Pin 6
       
       //Declare what pins are connected to the segments (anodes)
       const int segA = 7; //Pin 12
       const int segB = 6; //Pin 11
       const int segC = 10; //Pin 3
       const int segD = 3; //Pin 8
       const int segE = 9; //Pin 2
       const int segF = 4; //Pin 9
       const int segG = 2; //Pin 7
       const int segDP= 12; //Pin 5
   
  const int numberOfDigits = 2; //Do you have a 1, 2 or 4 digit display?
  // Constants for buttons
  const int button_plus_pin = 13;
  const int button_minus_pin = 14;



//Create global variables
unsigned long timer;
int button_plus_State = 0;         // variable for reading the pushbutton status
int button_minus_State = 0;         // variable for reading the pushbutton status

// Setup
void setup()
{
  int displayType = COMMON_CATHODE; //Your display is either common cathode or common anode
  myDisplay.Begin(displayType, numberOfDigits, digit1, digit2, digit3, digit4, segA, segB, segC, segD, segE, segF, segG, segDP);
  myDisplay.SetBrightness(100); //Set the display to 100% brightness level
  timer = millis();
    // initialize the pushbutton pin as an input:
  pinMode(button_plus_Pin, INPUT);
  pinMode(button_minus_Pin, INPUT);
}

// Loop
void loop()
{
  char tempString[3] = {'C','O'}; //Used for sprintf
  
  for(int i =0;i<100;i++)
  {

  myDisplay.DisplayString(tempString, 0); //(numberToDisplay, decimal point location)
  
  delay(10);
  }
  
   for(int i =0;i<100;i++)
  {
      tempString[0] = 'D';
      tempString[2] = 'E';
      
      myDisplay.DisplayString(tempString, 0);
      
      delay(10);
  }
   for(int i =0;i<100;i++)
  {
      tempString[0] = 'I'; 
      tempString[1] = 'S';
      
      myDisplay.DisplayString(tempString, 0);
      
      delay(10);
  }

}
