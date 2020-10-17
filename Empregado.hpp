#ifndef EMPREGADO_H
#define EMPREGADO_H

#include <iostream>
#include <string>

class Empregado {
	
  private:
    double salarioHora;  
    double quotaMensalVendas;

  public:
    double getSalarioHora();
    double getQuotaMensalVendas(); 
    void setSalarioHora(double s);
    void setQuotaMensalVendas(double q);

    double pagamentoMes(double horasTrabalhadas);
	
};

#endif