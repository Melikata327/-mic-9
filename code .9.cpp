#define  key 1 digitalRead (A0)
void setup() {
 pinMode(A0,INPUT);
    for (int a = 1 ; a<=5;a++){
 pinMode(a,OUTPUT);  
  }
  void loop() {
   int dancinglight [6] [5] = {
  {1,0,0,0,0},
  {1,1,0,0,0},
  {0,1,1,0,0},
  {0,0,1,1,0},
  {0,0,0,1,0},
  {0,0,0,0,1}
 };
   if(key == 0)"{
  
    for(int a = 0; a<=5; a++){

       for(int b = 0; b<=4; b++){
      
       digitalwrite( b, dancing light [a] [b]);
   
       delay(50);
     
       } 
     }
   
  }


