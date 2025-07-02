// C++ code
//
int BUTTON1 = 1;
int LED1 = 4;
int BUTTON2 = 2;
int LED2 = 5;
int BUTTON3 = 3;
int LED3 = 6;






int BUTTONstate = 0;

void  setup()
{
  pinMode(BUTTON1, INPUT);
  pinMode(LED1, OUTPUT);
}
void  loop()
{
  BUTTONstate = digitalRead(BUTTON1);
  if (BUTTONstate == HIGH)
  {
    digitalWrite(LED1, HIGH);
  } 
  else{
    digitalWrite(LED1,  LOW);
  }
  BUTTONstate = digitalRead(BUTTON2);
  if (BUTTONstate == HIGH)
  {
    digitalWrite(LED2, HIGH);
  } 
  else{
    digitalWrite(LED2,  LOW);
  }
  BUTTONstate = digitalRead(BUTTON3);
  if (BUTTONstate == HIGH)
  {
    digitalWrite(LED3, HIGH);
  } 
  else{
    digitalWrite(LED3,  LOW);
  }
}