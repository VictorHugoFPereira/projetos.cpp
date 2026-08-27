#include <iostream>
#define TAM_M 6
#define TAM_A 36
int main()
{
    int m[TAM_M][TAM_M], a[TAM_A], A;
    std::cout << "Escreva um valor para multiplicar pelos numeros da matriz:";
    std::cin >> A;
    std::cout << "Escreva os numeros da matriz:";

    for (int i = 0; i < TAM_M; i++)
    {
        for (int j = 0; j < TAM_M; j++)
        {
            std::cin >> m[i][j];
            a[TAM_A] = m[i][j] * A;
        }
    }
    std::cout << "Os valores do vetor sao:" << std::endl;
    for (int i = 0; i < TAM_A; i++)
    {
        std::cout << a[TAM_A];
        std::cout << ' ';
    }
}