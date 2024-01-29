
int red = 3;
int yellow = 2;
int green = 1;
int d = 1000;
  
void setup(){
  pinMode(red,OUTPUT);
  pinMode(yellow,OUTPUT);
  pinMode(green,OUTPUT);
  
}

void loop(){
  
 digitalWrite(red,HIGH);
  delay(d);
 digitalWrite(yellow,HIGH);
  delay(d);
  digitalWrite(yellow,LOW);
  delay(d);
  digitalWrite(yellow,HIGH);
  delay(d);
  digitalWrite(yellow,LOW);
  delay(d);
  digitalWrite(yellow,HIGH);
  delay(d);
  digitalWrite(yellow,LOW);
  digitalWrite(red,LOW);
  digitalWrite(green,HIGH);
  delay(d);
  digitalWrite(green,LOW);
  delay(d);
  
  
    
    

   
  
  
  
  
  
}