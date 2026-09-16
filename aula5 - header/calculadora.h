#ifndef CALCULADORA_H
#define CALCULADORA_H
#include <iostream>

class Calculadora
{
private:
    float memoria;
    std:: string cor;
public:
    Calculadora(std::string cor,float memoria);
    float soma(float n1, float n2);
    float subtrai(float n1, float n2);
    float multiplica(float n1, float n2);
    float divide(float n1, float n2);
    int eleva_ao_quadrado(int n1);
    int eleva_ao_cubo(int n1);
    void setmemoria(float n1);
    float getmemoria(float n1);
    void setcor(std::string cor);
    std:: string getcor(std::string cor);
    void imprime_info();
};
#endif