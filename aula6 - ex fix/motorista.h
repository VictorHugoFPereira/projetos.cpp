#ifndef MOTORISTA_H
#define MOTORISTA_H
#include "veiculo.h"
class Motorista{
private:
    std::string nome;
    int cnh;
    Veiculo veiculo_associado;
public:
    Motorista(std::string nome, int cnh, Veiculo veiculo_associado);
    std::string getnome();
    void setnome(std:: string nome);
    int getcnh(int cnh);
    void setcnh(int cnh);
    Veiculo getveiculo_associado();
    void setveiculo_associado(std::string veiculo_associado);
    float abastece(float qtd_litros);
    float realiza_viagem(float distancia, float consumo_medio, float nivel_combustivel, float qtd_litros);
    void imprime_info();
};
#endif 