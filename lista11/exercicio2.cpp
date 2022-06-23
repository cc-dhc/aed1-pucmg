#include<iostream>

const int FLAG = -99;

int main() {
  int entrada=0, positivos=0, zeros=0, negativos=0;
  while(entrada != FLAG) {
    std::cin >> entrada;
    if(entrada == FLAG) break;
    if(entrada > 0) positivos++;
    else if(entrada < 0) negativos++;
    else zeros++;
  }
  std::cout << "Positivos: " << positivos << std::endl;
  std::cout << "Negativos: " << negativos << std::endl;
  std::cout << "Zeros: " << zeros << std::endl;
}