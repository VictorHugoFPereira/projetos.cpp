#ifndef PESSOA_H
#define PESSOA_H
#include <iostream>
class Pessoa{
private:
std::string nome;
int idade;
public:
Pessoa(std::string nome, int idade);
std::string getnome();
void setnome(std::string nome);
int getidade();
void setidade(int idade);
virtual void imprime_dados();
};

#endif 
