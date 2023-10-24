#ifndef CIRCULO_HPP
#define CIRCULO_HPP

#include <cstdint>
#include "Forma.hpp"

class Circulo : public Forma {
    public:
       virtual unsigned int calculaArea() const override;

        unsigned int getRaio() const;
        void setRaio(const unsigned int raio);

        virtual ~Circulo() = default;

    private:
       uint32_t raio;
};

#endif