int led1 = 6;
int button = 8;
void setup()
{
  pinMode(led1,OUTPUT);
  pinMode(button, INPUT);
  digitalWrite(led1,LOW);
  
}

int state = LOW; //global var
int cur,prev=LOW;
void loop()
{

  
//  int state = digitalRead(button);
  cur = digitalRead(button);
  if(cur==HIGH && prev == LOW)
  {
    if(state==LOW)
    {
      state = HIGH;
    }
    else
    {
      state = LOW;
    }
  }
  
  digitalWrite(led1, state);
  delay(100);
  prev=cur;
}

