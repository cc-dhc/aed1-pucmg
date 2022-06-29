#include<iostream>
#include<string>
#include<fstream>

class Pessoa {
  public:
    int codigo;
    std::string nome;
    int idade;
    std::string endereco;
    int numero;
    int complemento;

    Pessoa() {}

    Pessoa(int codigo, std::string nome, int idade, 
      std::string endereco, int numero, int complemento):
      codigo(codigo), nome(nome), idade(idade), 
      endereco(endereco), complemento(complemento) {}
};

int main() {
  int n;
  std::cout << "Quantidade de pessoas: ";
  std::cin >> n;
  Pessoa pessoas[n];

  for(int i=0; i<n; i++) {
    std::cout << std::endl << "Pessoa " << i+1 << ":" << std::endl;

    std::cout << "Código: ";
    std::cin >> pessoas[i].codigo;

    std::cout << "Nome: ";
    std::cin >> pessoas[i].nome;

    std::cout << "Idade: ";
    std::cin >> pessoas[i].idade;

    std::cout << "Endereco: ";
    std::cin >> pessoas[i].endereco;

    std::cout << "Numero: ";
    std::cin >> pessoas[i].numero;

    std::cout << "Complemento: ";
    std::cin >> pessoas[i].complemento;
  }

  std::cout << "Nome do arquivo: ";
  std::string caminho;
  std::cin >> caminho;

  std::ofstream file;

  file.open(caminho, std::ofstream::binary);

  if(file.is_open()) {
    file.write((char*)&pessoas, sizeof(Pessoa)*n);
    file.close();
  }
}