#include "veiculo.h"

Veiculo::Veiculo(std:: string modelo, std::string placa, float nivel_combustivel)
{
    this->modelo = modelo;
    this->placa = placa;
    this->nivel_combustivel = nivel_combustivel;
}

std:: string Veiculo::getmodelo(){
    return modelo;
}

void Veiculo::setmodelo(std:: string modelo){
    this->modelo=modelo;
}

void Veiculo::setplaca(std:: string placa){
    this->placa=placa;
}

std:: string Veiculo::getplaca(){
    return placa;
}

float Veiculo::getnivel_combustivel(){
    return nivel_combustivel;
}

void Veiculo::setnivel_combustivel(float nivel_combustivel){
    this->nivel_combustivel = nivel_combustivel;
}

float Veiculo::abastece(float qtd_litros){
    nivel_combustivel+=qtd_litros;
    return nivel_combustivel;
}

float Veiculo::consome_combustivel(float qtd_litros){
    if(nivel_combustivel >= qtd_litros){
        nivel_combustivel -= qtd_litros;
        return nivel_combustivel;
    } else {
        return -1;
    }
}

float Veiculo::calcula_autonomia(float consumo_medio){
    return nivel_combustivel * consumo_medio;
}

void Veiculo::imprime_info(){
    std::cout << "--------------------------------------------" << std::endl;
    std::cout << "Nivel do combustivel:" << nivel_combustivel << std::endl;
    std::cout << "Modelo:" << modelo << std::endl;
    std::cout << "Placa:" << placa << std::endl;
}