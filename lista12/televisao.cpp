#include "televisao.hpp"
#include<string>

void Televisao::muteControl() {
  this->isMuted = !this->isMuted;
}

void Televisao::increaseVolume() {
  this->volume++;
}

void Televisao::decreaseVolume() {
  this->volume--;
}

void Televisao::nextChannel() {
  this->channel = (this->channel+1)%100;
}

void Televisao::backChannel() {
  this->channel = (this->channel-1)%100;
}

void Televisao::setChannel(uint channel) {
  if(channel < 100) {
    this->channel = channel;
  }
}

uint Televisao::getChannel() {
  return this->channel;
}

uint Televisao::getVolume() {
  return this->volume;
}

void Televisao::printInfo() {
  std::cout << "Informações sobre a Televisão:" << std::endl;
  std::cout << "Canal: " << this->channel << std::endl;
  std::cout << "Volume: " << this->volume << std::endl;
  if(this->isMuted) {
    std::cout << "A televisão está muda!" << std::endl;
  }
}