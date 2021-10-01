void setup(){
pinMode(13, OUTPUT);     
}
void loop(){
digitalWrite(13, HIGH);
encapsulated_delay() 
digitalWrite(13, LOW);
encapsulated_delay2(); 
}
void encapsulated_delay(){
delay(3554);
}
void encapsulated_delay2(){
delay(3554);
}
