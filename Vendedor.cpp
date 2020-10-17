#include <string>
#include "Empregado.hpp"
#include "Vendedor.hpp"

 	  
	
double Vendedor::quotaTotalAnual() {
	int meses = 12;
	return getQuotaMensalVendas() * meses;
}

void Vendedor::setNome(std::string n) {
	nome = n;
}

std::string Vendedor::getNome(){
	return nome;
}


