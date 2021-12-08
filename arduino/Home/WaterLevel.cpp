#include<Arduino.h>
class WaterLevel{
  private:
    int probe;
  public:
    WaterLevel(int probe){
      this->probe = probe;
      pinMode(probe, INPUT);
    }

    bool isTouching(){
      return analogRead(probe) > 512 ? true : false;
    }

    int waterAt(){
      
    }
};
