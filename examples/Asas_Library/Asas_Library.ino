int LED1 = 15;
int LED2 = 2;
int LED3 = 4;
int LED4 = 16;


void setup() 
{
  // put your setup code here, to run once:
  pinMode(LED1, OUTPUT);
  pinMode(LED2, OUTPUT);
  pinMode(LED3, OUTPUT);
  pinMode(LED4, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:

}

void LED_On()
{
  digitalWrite(LED1, HIGH);
  digitalWrite(LED2, HIGH);
  digitalWrite(LED3, HIGH);
  digitalWrite(LED4, HIGH);
}

void LED_Off()
{
  digitalWrite(LED1, OFF);
  digitalWrite(LED2, OFF);
  digitalWrite(LED3, OFF);
  digitalWrite(LED4, OFF);
}