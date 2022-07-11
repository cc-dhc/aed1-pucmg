#include<string>
#include<vector>

class Pessoa {
  private:
    std::string nome;
    ulong cpf;
    ulong telefone;

  public:
    Pessoa();
    Pessoa(std::string nome, ulong cpf, ulong telefone): 
    nome(nome), cpf(cpf), telefone(telefone) {}

    std::string getNome();
    void setNome(std::string nome);

    ulong getCPF();
    void setCPF(ulong cpf);

    ulong getTelefone();
    void setTelefone(ulong telefone);
};

class Funcionario: Pessoa {
  private:
    uint id;
    Cargo cargo;

  public:
    Funcionario();
    Funcionario(uint id, Cargo cargo): id(id), cargo(cargo) {}

    uint getId();
    void setId(uint id);

    Cargo getCargo();
    void setCargo(Cargo cargo);
};

enum Cargo {
  Programador,
  Pesquisador,
  Professor
};

class Cliente: Pessoa {
  private:
    std::string endereco;
  
  public:
    Cliente();
    Cliente(std::string endereco): endereco(endereco) {}

    std::string getEndereco();
    void setEndereco(std::string endereco);
};

class Empresa {
  private:
    std::vector<Funcionario> funcionarios;
    std::vector<Cliente> clientes;

  public:
    Empresa();

    void listarClientes();
    void listarFuncionarios();
};