#include <Servo.h>

// Define the LDR sensor pins
#define LDR1 A4
#define LDR2 A5

// Define the error value. You can change it as you like
#define error 10

// Starting point of the servo motor
int Spoint = 90;

// Create an object for the servo motor
Servo servo;

void setup() {
  // Attach servo motor to pin 11
  servo.attach(11);
  // Set the starting point of the servo
  servo.write(Spoint);
  delay(400);

  // Start serial communication
  Serial.begin(9600);
}

void loop() {
  // Get the LDR sensor values
  int ldr1 = analogRead(LDR1);
  int ldr2 = analogRead(LDR2);

  // Print values to Serial Monitor
  Serial.print("LDR1: ");
  Serial.print(ldr1);
  Serial.print("  LDR2: ");
  Serial.println(ldr2);

  // Get the difference of these values
  int diff = abs(ldr1 - ldr2);

  // Check these values using an IF condition
  if (diff > error) {
    if (ldr1 > ldr2) {
      Spoint--;
    }
    if (ldr1 < ldr2) {
      Spoint++;
    }
  }

  // Write values on the servo motor
  servo.write(Spoint);
  delay(80);
}