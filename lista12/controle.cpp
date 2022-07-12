#include "televisao.hpp"
#include<iostream>
#include<sstream>

int main() {
  Televisao televisao;
  while(true) {
    std::cout << "Controle Remoto:" << std::endl;
    std::cout << "(1) - Alterar volume" << std::endl;
    std::cout << "(2) - Alterar canal" << std::endl;
    std::cout << "(3) - Imprimir informações" << std::endl;

    int comando;
    std::cin >> comando;

    switch(comando) {
      case 1:
        char opcao;
        std::cin >> opcao;
        switch(opcao) {
          case '+':
            televisao.increaseVolume();
            break;
          case '-':
            televisao.decreaseVolume();
            break;
          case 'M':
            televisao.muteControl();
            break;
        }
        break;
      case 2:
        std::string escolha;
        std::cin >> escolha;
        if(escolha == "+") televisao.nextChannel();
        else if(escolha == "-") televisao.backChannel();
        else {
          std::stringstream ss;
          ss << escolha;
          uint channel;
          ss >> channel;
          televisao.setChannel(channel);
        }
        break;
      case 3:
        televisao.printInfo();
        break;
    }
    std::cout << std::endl;
  }
}