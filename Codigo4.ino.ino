int b1 = 8;
int b2 = 7;
int b3 = 6;
int red  = 9;
int green = 10;
int blue = 11;
bool e1;
bool e2;
bool e3;

void setup() {
  Serial.begin(9600);
  pinMode(b1, INPUT_PULLUP);  
  pinMode(b2, INPUT_PULLUP);
  pinMode(b3, INPUT_PULLUP);
  pinMode(red, OUTPUT);
  pinMode(green, OUTPUT);
  pinMode(blue, OUTPUT);
}

void loop() {
  e1 = digitalRead(b1);
  e2 = digitalRead(b2);
  e3 = digitalRead(b3);
   if(e1 && e2 && e3){
    digitalWrite(red, LOW);
    digitalWrite(blue, LOW);
    digitalWrite(green, LOW);
  }
  if(!e1 && e2 && e3){
    digitalWrite(red, HIGH);
    digitalWrite(blue, LOW);
    digitalWrite(green, LOW);
  }
  if(e1 && !e2 && e3){
    digitalWrite(red, LOW);
    digitalWrite(blue, HIGH);
    digitalWrite(green, LOW);
  }
   if(e1 && e2 && !e3){
    digitalWrite(red, LOW);
    digitalWrite(blue, LOW);
    digitalWrite(green, HIGH);
   }
   if(e1 && !e2 && !e3){
    digitalWrite(red, LOW);
    digitalWrite(blue, HIGH);
    digitalWrite(green, HIGH);
   }
   if(!e1 && e2 && !e3){
    digitalWrite(red, HIGH);
    digitalWrite(blue, LOW);
    digitalWrite(green, HIGH);
   }
   if(!e1 && !e2 && e3){
    digitalWrite(red, HIGH);
    digitalWrite(blue, HIGH);
    digitalWrite(green, LOW);
   }
   if(!e1 && !e2 && !e3){
    digitalWrite(red, HIGH);
    digitalWrite(blue, HIGH);
    digitalWrite(green, HIGH);
   }
}
