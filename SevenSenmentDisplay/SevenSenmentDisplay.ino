#define A 2
#define B 3
#define C 4
#define D 5
#define E 6
#define F 7
#define G 8
#define DP 9

#define ca 0

void displayNumbers(int);

// Number data being stored in the array :) 
//                      A,B,C,D,E,F,G,DP
bool numbers[11][8]={  {1,1,1,1,1,1,0,0},  // digit 0
                       {0,1,1,0,0,0,0,0},  // digit 1
                       {1,1,0,1,1,0,1,0},  // digit 2
                       {1,1,1,1,0,0,1,0},  // digit 3
                       {0,1,1,0,0,1,1,0},  // digit 4
                       {1,0,1,1,0,1,1,0},  // digit 5
                       {1,0,1,1,1,1,1,0},  // digit 6
                       {1,1,1,0,0,0,0,0},  // digit 7
                       {1,1,1,1,1,1,1,0},  // digit 8
                       {1,1,1,1,0,1,1,0},  // digit 9
                       {0,0,0,0,0,0,0,1}   // decimal point
                     };                    //end of numbers declearation
                     
int ctr=0;
int digit_counter = 0;

void setup() {
  pinMode(2,OUTPUT);
  pinMode(3,OUTPUT);
  pinMode(4,OUTPUT);
  pinMode(5,OUTPUT);
  pinMode(6,OUTPUT);
  pinMode(7,OUTPUT);
  pinMode(8,OUTPUT);
  pinMode(9,OUTPUT);
}

void loop() {
  for(digit_counter = 0 ; digit_counter <= 10 ; digit_counter++){
    displayNumbers(digit_counter);
    delay(1000);
  }
}

void displayNumbers(int num){
  if(ca == 0){
    for(ctr = 0 ; ctr <= 8 ; ctr ++){
      digitalWrite(ctr+2,!(numbers[num][ctr]));
    }  
  }else if(ca == 1){
    for(ctr = 0 ; ctr <= 8 ; ctr ++){
      digitalWrite(ctr+2,(numbers[num][ctr]));
    }
  }
}
