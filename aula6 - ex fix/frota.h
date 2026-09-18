#ifndef FROTA_H
#define FROTA_H
#include "veiculo.h"
#include "motorista.h"

class Frota{
private:
    std::string empresa;
    Motorista motorista1;
    Motorista motorista2;
    Motorista motorista3;
public:
    Frota(std::string empresa, Motorista motorista1, Motorista motorista2, Motorista motorista3);
    std::string getempresa();
    void setempresa(std::string empresa);
    void setnome(std::string nome);
    std::string getmotorista();
    void setmotorista(std::string motorista);
    void imprime_info();
};

#endif