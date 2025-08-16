#define led_red 15
#define led_green 23
#define led_yellow 4


void configuration () {
  pinMode(led_red, OUTPUT);
  pinMode(led_green, OUTPUT);
  pinMode(led_yellow, OUTPUT);
}


void red() {
  digitalWrite(led_red, HIGH);
  digitalWrite(led_green, LOW);
  digitalWrite(led_yellow, LOW);
  delay(5000);
}
void green(){
  digitalWrite(led_green, HIGH);
  digitalWrite(led_yellow, LOW);
  digitalWrite(led_red, LOW);
  delay(5000);
}
void yellow() {
  digitalWrite(led_yellow, HIGH);
  digitalWrite(led_green, LOW);
  digitalWrite(led_red, LOW);
  delay(2000);
}

void setup() {
  // put your setup code here, to run once:
  configuration();
}

void loop() {
  // put your main code here, to run repeatedly:
  red();
  green();
  yellow();

}
