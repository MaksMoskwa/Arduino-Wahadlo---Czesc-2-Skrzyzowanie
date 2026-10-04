// C++ code
//
#define GREEN_RIGHT 6
#define RED_RIGHT 7
#define GREEN_TOP 8
#define RED_TOP 9
#define GREEN_BOTTOM 10
#define RED_BOTTOM 11
#define GREEN_LEFT 12
#define RED_LEFT 13

void setup()
{
  pinMode(GREEN_RIGHT, OUTPUT);//green-right
  pinMode(RED_RIGHT, OUTPUT);//red-right
  pinMode(GREEN_TOP, OUTPUT);//green-top
  pinMode(RED_TOP, OUTPUT);//red-top
  pinMode(GREEN_BOTTOM, OUTPUT);//green-bottom
  pinMode(RED_BOTTOM, OUTPUT);//red-bottom
  pinMode(GREEN_LEFT, OUTPUT);//green-left
  pinMode(RED_LEFT, OUTPUT);//red-left

}

void loop()
{
 
  while(true)
  {
    int now = millis();
    
   while(millis() < now + 4000) // LEFT - GREEN HIGH , THE REST OF GREENS ARE LOW AND REDS ARE HIGH
    {
    	digitalWrite(GREEN_RIGHT, LOW);
      	digitalWrite(RED_RIGHT, HIGH);
     	digitalWrite(GREEN_TOP, LOW);
      	digitalWrite(RED_TOP, HIGH);
     	digitalWrite(GREEN_BOTTOM, LOW);
      	digitalWrite(RED_BOTTOM, HIGH);
     	digitalWrite(GREEN_LEFT, HIGH);
      	digitalWrite(RED_LEFT, LOW);

     } 
    
    while(millis() < now + 8000) //  TOP - GREEN HIGH , THE REST OF GREENS ARE LOW AND REDS ARE HIGH
    {
    	digitalWrite(GREEN_RIGHT, LOW);
      	digitalWrite(RED_RIGHT, HIGH);
     	digitalWrite(GREEN_TOP, HIGH);
      	digitalWrite(RED_TOP, LOW);
     	digitalWrite(GREEN_BOTTOM, LOW);
      	digitalWrite(RED_BOTTOM, HIGH);
     	digitalWrite(GREEN_LEFT, LOW);
      	digitalWrite(RED_LEFT, HIGH);

     } 
    
    while(millis() < now + 12000) //  RIGHT - GREEN HIGH , THE REST OF GREENS ARE LOW AND REDS ARE HIGH
    {
    	digitalWrite(GREEN_RIGHT, HIGH);
      	digitalWrite(RED_RIGHT, LOW);
     	digitalWrite(GREEN_TOP, LOW);
      	digitalWrite(RED_TOP, HIGH);
     	digitalWrite(GREEN_BOTTOM, LOW);
      	digitalWrite(RED_BOTTOM, HIGH);
     	digitalWrite(GREEN_LEFT, LOW);
      	digitalWrite(RED_LEFT, HIGH);

     } 
    
    while(millis() < now + 16000) //  BOTTOM - GREEN HIGH , THE REST OF GREENS ARE LOW AND REDS ARE HIGH
    {
    	digitalWrite(GREEN_RIGHT, LOW);
      	digitalWrite(RED_RIGHT, HIGH);
     	digitalWrite(GREEN_TOP, LOW);
      	digitalWrite(RED_TOP, HIGH);
     	digitalWrite(GREEN_BOTTOM, HIGH);
      	digitalWrite(RED_BOTTOM, LOW);
     	digitalWrite(GREEN_LEFT, LOW);
      	digitalWrite(RED_LEFT, HIGH);

     } 
    
}
}