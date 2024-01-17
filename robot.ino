  char t;
int m1=7;
int m2=8;
int m3=9;
int m4=10;

void stopm()
{
  digitalWrite(m1,0);
  digitalWrite(m2,0);
  digitalWrite(m3,0);
  digitalWrite(m4,0);
}
void fm(){
   digitalWrite(m1,1);              
  digitalWrite(m2,0);
  digitalWrite(m3,1);
  digitalWrite(m4,0);
}
void bm(){
  digitalWrite(m1,0);
  digitalWrite(m2,1);
  digitalWrite(m3,0);
  digitalWrite(m4,1);
}
void rm(){
  digitalWrite(m1,1);
  digitalWrite(m2,0);
  digitalWrite(m3,0);
  digitalWrite(m4,0);
}
void lm(){
  digitalWrite(m1,0);
  digitalWrite(m2,0);
  digitalWrite(m3,1);
  digitalWrite(m4,0);
}
  
  void setup(){
    Serial.begin(9600);
    pinMode(m1,OUTPUT);
    pinMode(m2,OUTPUT);
    pinMode(m3,OUTPUT);
    pinMode(m4,OUTPUT);
    Serial.begin(9600);
    //pinMode(7,INPUT);
    //pinMode(8,INPUT);
  }
void loop(){
if (Serial.available()){
 t=Serial.read();
Serial.println(t);
}
if(t=='a'){
  fm();
}
if(t=='b'){
  bm();
}
if(t=='c'){
  rm();
}
if(t=='d'){
  lm();
}
if(t=='e'){
  stopm();
}
}

