#include <iostream>

#include "turma.hpp"

using namespace std;

int main(int argc, char const *argv[]){
  Turma imd0030;
  imd0030.setNome("Linguagem de programação I");
  imd0030.setId("IMD0030");

  Aluno* maria = new Aluno();
  maria->setNome("Maria Antonieta");
  maria->setCpf("123456789-11");
  maria->setMatricula(12345);
  maria->setEmail("maria@escolinha.com.br");
  maria->setTelefone("94509-3456");
  
  imd0030.addAluno(maria);

  cout << imd0030.getId() << " _ " << imd0030.getCapacidade() << "/" << CAPACIDADE_MAX << endl;

  return 0;
}