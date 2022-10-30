//motor_A
int IN1 = 4;
int IN2 = 5;

// motor B
int IN3 = 6;
int IN4 = 7;

// bluetooth
int btData = 1;

void back()
{
  digitalWrite(IN1, HIGH);
  digitalWrite(IN2, LOW);
  digitalWrite(IN3, HIGH);
  digitalWrite(IN4, LOW);
}

void front()
{
  digitalWrite(IN1, LOW);
  digitalWrite(IN2, HIGH);
  digitalWrite(IN3, LOW);
  digitalWrite(IN4, HIGH);
}

void stopped()
{
  digitalWrite(IN1, LOW);
  digitalWrite(IN2, LOW);
  digitalWrite(IN3, LOW);
  digitalWrite(IN4, LOW);
}

void setup()
{
  Serial.begin(9600);
  pinMode(IN1, OUTPUT);
  pinMode(IN2, OUTPUT);
  pinMode(IN3, OUTPUT);
  pinMode(IN4, OUTPUT);
  Serial.setTimeout(100);
}

void loop()
{
  btData = Serial.parseInt();
  Serial.println(btData);
  if (btData == 3) {
    back();
  }

  if (btData == 4) {
    front();
  }

  if (btData == 5) {
    stopped();
  }
}
