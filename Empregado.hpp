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

    double pagamentoMes(double horasTrabalhadas) {
 
      double t = horasTrabalhadas;
	  
	  //Cálculo de hora extra (+50% se horasTrabalhadas > 8)
      if (horasTrabalhadas > 8) {
        double x = horasTrabalhadas - 8;
        t += x / 2;
      }
	  return t * salarioHora;
    }
	
};

#endif