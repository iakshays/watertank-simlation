// defines pins numbers
 int trigPin = 9;
int echoPin = 10;
int relay = 5;

// defines variables
long duration;
int distance;

void setup() {
pinMode(trigPin, OUTPUT); // Sets the trigPin as an Output
pinMode(echoPin, INPUT); // Sets the echoPin as an Input
pinMode (relay, OUTPUT);
digitalWrite(relay, LOW);
Serial.begin(9600); // Starts the serial communication
}

int onn()
{digitalWrite(relay, HIGH);
  Serial.print("on- ");
  delay(300);
 }
int of()
{digitalWrite(relay, LOW);
  Serial.print("of- ");
  delay(300);
}


void loop() {
// Clears the trigPin
digitalWrite(trigPin, LOW);
delayMicroseconds(2);
// Sets the trigPin on HIGH state for 10 micro seconds
digitalWrite(trigPin, HIGH);
delayMicroseconds(10);
digitalWrite(trigPin, LOW);
// Reads the echoPin, returns the sound wave travel time in microseconds
duration = pulseIn(echoPin, HIGH);
// Calculating the distance
distance= duration*0.034/2;
// Prints the distance on the Serial Monitor
Serial.print("Distance: ");
Serial.println(distance);
delay(300);
int d = distance;
if(d>22)
onn();
else
of();
           
  
}
