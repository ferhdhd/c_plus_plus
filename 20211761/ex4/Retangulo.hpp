#ifndef RETANGULO_HPP
#define RETANGULO_HPP

#include <cstdint>
#include "Forma.hpp"

class Retangulo : public Forma {
    public:
       virtual unsigned int calculaArea() const override;
    
        unsigned int getLargura() const;
        void setLargura(const unsigned int largura);

        unsigned int getAltura() const;
        void setAltura(const unsigned int altura);

        virtual ~Retangulo() = default;


    private:
       uint32_t largura;
       uint32_t altura;
};

#endif