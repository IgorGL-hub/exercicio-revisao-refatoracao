
#include "Empregado.hpp"
#include "Vendedor.hpp"
#include "Engenheiro.hpp"
#include "string.h"
#include <vector>
int main() {
  
  Engenheiro eng1;
  eng1.setNome("Joao Snow");
  eng1.setSalarioHora(35);
  eng1.setProjetos(3); 
  std::cout << "Nome: " << eng1.getNome() << std::endl;
  std::cout << "Salario Mes: " << eng1.pagamentoMes(9.5) << std::endl;
  std::cout << "Projetos: " << eng1.getProjetos() << std::endl;
  std::cout << std::endl;
  
  Engenheiro eng2;
  eng2.setNome("Daniela Targaryen");
  eng2.setSalarioHora(30);
  eng2.setProjetos(1); 
  std::cout << "Nome: " << eng2.getNome() << std::endl;
  std::cout << "Salario Mes: " << eng2.pagamentoMes(8) << std::endl;
  std::cout << "Projetos: " << eng2.getProjetos() << std::endl;  
  std::cout << std::endl;
  
  Engenheiro eng3;
  eng3.setNome("Bruno Stark");
  eng3.setSalarioHora(30);
  eng3.setProjetos(2); 
  std::cout << "Nome: " << eng3.getNome() << std::endl;
  std::cout << "Salario Mes: " << eng3.pagamentoMes(8) << std::endl;
  std::cout << "Projetos: " << eng3.getProjetos() << std::endl;  
  std::cout << std::endl;
  
  
  Vendedor vend1;
  vend1.setNome ("Tonho Lannister");
  vend1.setSalarioHora(20);
  vend1.setQuotaMensalVendas(500);
  
  std::cout << "Nome: " << vend1.getNome() << std::endl;
  std::cout << "Salario Mes: " << vend1.pagamentoMes(6) << std::endl;  
  std::cout << "Quota vendas: " << vend1.quotaTotalAnual() << std::endl;
  std::cout << std::endl;
  
  Vendedor vend2;
  vend2.setNome("Jose Mormont");
  vend2.setSalarioHora(25);
  vend2.setQuotaMensalVendas(3000);
  
  std::cout << "Nome: " << vend2.getNome() << std::endl;
  std::cout << "Salario Mes: " << vend2.pagamentoMes(8) << std::endl;  
  std::cout << "Quota vendas: " << vend2.quotaTotalAnual() << std::endl; 
  std::cout << std::endl;  
	
  Vendedor vend3;
  vend3.setNome("Sonia Stark");
  vend3.setSalarioHora(30);
  vend3.setQuotaMensalVendas(4000);
  
  std::cout << "Nome: " << vend3.getNome() << std::endl;
  std::cout << "Salario Mes: " << vend3.pagamentoMes(8) << std::endl;  
  std::cout << "Quota vendas: " << vend3.quotaTotalAnual() << std::endl;  
  
  return 0;	
}

/* Removidos alguns numeros mágicos.
   Atributos movidos para private e adiconados setters e getters para garantir o encapsulamento.
   Criados os arquivos: Empregado.cpp, Vendedor.hpp, Engenheiro.hpp para mover a implementação de metodos para os arquivos cpp.
   Corrigido as impressões e atribuições de valores no main para que funcionem com os atributos privados.  