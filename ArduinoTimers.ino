/* Written by Nukeman14x
 *  Create, Share, Inspire
 */
unsigned long Freq1, Freq2;
unsigned long tmpTime1, tmpTime2;


void setup() {
    Freq1 = 10; // Sets Timer Freq to 10 ms
    Freq2 = 100; // Sets Timer Freq to 100 ms

}

void loop() {
  if(millis() < tmpTime1){ // In case of Overflow
    tmpTime1 = 0, tmpTime2 = 0;
  }
  
  if(millis() - tmpTime1 >= Freq1){
    Timer1(); // Runs Timer1
  }

  if(millis() - tmpTime2 >= Freq2){
    Timer2(); // Runs Timer2
  }
}

void Timer1(){// Signal Conversion
  tmpTime1 = millis(); // reset timer
  // Code here
}

void Timer2(){
  tmpTime2 = millis(); // reset timer
  // Code here
}

//A Wait Function Instead of Delay for Smoother Processing
void Wait(int WaitTime){
  long TmpTime = millis();
  while (millis() - TmpTime < WaitTime){
    //do whatever while Waiting
  }
}
