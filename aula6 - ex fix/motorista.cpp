#include "motorista.h"
#include "veiculo.h"

Motorista::Motorista(std:: string nome, int cnh, Veiculo veiculo_associado):veiculo_associado(veiculo_associado){
    this->nome = nome;
    this->cnh = cnh;
}

std:: string Motorista::getnome(){
    return nome;
}

void Motorista::setnome(std::string nome){
    this->nome = nome;
}

int Motorista::getcnh(int cnh){
    return cnh;
}

void Motorista::setcnh(int cnh){
    this->cnh = cnh;
}

Veiculo Motorista::getveiculo_associado(){
    return veiculo_associado;
}

void Motorista::setveiculo_associado(std:: string veiculo_associado){
    this->cnh = cnh;
}

float Motorista::abastece(float qtd_litros){return veiculo_associado.abastece(qtd_litros);}

float Motorista::realiza_viagem(float distancia, float consumo_medio, float nivel_combustivel, float qtd_litros)
{
    float combustivel_necessario = distancia/consumo_medio;

    if(combustivel_necessario > nivel_combustivel){
        std::cout << "Nao ha combustivel suficiente." << std::endl;
    } else {
        std::cout << "Viagem realizada com sucesso!" << std::endl;
        veiculo_associado.consome_combustivel(qtd_litros);
    }
    return 0;

}
void Motorista::imprime_info(){
    std::cout << "============================================" << std::endl;
    std::cout << "Nome do Motorista:" << nome << std::endl;
    std::cout << "CNH:" << cnh << std::endl;
    std::cout << "Veiculo Associado:" << veiculo_associado.getmodelo() << std::endl;
    std::cout << "--------------------------------------------" << std::endl;
}


