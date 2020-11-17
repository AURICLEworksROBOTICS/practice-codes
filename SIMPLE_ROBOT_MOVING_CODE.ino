//testing code of a simple moving robot using arduino ( code using ARDUINO IDE ) .

int  m1 = 3 ;
int m2 = 4 ; 
int a1 = 5 ;
int a2 = 6 ;
 // integers
void setup (){
  pinMode ( 3 , OUTPUT ) ;
  pinMode ( 4, OUTPUT ) ;
  pinMode ( 5 , OUTPUT ) ;
  pinMode ( 6 , OUTPUT ) ;
 // defined all the pins
}


void loop () {
  digitalWrite ( m1 , HIGH ) ; 
  digitalWrite ( m2 , HIGH ) ; 
  //make m1 & m2 move forward
  delay ( 3000 ) ; 
   digitalWrite ( a1 , HIGH ) ; 
  digitalWrite ( a2 , HIGH ) ; 
  
  delay ( 3000 ) ; 
  //wait for 3000 mili seconds ( 3 seconds ) .
  //wait for 3000 mili seconds ( 3 seconds ) .
   digitalWrite ( m1 , HIGH ) ; 
  digitalWrite ( m2 ,LOW ) ; 
  //make m1 & m2 make a turn 
  delay ( 3000 ) ; 
  //wait for 3000 mili seconds ( 3 seconds ) .
    digitalWrite ( m1 , HIGH ) ; 
  digitalWrite ( m2 ,LOW ) ; 
  //make m1 & m2 make a turn  ( opposite of what done before
  delay ( 3000 ) ; 
  //wait for 3000 mili seconds ( 3 seconds ) .
     digitalWrite ( a1 , HIGH ) ; 
  digitalWrite ( a2 , LOW  ) ; 
  // ARM 1 will move but not other
  delay ( 3000 ) ;
       digitalWrite ( a1 ,LOW ) ; 
  digitalWrite ( a2 , HIGH  ) ; 
  // ARM 2 will move but not other
  delay (3000) ; 

  //made by a startup called " AURICLE ROBOTICS " visit its website : https://sites.google.com/view/auricle-robotics/home
   //   follow us on git hub : https://github.com/AURICLEworksROBOTICS
  // thank you for using our code you can also use this code hipidi hopidi ! 
}
