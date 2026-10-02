#include "melancia.h"
#include "fruta.h"

Melancia::Melancia(float preco_adicional, bool epoca, float preco):Fruta(preco){
    this->preco_adicional = preco_adicional;
    this->epoca = epoca;
}

float Melancia::getpreco_adicional(){
    return preco_adicional;
}

void Melancia::setpreco_adicional(float preco_adicional){
    this->preco_adicional = preco_adicional;
}

bool Melancia::getepoca(){
    return epoca;
}

void Melancia::setepoca(bool epoca){
    this->epoca = epoca;
}

float Melancia::calcula_preco_final(){
    if(this->epoca == false){
        return getpreco()+preco_adicional;
    } else {
        return getpreco();
    }
}
