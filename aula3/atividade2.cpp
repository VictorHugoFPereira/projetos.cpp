#include <iostream>
#include <iomanip>
int main()
{
    int tam;
    std::cout << "Escreva o numero inicial de linhas:";
    std::cin >> tam;
    int m[tam][tam], limite = tam + 1;
    if (tam % 2 == 1)
    {
        for (int i = 0; i <= (tam + 2 - 1) / 2; i++)
        {
            for (int j = 0; j <= tam; j++)
            {
                if (i >= j || j >= limite)
                {
                    std::cout << ' ' << " ";
                }
                else
                {
                    std::cout << j << " ";
                }
            }
            std::cout << "\n";
            limite--;
        }
    }
    else
    {
        return 0;
    }
}