
// Variable Scope
char globalScope[] = "Global Scope";


void setup()
{
  // Pin Mode
  /*
  pinMode(2, OUTPUT);
  pinMode(9, INPUT);
  */
  
  // Serial communication
  Serial.begin(9600);
  
  
  // Data type
  // Integer
  /*
  int val1 = 5;
  Serial.println(5/2);
  */
  
  // Cast
  /*
  int val1 = 5;
  float val3 = (float) val1;
  Serial.println(val3 / 2);
  */
  
  // Float
  /*
  float val3 = 1.2;
  */
  
  // Character
  /*
  char character = 'a';
  Serial.println(character);
  */
  
  // Boolean
  /*
  bool isTall = true;
  Serial.println(isTall);
  Serial.println(HIGH);
  */
  
  // Variable Scope
  /*
  char localScope[] = "Local Scope";
  */
  
  // For loop
  /*
  for(int i = 0; i < 10; i++)
  {
    Serial.println(i);
  }
  */
  
  // Function
  // minimalCalculator(12, 13);
}

void loop()
{
  // Pin Mode, digitalRead(), and digitalWrite()
  /*
  if(digitalRead(9))
  {
    digitalWrite(2, HIGH);
    delay(2000);
  }
  digitalWrite(2, LOW);
  */
  
  // Serial communication
  /*
  Serial.println("12-200 is happening right now!");
  */
  
  // Variable Scope
  // Serial.println(globalScope);
  // Serial.println(localScope);
  
  // If, elseif, else
  /*
  int condition = 10;
  if(condition < 10)
  {
    Serial.println("condition < 10");
  }
  else if(condition = 10)
  {
    Serial.println("condition == 10");
  }
  else
  {
    Serial.println("condition > 10");
  }
  */
}


void minimalCalculator(int num1, int num2){
  int num3 = num1 + num2;
  Serial.println(num3);
}
