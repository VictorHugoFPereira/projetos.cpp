#include "frota.h"
#include "motorista.h"
#include "veiculo.h"


Frota::Frota(std:: string empresa, Motorista motorista1, Motorista motorista2, Motorista motorista3):motorista1(motorista1),motorista2(motorista2),motorista3(motorista3){
    this->empresa = empresa;
}

void Frota::setempresa(std:: string nome){
    this->empresa=empresa;
}

std:: string Frota::getempresa(){
    return empresa;
}

void Frota::imprime_info(){
    std::cout << "--------------------------------------------" << std::endl;
    std::cout << "Empresa:" << empresa << std::endl;
    std::cout << "Primeiro Motorista:" << motorista1.getnome() << std::endl;
    std::cout << "Segundo Motorista:" << motorista2.getnome() << std::endl;
    std::cout << "Terceiro Motorista:" << motorista3.getnome() << std::endl;
    std::cout << "--------------------------------------------" << std::endl;
}