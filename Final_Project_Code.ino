//Motort A & D
//Motor A and D are connecting to digital pin of 2 and 3 on the arduino board.
// We connected A & D to digital pins of 2 and 3 since they are on the opposite side and we need them to spin counter clockwise
const int motorPinA1 = 3;
const int motorPinA2 = 2;
//Motor B & C
//Motor B & C are connecting to digital pin of 4 and 5 on the arduino board.
//we connected motor B & C since they will be spinning clockwise and they are on the opposite sides.
const int motorPinB1 = 5;
const int motorPinB2 = 4;
// button A
// the slideswitch is being connected to digital pin 7 on the arduinno board.
const int switchPin1= 7;

void setup()
{
  //setting motors as output
  pinMode(motorPinA1, OUTPUT);
  pinMode(motorPinA2, OUTPUT);
  pinMode(motorPinB1, OUTPUT);
  pinMode(motorPinB2, OUTPUT);
  //setting slide switch as input to controll the motor
  pinMode(switchPin1, INPUT);
  
}

void loop() {
// checking if the slideswitch is turned on
  // if it is on turn motors on
  if (digitalRead(switchPin1)) {
    // turn motor A and D counter clockwise
 digitalWrite(motorPinA1, LOW);
 digitalWrite(motorPinA2, HIGH);
    // turn motor C and B clock wise
 digitalWrite(motorPinB1, HIGH);
 digitalWrite(motorPinB2, LOW);
  }
  else {
    // turn motors off if the slideswitch is not on
 digitalWrite(motorPinA1, LOW);
 digitalWrite(motorPinA2, LOW);
 digitalWrite(motorPinB1, LOW);
 digitalWrite(motorPinB2, LOW);
  }
  
     
}
