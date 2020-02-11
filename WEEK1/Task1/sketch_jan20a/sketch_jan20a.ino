void setup() {
    DDRD = 0x00;
    DDRB = 0x00; 
}

void loop() {
    PORTD=0b00000100;
    PORTB=0b0000000; 
    int a;
    for(a=0;a<=8;a++)
    {
      PORTD = a >> 1;
      delay(500);
    }
}
