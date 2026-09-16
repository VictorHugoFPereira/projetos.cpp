#include "calculadora.h"

Calculadora::Calculadora(std::string cor, float memoria)
{
    this->cor = cor;
    this->memoria = 0;
}

void Calculadora::setmemoria(float memoria){
    this->memoria = memoria;
}

float Calculadora::getmemoria(float memoria){
    return memoria;
}

void Calculadora::setcor(std::string cor){
    this->cor = cor;
}

std:: string Calculadora::getcor(std::string cor){
    return cor;
}

float Calculadora::soma(float n1, float n2){

    return n1 + n2;
}

float Calculadora::subtrai(float n1, float n2){
    return n1 - n2;
}

float Calculadora::multiplica(float n1, float n2){
    return n1 * n2;
}

float Calculadora::divide(float n1, float n2){
    return n1 / n2;
}

int Calculadora::eleva_ao_quadrado(int n1){
    return n1 * n1;
}

int Calculadora::eleva_ao_cubo(int n1){
    return  n1 * n1 * n1;
}

void Calculadora::imprime_info(){
    std:: cout << "Memoria:" << memoria << std:: endl;
    std:: cout << "Cor:" << cor << std:: endl;
}