#include <iostream>
#include "aluno.hpp"

using namespace std;

int main() {
  Aluno novo;
  novo.setNome("PauloPaulada");
  novo.setCpf("123456789-11");
  novo.setMatricula(12345);
  novo.setEmail("fortao@escolinha.com.br");
  novo.setTelefone("94509-3456");

  cout << "Temos um novo aluno: " << novo.getNome() << endl;
  return 0;
}