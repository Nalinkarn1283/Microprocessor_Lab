int r = 0;
int L = 0;
int i;
int a;
int butt1state=0;
int butt2state=0;



void setup() {
  pinMode(A3,INPUT);
  pinMode(A4,INPUT);
  pinMode(A5,INPUT);
  DDRD = 0b11111100; 
  DDRB = 0b00000011;
  DDRC = 0b00000000;
  Serial.begin(9600);
}

void loop() {

digitalRead(A3);
    if (((PINC >> 0) & 0x01)) 
    {
      L = 1;
    }
    else if(((PINC >> 1) & 0x01)) {
      L = 0;
    }
    Serial.println(L);

    if (L == 1) 
    {
      for (i=0;i<=5;i++) 
      {
        PORTD = 0x04 << i;
        delay(1000);
        Serial.println(L);
      }
      PORTD = 0x00;
      for (a=0;a<=1;a++) 
      {
        PORTB = 0x01 << a;
        delay(1000);
        Serial.println(L);
      }
      PORTB = 0x00;
      }
      else 
      {
      for (a=1;a>=0;a--) 
      {   
        PORTB = 0x01 << a;
        delay(1000);
        Serial.println(L);
      }
      PORTB = 0x00;

    for (i=5;i>=0;i--) 
    {
      PORTD = 0x04 << i;
      delay(1000);
      Serial.println(L);
    }
    PORTD = 0x00;
  }
}
