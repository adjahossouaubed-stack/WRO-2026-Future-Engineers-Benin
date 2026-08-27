// ==========================================
// WRO 2026 - FUTURE ENGINEERS
// TEAM ALPHA X (BENIN) - MOTOR CONTROL
// ==========================================

#include <Servo.h>

const int THROTTLE_PIN = 5; 
const int STEERING_PIN = 6; 

Servo steeringServo;

void setup() {
  Serial.begin(115200); 
  steeringServo.attach(STEERING_PIN);
  Serial.println("[START] Arduino controller initialized.");
}

void loop() {
  if (Serial.available() > 0) {
    String command = Serial.readStringUntil('\n');
  }
}
