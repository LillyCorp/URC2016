
#define Z_STEP_PIN 46
#define Z_DIR_PIN 48
#define Z_ENABLE_PIN 62
#define Z_MIN_PIN 18
#define Z_MAX_PIN 19

void setup() {
  // put your setup code here, to run once:
  pinMode(Z_STEP_PIN , OUTPUT);
pinMode(Z_DIR_PIN , OUTPUT);
pinMode(Z_ENABLE_PIN , OUTPUT);
digitalWrite(Z_ENABLE_PIN , LOW);

}

void loop () {

// if (millis() %1000 <500)
// digitalWrite(LED_PIN, HIGH);
// else
// digitalWrite(LED_PIN, LOW);

// if (millis() %1000 <300) {
// digitalWrite(HEATER_0_PIN, HIGH);
// digitalWrite(HEATER_1_PIN, LOW);
// digitalWrite(FAN_PIN, LOW);
// } else if (millis() %1000 <600) {
// digitalWrite(HEATER_0_PIN, LOW);
// digitalWrite(HEATER_1_PIN, HIGH);
// digitalWrite(FAN_PIN, LOW);
// } else {
// digitalWrite(HEATER_0_PIN, LOW);
// digitalWrite(HEATER_1_PIN, LOW);
// digitalWrite(FAN_PIN, HIGH);
// }



//digitalWrite(X_DIR_PIN , HIGH);
//digitalWrite(Y_DIR_PIN , HIGH);
digitalWrite(Z_DIR_PIN , HIGH);
//digitalWrite(E_DIR_PIN , HIGH);
//digitalWrite(Q_DIR_PIN , HIGH);
//digitalWrite(HEATER_0_PIN, LOW); digitalWrite(FAN_PIN, HIGH); digitalWrite(HEATER_1_PIN, LOW); digitalWrite(LED_PIN, HIGH);


//digitalWrite(X_DIR_PIN , LOW);
//digitalWrite(Y_DIR_PIN , LOW);
digitalWrite(Z_DIR_PIN , LOW);
//digitalWrite(E_DIR_PIN , LOW);
//digitalWrite(Q_DIR_PIN , LOW);
//digitalWrite(HEATER_0_PIN, HIGH); digitalWrite(FAN_PIN, LOW); digitalWrite(HEATER_1_PIN, HIGH); digitalWrite(LED_PIN, LOW);



//digitalWrite(X_STEP_PIN , LOW);
//digitalWrite(Y_STEP_PIN , LOW);
digitalWrite(Z_STEP_PIN , LOW);
//digitalWrite(E_STEP_PIN , LOW);
//digitalWrite(Q_STEP_PIN , LOW);

delay (5);

//digitalWrite(X_STEP_PIN , HIGH);
//digitalWrite(Y_STEP_PIN , HIGH);
digitalWrite(Z_STEP_PIN , HIGH);
//digitalWrite(E_STEP_PIN , HIGH);
//   digitalWrite(Q_STEP_PIN , HIGH);



} 
