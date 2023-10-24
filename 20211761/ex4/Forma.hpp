#ifndef FORMA_HPP
#define FORMA_HPP

class Forma {
    public:
        virtual unsigned int calculaArea() const = 0;
        virtual ~Forma() = default;
};

#endif