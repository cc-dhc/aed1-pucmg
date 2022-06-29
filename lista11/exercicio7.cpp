#include <iostream>
#include <string>
#include <fstream>
#include <iomanip>

class Eletrodomestico {
  public:
    std::string loja;
    u_long telefone;
    float preco;

    Eletrodomestico() {}

    Eletrodomestico(std::string loja, ulong telefone, float preco): loja(loja), telefone(telefone), preco(preco) {}
};

int main() {
  Eletrodomestico eletros[15];
  float preco_total = 0;

  std::cout << "Nome do arquivo de entrada: ";
  std::string caminho;
  std::cin >> caminho;

  std::ifstream file;
  file.open(caminho, std::ios_base::in);

  if (file.is_open())
  {
    for(int i=0; i<15; i++) {
      file >> eletros[i].loja >> eletros[i].telefone >> eletros[i].preco;
      preco_total += eletros[i].preco;
    }
    file.close();
  }

  std::cout << "Nome do arquivo de saída: ";
  std::cin >> caminho;

  std::ofstream fileout;
  fileout.open(caminho, std::ios_base::app);

  float media = preco_total/15.0F;

  if (fileout.is_open())
  {
    fileout << "Média: "<< std::fixed << std::setprecision(3) << media << std::endl;
    for(int i=0; i<15; i++) {
      if(eletros[i].preco < media) {
        fileout << eletros[i].loja << ": " << eletros[i].telefone << std::endl;
      }
      
    }
    file.close();
  }
}