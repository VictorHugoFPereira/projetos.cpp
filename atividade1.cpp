#include <iostream>

int main()
{
    int tam;
    std::cout << "Escreva o tamanho da matriz:" << std::endl;
    std::cin >> tam;
    int m[tam][tam], menor, linhaMenor = 0;
    for (int i = 0; i < tam; i++)
    {
        for (int j = 0; j < tam; j++)
        {
            std::cout << "Escreva os numeros da matriz:" << std::endl;
            std::cin >> m[i][j];
        }
    }
    menor = m[0][0];
    for (int i = 0; i < tam; i++)
    {
        for (int j = 0; j < tam; j++)
        {
            if(m[i][j] < menor)
            {
                menor = m[i][j];
            }
            linhaMenor = i;
        }
    }
    std::cout << "Linha menor:" << linhaMenor;
}