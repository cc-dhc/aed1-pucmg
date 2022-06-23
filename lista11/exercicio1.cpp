#include<iostream>

int main() {
  int nascimento, idade;
  char fezAniversario;
  
  std::cin >> nascimento >> fezAniversario;

  idade = 2022 - nascimento;
  if(fezAniversario == 'N') idade--;

  std::cout << idade << std::endl;
  if(idade >= 18) std::cout << "Pode tirar carteira." << std::endl;
  else std::cout << "Ainda não pode tirar carteira." << std::endl;
}