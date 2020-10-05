
#include <IRremote.h>

int receiver = 11; // Signal Pin of IR receiver to Arduino Digital Pin 11
int Led = 7;
int Led1 = 6;
/*-----( Declare objects )-----*/
IRrecv irrecv(receiver);           // create instance of 'irrecv'
decode_results results;            // create instance of 'decode_results'

void setup()   /*----( SETUP: RUNS ONCE )----*/
{
  pinMode(Led, OUTPUT);
   pinMode(Led1, OUTPUT);
  Serial.begin(9600);
  Serial.println("IR Receiver Button Decode");
  irrecv.enableIRIn(); // Start the receiver

}/*--(end setup )---*/


void loop()   /*----( LOOP: RUNS CONSTANTLY )----*/
{
  if (irrecv.decode(&results)) // have we received an IR signal?

  {
    translateIR();
    Serial.println(results.value);
    irrecv.resume(); // receive the next value
  } 
}/* --(end main loop )-- */

/*-----( Function )-----*/
void translateIR() // takes action based on IR code received

// describing Remote IR codes

{

  switch(results.value)

  {

  case 0xFF629D: digitalWrite(Led1, HIGH);  break; //pressing up button turn led on
 
  case 0xFF22DD: digitalWrite(Led, LOW);           //pressing left button turn both leds off
                 digitalWrite(Led1, LOW);

  break;
 
  case 0xFF02FD: digitalWrite(Led, HIGH);           //presing ok button turns both leds on
                 digitalWrite(Led1, HIGH);

  break; 
 
  case 0xFFC23D: Serial.println(" RIGHT");   break;  //right
 
  case 0xFFA857: digitalWrite(Led1, LOW);  break;  //pressing down button turn led1 off
 
  case 0xFF6897: digitalWrite(Led, LOW);    break;    //pressing 1 button turn led off
 
  case 0xFF9867: digitalWrite(Led, HIGH);    break;  //pressing 2 button turn led on
 
 
  case 0xFFB04F: Serial.println(" 3");    break;     //3
 
 
  case 0xFF30CF: digitalWrite(Led1, HIGH);          //pressing 4 button turn led off and turn led1 on
                 digitalWrite(Led, LOW);
               




  break;     
 
 
  case 0xFF18E7: Serial.println(" 5");    break;     //5
  case 0xFF7A85: Serial.println(" 6");    break;     //6
  case 0xFF10EF: Serial.println(" 7");    break;
  case 0xFF38C7: Serial.println(" 8");    break;
  case 0xFF5AA5: Serial.println(" 9");    break;
  case 0xFF42BD: Serial.println(" *");    break;
  case 0xFF4AB5: Serial.println(" 0");    break;
  case 0xFF52AD: Serial.println(" #");    break;
  case 0xFFFFFFFF: Serial.println(" REPEAT");break; 

  default:
    Serial.println(" other button   ");

  }// End Case

  delay(500); // Do not get immediate repeat


}
