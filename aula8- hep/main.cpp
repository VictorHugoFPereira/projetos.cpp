#include "melancia.h"
#include "banana.h"
#include "aluno.h"
#include "programador.h"

int main()
{
    ///////Criando os Objetos e imprimindo as informações
    Banana b1("Caturra", 1.45);
    Melancia m1(8.90, false, 10.0);
    std::cout << "Preco da banana: " << b1.calcula_preco(2.2) << std::endl;
    std::cout << "Tipo da banana:" << b1.gettipo() << std::endl;
    std::cout << "Preco da melancia com taxa: " << m1.calcula_preco_final() << std::endl;
    Aluno a1(8.0, "Jorge", 20);
    a1.imprime_dados();
    Programador p1("Java", "Isadora", 22);
    p1.imprime_dados();
    Pessoa *p2;

    //////Condicional para criar objeto conforme escolha do usuário
    int opcao;
    std::cout << "Sou um Programador(1), Sou um Aluno(2)" << std::endl;
    std::cin >> opcao;
    switch (opcao)
    {
        case 1:{
            p2 = new Programador("Java", "Gilberto",30);
            p2->imprime_dados();
            break;
        }
        case 2:{
            p2 = new Aluno(10, "Roberto", 20);
            p2->imprime_dados();
            break;
        }
        default:{
            std::cout << "Opcao Invalida!";
            break;
        }
        delete p2   ;
    }
}