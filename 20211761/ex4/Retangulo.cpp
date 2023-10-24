#include "Retangulo.hpp"

unsigned int Retangulo::calculaArea() const {
    return (this->getLargura() * this->getAltura());
}

unsigned int Retangulo::getLargura() const {
    return (unsigned int) this->largura;
}

void Retangulo::setLargura(const unsigned int largura) {
    this->largura = (uint32_t) largura;
}

unsigned int Retangulo::getAltura() const {
    return (unsigned int) this->altura;
}

void Retangulo::setAltura(const unsigned int altura) {
    this->altura = (uint32_t) altura;
}