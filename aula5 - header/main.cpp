#include "empresa.h"
#include "funcionarioCaixa.h"
#include "calculadora.h"

int main(){
///////////CRIANDO OS OBJETOS DA CLASSE CALCULADORA, DEFININDO OS VALORES DOS ATRIBUTOS
    Calculadora c1("Vermelha", 3);
    Calculadora c2("Azul", 4);
//////////CRIANDO OS OBJETOS DA CLASSE FUNCIONÁRIO, DEFININDO OS VALORES DOS ATRIBUTOS E IMPRIMINDO INFORMAÇÕES DOS FUNCIONÁRIOS
    FuncionarioCaixa funcionario1("Fabiano", "Rua Brasil", c1);
    FuncionarioCaixa funcionario2("Nicolas", "Rua Tramontina", c2);
    funcionario1.imprime_info();
    funcionario2.imprime_info();
//////////CRIANDO O OBJETO DA CLASSE EMPRESA, DEFININDO OS VALORES DOS ATRIBUTOS E IMPRIMINDO INFORMAÇÕES DOS FUNCIONÁRIOS
    Empresa empresa("Atacadao", funcionario1, funcionario2);
    empresa.imprime_info();
///////////DECLARANDO AS VARIÁVEIS DA CALCULADORA DO FUNCIONÁRIO 1
    float x, y;
    int z;
///////////PREENCHENDO OS NÚMEROS DA CALCULADORA DO FUNCIONÁRIO 1   
    std::cout << "Escreva o primeiro numero da soma, Funcionario 1:";
    std::cin >> x;
    std::cout << "Escreva o segundo numero da soma, Funcionario 1:";
    std::cin >> y;
    std::cout << "Escreva o numero para ser elevado ao quadrado e ao cubo, Funcionario 1:";
    std::cin >> z;  
//////////CÁLCULOS DA CALCULADORA DO FUNCIONÁRIO 1
    std::cout << "----------------------CALCULADORA DO FUNCIONARIO 1----------------------------" << std::endl;
    std::cout << "Soma: " << funcionario1.soma(x, y) << std::endl;
    std::cout << "Subtracao: " << funcionario1.subtrai(x, y) << std::endl;
    std::cout << "Multiplicacao: " << funcionario1.multiplica(x, y) << std::endl;
    std::cout << "Divisao: " << funcionario1.divide(x, y) << std::endl;
    std::cout << "Elevado ao quadrado: " << funcionario1.eleva_ao_quadrado(z) << std::endl;
    std::cout << "Elevado ao cubo: " << funcionario1.eleva_ao_cubo(z) << std::endl;
    std::cout << "------------------------------------------------------------------------------" << std::endl;
    
///////////DECLARANDO AS VARIÁVEIS DA CALCULADORA DO FUNCIONÁRIO 2
    float n1, n2;
    int n3;
/////////PREENCHENDO OS NÚMEROS DA CALCULADORA DO FUNCIONÁRIO 2
    std::cout << "Escreva o primeiro numero da soma, Funcionario 1:";
    std::cin >> n1;
    std::cout << "Escreva o segundo numero da soma, Funcionario 1:";
    std::cin >> n2;
    std::cout << "Escreva o numero para ser elevado ao quadrado e ao cubo, Funcionario 1:";
    std::cin >> n3;  
////////CÁLCULOS DA CALCULADORA DO FUNCIONÁRIO 2
    std::cout << "----------------------CALCULADORA DO FUNCIONARIO 1----------------------------" << std::endl;
    std::cout << "Soma: " << funcionario1.soma(n1, n2) << std::endl;
    std::cout << "Subtracao: " << funcionario1.subtrai(n1, n2) << std::endl;
    std::cout << "Multiplicacao: " << funcionario1.multiplica(n1, n2) << std::endl;
    std::cout << "Divisao: " << funcionario1.divide(n1, n2) << std::endl;
    std::cout << "Elevado ao quadrado: " << funcionario1.eleva_ao_quadrado(n3) << std::endl;
    std::cout << "Elevado ao cubo: " << funcionario1.eleva_ao_cubo(n3) << std::endl;
    std::cout << "------------------------------------------------------------------------------" << std::endl;
    
    return 0;
}