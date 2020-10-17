#include <string>
#include "Empregado.hpp"
#include "Vendedor.hpp"

// class Vendedor : public Empregado {

//   public:
//     std::string nome;  	  
	
double Vendedor::quotaTotalAnual() {
	return getQuotaMensalVendas() * 12;
}

void Vendedor::setNome(std::string n) {
	nome = n;
}

std::string Vendedor::getNome(){
	return nome;
}


