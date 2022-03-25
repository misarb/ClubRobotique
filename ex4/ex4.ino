
int bcdDigit[10][4] ={
  {0,0,0,0},//0
  {0,0,0,1},//1
  {0,0,1,0},//2
  {0,0,1,1},//3
  {0,1,0,0},//4
  {0,1,0,1},//5
  {0,1,1,0},//6
  {0,1,1,1},//7
  {1,0,0,0}, //8
  {1,0,0,1},//9
  
  
  };
void setup() {
  // put your setup code here, to run once:
for(int i=0;i<4;i++){
  pinMode(i,OUTPUT);
  
  }
}

void loop() {
  // put your main code here, to run repeatedly:
  for(int i=0;i<=10;i++){
    delay(500);
    writeToBcdPins(i);
    }
    delay(600);

}
void writeToBcdPins(int nbr){
  for(int i=0;i<4;i++){
    digitalWrite(i,bcdDigit[nbr][i]);
    }
  }
