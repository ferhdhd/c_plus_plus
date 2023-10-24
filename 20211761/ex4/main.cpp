#include "Circulo.hpp"
#include "Retangulo.hpp"
#include "TelaDesenho.hpp"
#include <iostream>

int main () {
    TelaDesenho novaTela;

    Retangulo* ret1{new Retangulo};
    Retangulo* ret2{new Retangulo};
    Circulo* circ1{new Circulo};

    ret1->setAltura(5);
    ret1->setLargura(5);

    ret2->setAltura(10);
    ret2->setLargura(10);

    circ1->setRaio(5);

    novaTela.adicionarForma(ret1);
    novaTela.adicionarForma(ret2);
    novaTela.adicionarForma(circ1);

    std::cout << novaTela.calcularAreaTotal() << std::endl;

    delete circ1;
    delete ret1;
    delete ret2;

    return 0;
}
