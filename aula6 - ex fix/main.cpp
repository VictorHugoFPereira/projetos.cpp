#include "frota.h"
#include "motorista.h"
#include "veiculo.h"

int main(){
///////VEICULO 1 E MOTORISTA 1 

    Veiculo v1("Astra","CCGG", 0);
    Motorista m1("Carlos",12312, v1);
    m1.abastece(40);
    m1.imprime_info();
    m1.getveiculo_associado().imprime_info();
    m1.realiza_viagem(200, 10, 40, 40);
///////VEICULO 2 E MOTORISTA 2
    Veiculo v2("Celta","VVVXXX", 0);
    Motorista m2("Silvia", 13121, v2);
    m2.abastece(20);
    m2.imprime_info();
    m2.getveiculo_associado().imprime_info();
    m2.realiza_viagem(300, 10, 20, 20);
///////VEICULO 3 E MOTORISTA 3
    Veiculo v3("Onix","DDSSFF",0);
    Motorista m3("Jaberson",18678, v3);
    m3.abastece(50);
    m3.imprime_info();
    m3.getveiculo_associado().imprime_info();
    std::cout << "Autonomia: " << m3.getveiculo_associado().calcula_autonomia(12) << std::endl;
    
///////CRIANDO O OBJETOS FROTA E IMPRIMINDO AS INFORMAÇÕES
    Frota f1("Seara", m1, m2, m3);
    f1.imprime_info();
}