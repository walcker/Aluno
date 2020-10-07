#include <iostream>
#include "turma.hpp"

using namespace std;

string Turma::getNome(){
  return this->nome;
};
  void Turma::setNome(string nome){
    this->nome = nome;
  };
  string Turma::getId(){
    return this->id;
  };
  void Turma::setId(string id){
    this->id = id;
  };
  void Turma::listarAlunos(){
    for (int i=0; i < this->capacidade; ++i){
      cout << alunos[i]->getNome() <<endl;
    }
  };
  void Turma::addAluno(Aluno* novo){
    if (capacidade < CAPACIDADE_MAX){
      alunos[capacidade++] = novo;
    }    
  };
  void Turma::remAluno(string nome){
    bool encontrou = false;
    for (int i=0; i<this->capacidade; ++i ){
      if (this->alunos[i]->getNome() == nome){
        Aluno* tmp = alunos[i];
        alunos[i] = alunos[i+1];
        alunos[i+1] = tmp;
        encontrou = true;
      }
    }
    if (encontrou){
      delete alunos[this->capacidade-1];
      this->capacidade--;
    }

  };

  int Turma::getCapacidade(){
    return this->capacidade;
  }