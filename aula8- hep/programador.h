#ifndef PROGRAMADOR_H
#define PROGRAMADOR_H
#include "pessoa.h"

class Programador: public Pessoa{
private:
std::string fav_lang;
public:
Programador(std::string fav_lang, std::string nome, int idade);
std::string getfav_lang();
void setfav_lang(std::string fav_lang);
virtual void imprime_dados();
};


#endif