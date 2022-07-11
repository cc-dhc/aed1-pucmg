#include<iostream>

class Televisao {
  private:
    uint volume;
    uint channel;
    bool isMuted;

  public:
    Televisao(uint volume=0, uint canal=10): 
    volume(volume), channel(canal) {};

    void muteControl();
    void increaseVolume();
    void decreaseVolume();
    uint getVolume();

    void nextChannel();
    void backChannel();
    void setChannel(uint channel);
    uint getChannel();

    void printInfo();
    
};