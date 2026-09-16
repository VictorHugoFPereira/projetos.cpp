#ifndef EMPRESA_H
#define EMPRESA_H
#include "calculadora.h"
#include "funcionarioCaixa.h"

class Empresa{
private:
    std:: string nome;
    FuncionarioCaixa funcionario1;
    FuncionarioCaixa funcionario2;

public:
    Empresa(std::string nome, FuncionarioCaixa funcionario1, FuncionarioCaixa funcionario2);
    std::string getnome();
    void setnome(std::string nome);
    void imprime_info();
}; 


#endif
