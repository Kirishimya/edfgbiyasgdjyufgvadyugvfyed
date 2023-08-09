#ifndef ITEMACERVO_H
#define ITEMACERVO_H
#include <iostream>

class ItemAcervo
{
    protected:
        std::string titulo;

        size_t anoDePublicacao,
               numeroDeEdicao,
               numeroDePaginas;
    public:
        virtual void imprimirInformacoes() = 0;
};

#endif