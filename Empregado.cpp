#include "Empregado.hpp"
 
double Empregado::getSalarioHora(){
    return salarioHora;
}
double Empregado::getQuotaMensalVendas(){
    return quotaMensalVendas;

} 

void Empregado::setSalarioHora(double s){
    salarioHora = s;
}

void Empregado::setQuotaMensalVendas(double q){
    quotaMensalVendas = q;
}

double Empregado::pagamentoMes(double horasTrabalhadas) {
 
      double t = horasTrabalhadas;
	  int h_max = 8;
	  //Cálculo de hora extra (+50% se horasTrabalhadas > 8)
      if (horasTrabalhadas > h_max) {
        double x = horasTrabalhadas - h_max;
        t += x / 2;
      }
	  return t * salarioHora;
    }