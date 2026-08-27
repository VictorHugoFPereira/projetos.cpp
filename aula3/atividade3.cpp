#include <iostream>
#define TAM_MAX 2
int somarNumeros(int m[TAM_MAX][TAM_MAX])
{
    int soma = 0;
    for (int i = 0; i < TAM_MAX; i++)
    {
        for (int j = 0; j < TAM_MAX; j++)
        {
            std::cout << m[i][j];
            std::cout << ' ';
            soma += m[i][j];
        }
        if(i < TAM_MAX-1)
        {
            std::cout << "\n";
        }
    }
    return soma;
}

int multiplicarNumeros(int m[TAM_MAX][TAM_MAX])
{
    int produto = 1;
    std::cout << "\n";
    std::cout << "-------------------";
    std::cout << "Multiplicacao";
    std::cout << "-------------------";
    std::cout << "\n";
    for (int i = 0; i < TAM_MAX; i++)
    {
        for (int j = 0; j < TAM_MAX; j++)
        {
            std::cout << m[i][j];
            std::cout << ' ';
            produto *= m[i][j];
        }
        if(i < TAM_MAX-1)
        {
            std::cout << "\n";
        }
    }
    return produto;
}

int main()
{
    int m[TAM_MAX][TAM_MAX];
    std::cout << "Escreva os numeros da matriz:" << std::endl;
    for (int i = 0; i < TAM_MAX; i++)
    {
        for (int j = 0; j < TAM_MAX; j++)
        {
            std::cin >> m[i][j];
        }
    }
    int soma = somarNumeros(m);
    std::cout << soma;
    int produto = multiplicarNumeros(m);
    std::cout <<produto;
}
