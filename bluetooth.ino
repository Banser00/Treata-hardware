char data = 0;
int light=0;
void setup() {
  Serial.begin(9600);
  pinMode(13, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(2, OUTPUT);
}

void loop() {

  if(Serial.available() > 0)      // Send data only when you receive data:
   {
      data = Serial.read();        //Read the incoming data & store into data
      Serial.print(data);          //Print Value inside data in Serial monitor
      Serial.print("\n");
      if(data == '1')  light=1;
      else if(data == '2') light=2;
      else if(data == '3') light=3;
      else if(data == '4') light=4;
      else  light=0;        
    
   }

   switch(light){
     case 1:
       song1();
       break;
     case 2:
       song2();
       break;
     case 3:
       song3();
       break;
     case 4:
       song4();
       break;
     case 0:
       digitalWrite(2, LOW);    //If value is 0 then LED turns OFF
       digitalWrite(3, LOW);
       digitalWrite(4, LOW);
       digitalWrite(11, LOW);
       digitalWrite(12, LOW);
       digitalWrite(13, LOW);
       break;
    default:
       digitalWrite(2, LOW);    //If value is 0 then LED turns OFF
       digitalWrite(3, LOW);
       digitalWrite(4, LOW);
       digitalWrite(11, LOW);
       digitalWrite(12, LOW);
       digitalWrite(13, LOW);
       break;
 
   }
}

void song1(){
         digitalWrite(2, LOW);   //If value is 1 then LED turns ON
         digitalWrite(3, LOW);
         digitalWrite(4, LOW);
         digitalWrite(11, LOW);
         digitalWrite(12, LOW);
         digitalWrite(13, LOW);
         delay(500);

         digitalWrite(2, LOW);   //If value is 1 then LED turns ON
         digitalWrite(3, LOW);
         digitalWrite(4, LOW);
         digitalWrite(11, LOW);
         digitalWrite(12, HIGH);
         digitalWrite(13, LOW);
         delay(500);

         digitalWrite(2, LOW);   //If value is 1 then LED turns ON
         digitalWrite(3, HIGH);
         digitalWrite(4, LOW);
         digitalWrite(11, LOW);
         digitalWrite(12, LOW);
         digitalWrite(13, LOW);
         delay(500);

         digitalWrite(2, LOW);   //If value is 1 then LED turns ON
         digitalWrite(3, LOW);
         digitalWrite(4, HIGH);
         digitalWrite(11, LOW);
         digitalWrite(12, LOW);
         digitalWrite(13, LOW);
         delay(500);

         digitalWrite(2, LOW);   //If value is 1 then LED turns ON
         digitalWrite(3, LOW);
         digitalWrite(4, LOW);
         digitalWrite(11, LOW);
         digitalWrite(12, LOW);
         digitalWrite(13, HIGH);
         delay(500);

         digitalWrite(2, LOW);   //If value is 1 then LED turns ON
         digitalWrite(3, LOW);
         digitalWrite(4, LOW);
         digitalWrite(11, HIGH);
         digitalWrite(12, LOW);
         digitalWrite(13, LOW);
         delay(500);

         digitalWrite(2, HIGH);   //If value is 1 then LED turns ON
         digitalWrite(3, LOW);
         digitalWrite(4, LOW);
         digitalWrite(11, LOW);
         digitalWrite(12, LOW);
         digitalWrite(13, LOW);
         delay(500);
         
}

void song2(){
         digitalWrite(2, LOW);   //If value is 1 then LED turns ON
         digitalWrite(3, LOW);
         digitalWrite(4, LOW);
         digitalWrite(11, LOW);
         digitalWrite(12, LOW);
         digitalWrite(13, LOW);
         delay(500);

         digitalWrite(2, LOW);   //If value is 1 then LED turns ON
         digitalWrite(3, LOW);
         digitalWrite(4, LOW);
         digitalWrite(11, LOW);
         digitalWrite(12, HIGH);
         digitalWrite(13, LOW);
         delay(500);

         digitalWrite(2, LOW);   //If value is 1 then LED turns ON
         digitalWrite(3, HIGH);
         digitalWrite(4, LOW);
         digitalWrite(11, LOW);
         digitalWrite(12, LOW);
         digitalWrite(13, LOW);
         delay(500);

         digitalWrite(2, LOW);   //If value is 1 then LED turns ON
         digitalWrite(3, LOW);
         digitalWrite(4, HIGH);
         digitalWrite(11, LOW);
         digitalWrite(12, LOW);
         digitalWrite(13, LOW);
         delay(500);

         digitalWrite(2, LOW);   //If value is 1 then LED turns ON
         digitalWrite(3, LOW);
         digitalWrite(4, LOW);
         digitalWrite(11, LOW);
         digitalWrite(12, LOW);
         digitalWrite(13, HIGH);
         delay(500);

         digitalWrite(2, LOW);   //If value is 1 then LED turns ON
         digitalWrite(3, LOW);
         digitalWrite(4, LOW);
         digitalWrite(11, HIGH);
         digitalWrite(12, LOW);
         digitalWrite(13, LOW);
         delay(500);

         digitalWrite(2, HIGH);   //If value is 1 then LED turns ON
         digitalWrite(3, LOW);
         digitalWrite(4, LOW);
         digitalWrite(11, LOW);
         digitalWrite(12, LOW);
         digitalWrite(13, LOW);
         delay(500);
         
}

void song3(){
         digitalWrite(2, LOW);   //If value is 1 then LED turns ON
         digitalWrite(3, LOW);
         digitalWrite(4, LOW);
         digitalWrite(11, LOW);
         digitalWrite(12, LOW);
         digitalWrite(13, LOW);
         delay(500);

         digitalWrite(2, LOW);   //If value is 1 then LED turns ON
         digitalWrite(3, LOW);
         digitalWrite(4, LOW);
         digitalWrite(11, LOW);
         digitalWrite(12, HIGH);
         digitalWrite(13, LOW);
         delay(500);

         digitalWrite(2, LOW);   //If value is 1 then LED turns ON
         digitalWrite(3, HIGH);
         digitalWrite(4, LOW);
         digitalWrite(11, LOW);
         digitalWrite(12, LOW);
         digitalWrite(13, LOW);
         delay(500);

         digitalWrite(2, LOW);   //If value is 1 then LED turns ON
         digitalWrite(3, LOW);
         digitalWrite(4, HIGH);
         digitalWrite(11, LOW);
         digitalWrite(12, LOW);
         digitalWrite(13, LOW);
         delay(500);

         digitalWrite(2, LOW);   //If value is 1 then LED turns ON
         digitalWrite(3, LOW);
         digitalWrite(4, LOW);
         digitalWrite(11, LOW);
         digitalWrite(12, LOW);
         digitalWrite(13, HIGH);
         delay(500);

         digitalWrite(2, LOW);   //If value is 1 then LED turns ON
         digitalWrite(3, LOW);
         digitalWrite(4, LOW);
         digitalWrite(11, HIGH);
         digitalWrite(12, LOW);
         digitalWrite(13, LOW);
         delay(500);

         digitalWrite(2, HIGH);   //If value is 1 then LED turns ON
         digitalWrite(3, LOW);
         digitalWrite(4, LOW);
         digitalWrite(11, LOW);
         digitalWrite(12, LOW);
         digitalWrite(13, LOW);
         delay(500);
         
}

void song4(){
         digitalWrite(2, LOW);   //If value is 1 then LED turns ON
         digitalWrite(3, LOW);
         digitalWrite(4, LOW);
         digitalWrite(11, LOW);
         digitalWrite(12, LOW);
         digitalWrite(13, LOW);
         delay(500);

         digitalWrite(2, LOW);   //If value is 1 then LED turns ON
         digitalWrite(3, LOW);
         digitalWrite(4, LOW);
         digitalWrite(11, LOW);
         digitalWrite(12, HIGH);
         digitalWrite(13, LOW);
         delay(500);

         digitalWrite(2, LOW);   //If value is 1 then LED turns ON
         digitalWrite(3, HIGH);
         digitalWrite(4, LOW);
         digitalWrite(11, LOW);
         digitalWrite(12, LOW);
         digitalWrite(13, LOW);
         delay(500);

         digitalWrite(2, LOW);   //If value is 1 then LED turns ON
         digitalWrite(3, LOW);
         digitalWrite(4, HIGH);
         digitalWrite(11, LOW);
         digitalWrite(12, LOW);
         digitalWrite(13, LOW);
         delay(500);

         digitalWrite(2, LOW);   //If value is 1 then LED turns ON
         digitalWrite(3, LOW);
         digitalWrite(4, LOW);
         digitalWrite(11, LOW);
         digitalWrite(12, LOW);
         digitalWrite(13, HIGH);
         delay(500);

         digitalWrite(2, LOW);   //If value is 1 then LED turns ON
         digitalWrite(3, LOW);
         digitalWrite(4, LOW);
         digitalWrite(11, HIGH);
         digitalWrite(12, LOW);
         digitalWrite(13, LOW);
         delay(500);

         digitalWrite(2, HIGH);   //If value is 1 then LED turns ON
         digitalWrite(3, LOW);
         digitalWrite(4, LOW);
         digitalWrite(11, LOW);
         digitalWrite(12, LOW);
         digitalWrite(13, LOW);
         delay(500);
         
}

