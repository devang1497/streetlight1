void setup() {

  // put your setup code here, to run once:
pinMode(8,INPUT);
pinMode(3,OUTPUT);
pinMode(4,OUTPUT);
}


void loop() {
  
// put your main code here, to run repeatedly:

if(digitalRead(8)==0)

{
  digitalWrite(3,HIGH);
  digitalWrite(4,LOW);

  while(digitalRead(8)==0);
}

else if(digitalRead(8)==1)

{
  digitalWrite(3,LOW);
  digitalWrite(4,HIGH);
 
 while(digitalRead(8)==1);
}

}
