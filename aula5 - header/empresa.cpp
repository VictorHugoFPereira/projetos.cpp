#include "empresa.h"
#include "funcionarioCaixa.h"

Empresa::Empresa(std::string nome, FuncionarioCaixa funcionario1, FuncionarioCaixa funcionario2):funcionario1(funcionario1), funcionario2(funcionario2){
    this-> nome = nome;
}

std::string Empresa::getnome(){
    return nome;
}

void Empresa::setnome(std::string nome){
    this-> nome = nome;
}

void Empresa::imprime_info(){
    std::cout << "Nome da Empresa:" << nome << std::endl;
    std::cout << "Funcionario 1:" << funcionario1.getnome() << std::endl;
    std::cout << "Funcionario 2:" << funcionario2.getnome() << std::endl;
}