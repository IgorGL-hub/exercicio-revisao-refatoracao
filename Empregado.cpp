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