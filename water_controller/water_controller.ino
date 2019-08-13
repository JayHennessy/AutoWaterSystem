int IN1 = 3; //the relays connect to
int analogPin = 0; // the sensor pin
int sensorVal = 0; // the sensor value

#define ON   0
#define OFF  1
void setup() 
{
  Serial.begin(9600);
  relay_init();//initialize the relay
}

void loop() {
  sensorVal = analogRead(analogPin); // read the sensor value
  Serial.println(sensorVal);
  if (sensorVal > 550){
    relay_SetStatus(ON);//turn on RELAY_1 
    delay(10000);
    relay_SetStatus(OFF);
    delay(5000);
  }
  else {
    relay_SetStatus(OFF);//turn on RELAY_2
  }
  delay(2000);//delay 2s
}
void relay_init(void)//initialize the relay
{  
  //set all the relays OUTPUT
  pinMode(IN1, OUTPUT);
  relay_SetStatus(OFF);//turn off all the relay
}
//set the status of relays
void relay_SetStatus( unsigned char status_1)
{
  digitalWrite(IN1, status_1);

}
int mean( int[10] x){
// calculate the mean value over the last 10 sensor values
y = 
}
}
