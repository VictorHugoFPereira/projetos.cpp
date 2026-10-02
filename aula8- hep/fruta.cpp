#include "fruta.h"

Fruta::Fruta(){}

Fruta::Fruta(float preco){
    this->preco = preco;
}

float Fruta::getpreco(){
   return preco; 
}

void Fruta::setpreco(float preco){
    this->preco = preco;
}

double Fruta::calcula_preco(double taxa){
    return taxa*preco;
}