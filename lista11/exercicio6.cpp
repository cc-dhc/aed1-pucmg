#include<iostream>
#include<string>
#include<fstream>

class Pessoa {
  public:
    std::string nome;
    int dia_aniversario;
    int mes_aniversario;

    Pessoa() {}

    Pessoa(std::string nome, int dia, int mes): nome(nome), dia_aniversario(dia), mes_aniversario(mes) {}
};

int main() {
  Pessoa pessoas[10];
  int meses[12];
  std::string linhas[12] = {""};

  for(int i=0; i<10; i++) {
    std::cout << std::endl << "Pessoa " << i+1 << ":" << std::endl;

    std::cout << "Nome: ";
    std::cin >> pessoas[i].nome;

    std::cout << "Dia do aniversário: ";
    std::cin >> pessoas[i].dia_aniversario;

    std::cout << "Mês do aniversário: ";
    std::cin >> pessoas[i].mes_aniversario;

    linhas[pessoas[i].mes_aniversario-1].append(pessoas[i].nome + "\n");
    meses[pessoas[i].mes_aniversario-1]++;
  }

  std::cout << "Nome do arquivo: ";
  std::string caminho;
  std::cin >> caminho;

  std::ofstream file;

  file.open(caminho, std::ofstream::out);

  if(file.is_open()) {
    for(int i=0; i<12; i++) {
        file << "Mês " << i+1 << ": " << meses[i] << "aniversariantes" << std::endl << linhas[i];
    }
    file.close();
  }
}