#ifndef ALUNO_H
#define ALUNO_H
#include "pessoa.h"
class Aluno: public Pessoa{
private:
float nota;
public:
Aluno(float nota, std::string nome, int idade);
float getnota();
void setnota(float nota);
virtual void imprime_dados();
};




#endif