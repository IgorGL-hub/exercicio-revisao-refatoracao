#ifndef VENDEDOR_H
#define VENDEDOR_H
#include "Empregado.hpp"
#include <string>

class Vendedor : public Empregado {
    private:
        std::string nome;    
    public:
        void setNome(std::string s);
        std::string getNome();
        double quotaTotalAnual();
};



#endif