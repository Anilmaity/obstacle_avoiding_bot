#define echoPin D1
#define trigPin D2

//External Interrupts
volatile int cha1 , cha2 ,tempcha1 , tempcha2 , CT1 , CT2 ;

int Move, Direction ;
ICACHE_RAM_ATTR void ch1();

long duration;
int distance;
int GetDistance();

void Forward();
void Backward();
void Right();
void Left();


void setup() {
  
  Serial.begin(115200);
  pinMode(trigPin, OUTPUT); // Sets the trigPin as an OUTPUT
  pinMode(echoPin, INPUT); // Sets the echoPin as an INPUT
  pinMode(D3, INPUT_PULLUP);
  pinMode(D0, INPUT_PULLUP);
  pinMode(D5 , OUTPUT);
  pinMode(D6 , OUTPUT);  
  pinMode(D7 , OUTPUT);
  pinMode(D8 , OUTPUT);
  digitalWrite(D5,LOW);
  digitalWrite(D6,LOW);
  digitalWrite(D7,LOW);
  digitalWrite(D8,LOW);
  attachInterrupt(digitalPinToInterrupt(D3), ch1, CHANGE);
  attachInterrupt(digitalPinToInterrupt(D0), ch2, CHANGE);
}

void loop() {

Serial.print("Debug");Serial.print("  ");
if(cha1 !=0 || cha2 != 0){
  Move = map(cha1, 1000 , 2000 , -255 , 255);
  Direction = map(cha2, 1000 , 2000 , -255 , 255);
  if(Move > 0){
    Forward();
  }
  else{
    Backward();
  }
  if(Direction > 0)
  {
    Right();
  }  
  else{
      Left();
    }
}
  int Distance =  GetDistance();
  Serial.print(cha1);  Serial.print("  "); 
  Serial.print(cha2); Serial.print("  ");
  Serial.println(Distance);  Serial.print("  ");
}



int GetDistance()
{
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);
  duration = pulseIn(echoPin, HIGH);
  distance = 0.5*(duration * 0.034 / 2) + 0.5*distance; // Speed of sound wave divided by 2 (go and back)
  return distance;
  }
