#ifndef FUNCIONARIOCAIXA_H
#define FUNCIONARIOCAIXA_H
#include "calculadora.h"
#include <iostream>
class FuncionarioCaixa
{
private:
    std:: string nome;
    std:: string endereco;
    Calculadora calculadora;
public:
    FuncionarioCaixa(std::string nome, std::string endereco, Calculadora calculadora);
    void setnome(std::string nome);
    std:: string getnome();
    std:: string getendereco();
    void setendereco(std::string endereco);
    void imprime_info();
    float soma(float n1, float n2);
    float subtrai(float n1, float n2);
    float multiplica(float n1, float n2);
    float divide(float n1, float n2);
    int eleva_ao_quadrado(int n1);
    int eleva_ao_cubo(int n1);
};

#endif