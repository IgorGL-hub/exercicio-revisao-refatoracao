#include "Engenheiro.hpp"

void Engenheiro::setNome(std::string n) {
    nome = n;
}

void Engenheiro::setProjetos(int p) {
    projetos = p;
}

std::string Engenheiro::getNome() {
    return nome;
}
int Engenheiro::getProjetos() {
    return projetos;    
}