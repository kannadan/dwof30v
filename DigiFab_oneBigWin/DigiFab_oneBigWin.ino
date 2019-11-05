int checkBigWin;
int randNumber;
int modul;
int full;
int dip;
int switchState = 0;
int notes[] = {262, 294, 330, 349, 375, 600};
long noteDuration;

// weight of a prize. Procentage is calculated weight / (total weights)
const int prize1 = 60;
const int prize2 = 20;
const int prize3 = 100;
const int prize4 = 20;
const int prize5 = 60;
const int prize6 = 20;
const int prize7 = 80;
const int prize8 = 40;
const int prize9 = 80;
const int prize10 = 1;

const int function1 = 15;
const int function2 = 1;
const int function3 = 1;
const int function4 = 1;

int winOdds[] = {prize1, prize2, prize3, prize4, prize5, prize6, prize7, prize8, prize9, prize10};
int functionOdds[] = {function1, function2, function3, function4};

bool executed = true;
#include "pitches.h"
#include "songs.h"

void setup()
{
  pinMode(0,OUTPUT);
  pinMode(1,OUTPUT);
  pinMode(2,OUTPUT);
  pinMode(3,OUTPUT);
  pinMode(4,OUTPUT);
  pinMode(5,OUTPUT);
  pinMode(6,OUTPUT);
  pinMode(7,OUTPUT);
  pinMode(8,OUTPUT);
  pinMode(9,OUTPUT);
  pinMode(11,INPUT);
  randomSeed(analogRead(0));
  //Serial.begin(9600);
}

void loop()
{
  switchState = digitalRead(11);
  if (switchState == HIGH){
    executed = false;
  }
  if (executed == false){
    //mario1();
    
    pacman();
    // Chooses a random number and blinks all the leds in order as many times as the number indicates. Also plays a increasing pitched tone
    int winner = selectWinner();
    int endFunction = selectFunction();
    //Serial.println(winner);
    int rounds = random(3, 15);
    int slowDown = random(4, 15);
    int steps = rounds*10 + winner;
    int iteration = 0;
    for(iteration; iteration<steps - slowDown; iteration++)
    {
      beeb(iteration%10, 0);
      
    }
    switch(endFunction)
    {
      case 0:
        slowStop(winner, iteration, steps, slowDown);
        break;
      case 1:
        randStop(winner, iteration, steps, slowDown);
        break;
      case 2:
        longStop(winner, iteration, steps, slowDown);
        break;
      case 3:
        kruunaStop(winner, iteration, steps);
        break;    
    }    
    
    executed = true;
  }

  noTone(12);
}

void beeb(int pinToLight, int timeOn){
  digitalWrite(pinToLight,HIGH);
  //tone(12, 200*(1+pinToLight%2));
  waka(0.4);
  delay(timeOn);
  digitalWrite(pinToLight,LOW);
  delay(5);
}

int selectWinner(){
  int weightSum  = 0;
  float relWeights[10];
  float winner = random(0, 100) / float(100);
  //float probs[10];
  for(int i = 0; i<10; i++)
  {
    weightSum += winOdds[i];
  }
  for(int i = 0; i<10; i++)
  {
    relWeights[i] = winOdds[i] / float(weightSum);
  }
  for(int i = 0; i<10; i++)
  {
    float prob = 0;
    for(int k = 0; k<=i; k++)
    {
      prob += relWeights[k];
    }
    if(winner <= prob)
    {
      return i;
    }
  }
  return 0;
}

int selectFunction(){
  int weightSum  = 0;
  int functions = 4;    //increment this when adding a new finisher
  float relWeights[functions];
  float winner = random(0, 100) / float(100);
  for(int i = 0; i<functions; i++)
  {
    weightSum += functionOdds[i];
  }
  for(int i = 0; i<functions; i++)
  {
    relWeights[i] = winOdds[i] / float(weightSum);
  }
  for(int i = 0; i<functions; i++)
  {
    float prob = 0;
    for(int k = 0; k<=i; k++)
    {
      prob += relWeights[k];
    }
    if(winner <= prob)
    {
      return i;
    }
  }
  return 0;
}

void slowStop(int winner, int iteration, int steps, int slowDown)
{
    //slow down the counter befre stop
    
    int slowDownStep = 900/slowDown;
    int slowDownCounter = 1;
    for(iteration; iteration<steps; iteration++)
      {
        beeb(iteration%10, 100 + slowDownStep*slowDownCounter);
        slowDownCounter++;
      }
    digitalWrite(winner,HIGH);
    waka(1);
    delay(slowDownStep*(slowDownCounter-1));
    mario2();
    digitalWrite(winner,LOW);
}

void randStop(int winner, int iteration, int steps, int slowDown)
{
    //slow down the counter and take random steps
    
    int slowDownStep = 900/slowDown;
    int slowDownCounter = 1;
    for(iteration; iteration<steps; iteration++)
      {
        beeb(random(0, 9), 100 + slowDownStep*slowDownCounter);
        slowDownCounter++;
      }
    digitalWrite(winner,HIGH);
    waka(1);
    delay(slowDownStep*(slowDownCounter-1));
    mario2();
    digitalWrite(winner,LOW);
}

void longStop(int winner, int iteration, int steps, int slowDown)
{
    //slow down the counter, then take two steps back
    
    int slowDownStep = 900/slowDown;
    int slowDownCounter = 1;
    beeb(iteration%10, 0);
    iteration++;
    beeb(iteration%10, 0);
    iteration++;
    for(iteration; iteration<steps+3; iteration++)
      {
        if(iteration == steps+2){
          beeb(iteration%10, 100 + slowDownStep*slowDownCounter);
        }
        else{
          beeb(iteration%10, 600 + slowDownStep*slowDownCounter);  
        }
        
        slowDownCounter++;
      }
    iteration = iteration -2;
    beeb(iteration%10, 0);
    digitalWrite(winner,HIGH);
    waka(1);
    delay(slowDownStep*(slowDownCounter-1));
    mario2();
    digitalWrite(winner,LOW);
}

void kruunaStop(int winner, int iteration, int steps)
{
    //joko tai...

    int first;
    if(iteration%2 == 0)
    {
      first = iteration;
    }
    else
    {
      beeb(iteration%10, 0);
      iteration++;
      first = iteration;
    }
    for(iteration; iteration<steps + 10; iteration++)
      {
        beeb((first + iteration%2)%10, 0);
      }
    
    beeb((first + iteration%2)%10, 900);
    digitalWrite(winner,HIGH);
    waka(1);
    delay(900);
    mario2();
    digitalWrite(winner,LOW);
}

