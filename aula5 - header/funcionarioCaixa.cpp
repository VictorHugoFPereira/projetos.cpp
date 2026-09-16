#include "calculadora.h"
#include "funcionarioCaixa.h"

FuncionarioCaixa::FuncionarioCaixa(std:: string nome, std::string endereco, Calculadora calculadora):calculadora(calculadora){
    this->nome = nome;
    this->endereco = endereco;
}

void FuncionarioCaixa::setnome(std::string nome){
    this-> nome = nome;
}

std:: string FuncionarioCaixa::getnome(){
    return nome;
}

void FuncionarioCaixa::setendereco(std::string endereco){
    this->endereco = endereco;
}

std:: string FuncionarioCaixa::getendereco(){
    return endereco;
}

float FuncionarioCaixa::soma(float n1, float n2){return calculadora.soma(n1,n2);}

float FuncionarioCaixa::subtrai(float n1, float n2){return calculadora.subtrai(n1,n2);}

float FuncionarioCaixa::divide(float n1, float n2){return calculadora.divide(n1,n2);}

float FuncionarioCaixa::multiplica(float n1, float n2){return calculadora.multiplica(n1,n2);}

int FuncionarioCaixa::eleva_ao_quadrado(int n1){return calculadora.eleva_ao_quadrado(n1);}

int FuncionarioCaixa::eleva_ao_cubo(int n1){return calculadora.eleva_ao_cubo(n1);}

void FuncionarioCaixa::imprime_info(){
    std::cout << "Nome:" << nome << std::endl;
    std::cout << "Endereco:" << endereco << std::endl;
}
