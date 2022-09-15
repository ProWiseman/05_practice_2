#define PIN_LED 7
unsigned int count, toggle;

void setup() {
  // put your setup code here, to run once:
  pinMode(PIN_LED, OUTPUT);
  Serial.begin(115200);
  while (!Serial) {
    ;
  }
  Serial.println("Hello World!");
  digitalWrite(PIN_LED, LOW);
  delay(1000);
  
  digitalWrite(PIN_LED, HIGH);
  delay(100);
  for(int i = 0; i < 5; i++){
    digitalWrite(PIN_LED, LOW);
    delay(100);
    digitalWrite(PIN_LED, HIGH);
    delay(100);
  }
}

void loop() {
  // put your main code here, to run repeatedly:
  while(true){}
}
