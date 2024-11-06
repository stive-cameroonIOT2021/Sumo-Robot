const int Redge = A0;  // Define right edge sensor pin
const int Ledge = A1;  // Define left edge sensor pin

void setup() {
    Serial.begin(9600);         // Initialize serial communication
    pinMode(Redge, INPUT);       // Set Redge pin as input
    pinMode(Ledge, INPUT);       // Set Ledge pin as input
}

void loop() {
    int redgeState = digitalRead(Redge); // Read right edge sensor
    int ledgeState = digitalRead(Ledge); // Read left edge sensor

    // Check if Redge sensor detects an edge
    if (redgeState == LOW) {
        Serial.println("Right edge detected!");
    }

    // Check if Ledge sensor detects an edge
    if (ledgeState == LOW) {
        Serial.println("Left edge detected!");
    }

    delay(200);  // Small delay to avoid flooding the Serial Monitor
}
