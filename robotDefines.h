int mode = 0;

# define STOPPED 0
# define FOLLOWING_LINE 1
# define NO_LINE 2

const int power = 255;
const int iniMotorPower = 100;
const int adj = 1;
float adjTurn = 8;

int ENA = 11; //Δεξιοί κινητήρες
int IN1 = 10; 
int IN2 = 9;

int ENB = 6; //Αριστεροί κινητήρες
int IN3 = 5;
int IN4 = 3;
// LFSensor = "0"
const int lineFollowSensor0 = 2; 
const int lineFollowSensor1 = 4; 
const int lineFollowSensor2 = 7; 
const int lineFollowSensor3 = 8;
const int lineFollowSensor4 = 12;

int LFSensor[5]={0, 0, 0, 0, 0};

// PID controller
float Kp=50;
float Ki=0;
float Kd=0;

float error=0, P=0, I=0, D=0, PIDvalue=0;
float previousError=0, previousI=0;

#define RIGHT 1
#define LEFT -1
