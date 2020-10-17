#ifndef ENGENHEIRO_H
#define ENGENHEIRO_H
#include <string>
#include "Empregado.hpp"


class Engenheiro : public Empregado {

  public:
    void setNome(std::string n);
    void setProjetos(int p);
    std::string getNome();
    int getProjetos();
  private:
    std::string nome;  
	  int projetos;
	
};

#endif

