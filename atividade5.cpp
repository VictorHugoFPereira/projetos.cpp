#include <iostream>
#include <fstream>
#define TAM_MAX 20
int main()
{
    int m[TAM_MAX][TAM_MAX], n;
    std::cout << "O numero que voce quer buscar:";
    std::cin >> n;
    std::cout << "Escreva os numeros da matriz:";
    std::ifstream arquivo("teste.txt");
    for (int i = 0; i < TAM_MAX; i++)
    {
        for (int j = 0; j < TAM_MAX; j++)
        {
            std::cin >> m[i][j];
        }
    }
    for (int i = 0; i < TAM_MAX; i++)
    {
        for (int j = 0; j < TAM_MAX; j++)
        {
            if (m[i][j] == n)
            {
                std::cout << "Linha:", std::cout << i;
                std::cout << ' ';
                std::cout << "Coluna:", std::cout << j;
                std::cout << "\n";
            }
        }
    }
}