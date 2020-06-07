void motorStop(){
    digitalWrite(IN1, LOW);
    digitalWrite(IN2, LOW);

    digitalWrite(IN3, LOW);
    digitalWrite(IN4, LOW); 
}

void motorForward(){
    digitalWrite(IN1, LOW);
    digitalWrite(IN2, HIGH);
    
    digitalWrite(IN3, HIGH);
    digitalWrite(IN4, LOW);
}

void motorBackward(){
    digitalWrite(IN1, HIGH);
    digitalWrite(IN2, LOW);
    
    digitalWrite(IN3, LOW);
    digitalWrite(IN4, HIGH);
}

void motorFwTime (unsigned int time){
  motorForward();
  delay (time);
  motorStop();
}

void motorBwTime (unsigned int time){
  motorBackward();
  delay (time);
  motorStop();
}

void motorTurn(int direction, int degrees){
  
  int LDir = 255 - iniMotorPower*direction;
  int RDir = 255 - iniMotorPower*direction;
  digitalWrite(ENA,LDir);
  digitalWrite(ENA,RDir);
  delay (round(adjTurn*degrees+1));
  motorStop();
}

void motorPIDcontrol(){
  
  int leftMotorSpeed = 255 - iniMotorPower - PIDvalue;
  int rightMotorSpeed = 255 + iniMotorPower*adj - PIDvalue;
  
  
   constrain(leftMotorSpeed, 100, 255);
   constrain(rightMotorSpeed, 100, 255);
  
  digitalWrite(ENA,leftMotorSpeed);
  digitalWrite(ENB,rightMotorSpeed);
  
  
}
