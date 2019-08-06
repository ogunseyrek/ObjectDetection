#define trigPin 9 //Sensörün Echo pini Arduinonun 13. pinine bağlanır
#define echoPin 8 //Sensorün Trig pini Arduinonun 12. pinine bağlanır
int buzzer = 6;
  
void setup() {
  
 Serial.begin(9600);
 pinMode(trigPin, OUTPUT); //13. yani trigpini çıkış olarak ayarlıyoruz
 pinMode(echoPin, INPUT); //12. yani echoPini giriş olarak ayarlıyoruz
 pinMode(buzzer, OUTPUT);
 
}
  
void loop() {
  
 long duration, distance;
 digitalWrite(trigPin, LOW);
 delayMicroseconds(2);
 digitalWrite(trigPin, HIGH);
 delayMicroseconds(10);
 digitalWrite(trigPin, LOW);
 duration = pulseIn(echoPin, HIGH);
 distance = (duration/2) / 29.1; //Ölçüm fonksiyonu

  Serial.println(distance);

  if(distance>100)   //480
  {
  digitalWrite(buzzer, HIGH);
  delay(100);
  }

  if(100>=distance && distance>80)   //480
  {
  digitalWrite(buzzer, LOW);
  delay(100);
  digitalWrite(buzzer, HIGH);
  delay(800);
  }
  
  if(80>=distance && distance>60)   //480
  {
  digitalWrite(buzzer, LOW);
  delay(100);
  digitalWrite(buzzer, HIGH);
  delay(600);
  }
  
  if(60>=distance && distance>40)   //480
  {
  digitalWrite(buzzer, LOW);
  delay(100);
  digitalWrite(buzzer, HIGH);
  delay(400);
  }
  
  if(40>=distance && distance>20)   //480
  {
  digitalWrite(buzzer, LOW);
  delay(100);
  digitalWrite(buzzer, HIGH);
  delay(200);
  }
  
  if(20>=distance && distance>0)   //480
  {
  digitalWrite(buzzer, LOW);
  delay(100);
  digitalWrite(buzzer, HIGH);
  delay(100);
  }
}
