#include "aluno.h"

Aluno::Aluno(float nota, std::string nome, int idade):Pessoa(nome, idade){
    this->nota = nota;
}

float Aluno::getnota(){
    return nota;
}

void Aluno::setnota(float nota){
    this->nota = nota;
}

void Aluno::imprime_dados(){
    std::cout << "Nome: " << getnome() << std::endl;
    std::cout << "Idade: " << getidade() << std::endl;
    std::cout << "Nota: " << nota << std::endl;
}