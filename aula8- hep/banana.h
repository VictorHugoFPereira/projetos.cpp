#ifndef BANANA_H
#define BANANA_H
#include "fruta.h"

class Banana: public Fruta{
private:
    std:: string tipo;
public:
    Banana();
    Banana(std::string tipo, float preco);
    std::string gettipo();
    void settipo(std::string tipo);
};
#endif
