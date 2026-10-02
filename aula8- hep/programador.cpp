#include "programador.h"

Programador::Programador(std::string fav_lang, std::string nome, int idade):Pessoa(nome, idade){
    this->fav_lang = fav_lang;
}

std::string Programador::getfav_lang(){
    return fav_lang;
}

void Programador::setfav_lang(std::string fav_lang){
    this->fav_lang = fav_lang;
}

void Programador::imprime_dados(){
    std::cout << "Nome: " << getnome() << std::endl;
    std::cout << "Idade: " << getidade() << std::endl;
    std::cout << "Linguagem Favorita: " << fav_lang << std::endl;
}