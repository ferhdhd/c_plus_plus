#ifndef TELA_DESENHO_HPP
#define TELA_DESENHO_HPP

#include "Forma.hpp"
#include <list>

class TelaDesenho {
    public:
        void adicionarForma(Forma* forma);
        unsigned long calcularAreaTotal();
    private:
        std::list<Forma*> listaFormas;
};

#endif