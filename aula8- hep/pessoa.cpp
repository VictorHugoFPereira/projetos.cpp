#include "pessoa.h"

Pessoa::Pessoa(std::string nome, int idade){
    this->nome = nome;
    this->idade = idade;
}

std::string Pessoa::getnome(){
    return nome;
}

void Pessoa::setnome(std::string nome){
    this->nome = nome;
}

int Pessoa::getidade(){
    return idade;
}

void Pessoa::setidade(int idade){
    this->idade = idade;
}

void Pessoa::imprime_dados(){
    std::cout << "Nome: " << nome << std::endl;
    std::cout << "Idade: " << idade << " anos" << std::endl;
}