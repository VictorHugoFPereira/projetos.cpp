#ifndef VEICULO_H
#define VEICULO_H
#include <iostream>

class Veiculo {
private:
    std:: string modelo;
    std:: string placa;
    float nivel_combustivel;
public:
    Veiculo(std::string cor, std::string placa, float nivel_combustivel);
    std::string getmodelo();
    void setmodelo(std:: string modelo);
    std::string getplaca();
    void setplaca(std:: string placa);
    float getnivel_combustivel();
    void setnivel_combustivel(float nivel_combustivel);
    float abastece(float qtd_litros);
    float consome_combustivel(float qtd_litros);
    float calcula_autonomia(float consumo_medio);
    void imprime_info();
};



#endif