#ifndef FRUTA_H
#define FRUTA_H
#include <iostream>

class Fruta {
private: 
float preco;
public:
Fruta();
Fruta(float preco);
float getpreco();
void setpreco(float preco);
double calcula_preco(double taxa);
};


#endif