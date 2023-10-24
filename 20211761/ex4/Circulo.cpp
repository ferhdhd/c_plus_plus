#include "Circulo.hpp"

unsigned int Circulo::calculaArea() const {
    unsigned int raio_ui = this->getRaio();
    
    return (3.14 * (raio_ui * raio_ui));
}

unsigned int Circulo::getRaio() const {
    return (unsigned int) this->raio;
}

void Circulo::setRaio(const unsigned int raio) {
    this->raio = (uint32_t) raio;
}