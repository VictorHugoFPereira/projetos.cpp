#include "banana.h"

Banana::Banana(){}

Banana::Banana(std::string tipo, float preco): Fruta(preco){
    this->tipo = tipo;
}

std::string Banana::gettipo(){
    return tipo;
}

void Banana::settipo(std::string tipo){
    this->tipo = tipo;
}



