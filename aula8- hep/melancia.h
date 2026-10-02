#ifndef MELANCIA_H
#define MELANCIA_H
#include "fruta.h"

class Melancia: private Fruta{
private:
float preco_adicional;
bool epoca;
public:
Melancia(float preco_adicional, bool epoca, float preco);
float getpreco_adicional();
void setpreco_adicional(float preco_adicional);
bool getepoca();
void setepoca(bool epoca);
float calcula_preco_final();
};

#endif