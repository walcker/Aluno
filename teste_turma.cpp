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
  
  Aluno* jaspion = new Aluno();
  jaspion->setNome("Jaspion police");
  jaspion->setCpf("47792937347");
  jaspion->setMatricula(7544);
  jaspion->setEmail("jaspion@manchete.com.br");
  jaspion->setTelefone("97654-9876");

  imd0030.addAluno(jaspion);

  Aluno* lampiao = new Aluno();
  lampiao->setNome("Lampião bandido");
  lampiao->setCpf("000000666");
  lampiao->setMatricula(256346547);
  lampiao->setEmail("lampiao@nordestebr");
  
  imd0030.addAluno(lampiao);
  

  cout << imd0030.getId() << " _ " << imd0030.getCapacidade() << "/" << CAPACIDADE_MAX << endl;

  imd0030.listarAlunos();

  imd0030.removePeloNome("Qualquer um");
  imd0030.removePeloCpf("47792937347");

  cout << imd0030.getId() << " _ " << imd0030.getCapacidade() << "/" << CAPACIDADE_MAX << endl;

  imd0030.listarAlunos();

  return 0;
}