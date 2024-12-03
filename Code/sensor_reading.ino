// Pin Definitions
const int flowSensorPin = A2;      // Flow Sensor (Analog)
const int turbiditySensorPin = A0; // Turbidity Sensor (Analog)
const int waterLevelSensorPin = A1; // Water Level Sensor (Analog)
     // Motor (Digital)

// Constants
const int turbidityThresholdDirty = 350;
const int turbidityThresholdImpure = 350;
const int turbidityThresholdLittleGood = 400;
const int turbidityThresholdGood = 500;
const int waterLevelHigh = 600;
const int waterLevelLow = 200;

// Variables
int flowValue = 0;
int turbidityValue = 0;
int waterLevelValue = 0;

void setup() {
 
  Serial.begin(9600); // For debugging
  // digitalWrite(8,LOW);
}





void loop() {
 

  flowValue = analogRead(flowSensorPin);
  turbidityValue = analogRead(turbiditySensorPin);
  waterLevelValue = analogRead(waterLevelSensorPin);

  // Print sensor values for debugging
  //Serial.print("Flow Sensor Value: ");  we write anything in the serial.println() the this data is sending to node mcu
  Serial.print(flowValue);   
   
  Serial.print(",");
  Serial.print(turbidityValue);
   
  Serial.print(",");
  Serial.println(waterLevelValue);
 delay(1000);
}
