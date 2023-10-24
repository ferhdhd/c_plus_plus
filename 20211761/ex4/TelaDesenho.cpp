#include "TelaDesenho.hpp"

void TelaDesenho::adicionarForma(Forma* forma) {
    if (forma != nullptr)
        this->listaFormas.push_back(forma);
}

unsigned long TelaDesenho::calcularAreaTotal() {
    unsigned long soma{0};
    std::list<Forma*>::iterator it{this->listaFormas.begin()};

    for (; it != listaFormas.end(); ++it) {
        soma += (*it)->calculaArea();
    }

    return soma;
}