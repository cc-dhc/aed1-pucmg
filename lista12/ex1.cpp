#include "minha_empresa.h"
#include <string>

std::string Pessoa::getNome() {
  return this->nome;
}

void Pessoa::setNome(std::string nome) {
  this->nome = nome;
}

ulong Pessoa::getCPF() {
  return this->cpf;
}

void Pessoa::setCPF(ulong cpf) {
  this->cpf = cpf;
}

ulong 