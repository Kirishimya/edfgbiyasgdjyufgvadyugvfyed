#ifndef FUNCUTEIS_HPP
#define FUNCUTEIS_HPP
#include "Autor.hpp"
#include "Cliente.hpp"
#include "Livro.hpp"
#include "Revista.hpp"

void imprimirInformacoes (Autor a);
void imprimirInformacoes (Cliente a);
void imprimirInformacoes (Livro a);
void imprimirInformacoes (Revista a);

void imprimirInformacoes (Autor *a)
{
    a->imprimirInformacoes();
}
void imprimirInformacoes (Cliente *a)
{
    a->imprimirInformacoes();
}
void imprimirInformacoes (Livro *a)
{
    a->imprimirInformacoes();
}
void imprimirInformacoes (Revista *a)
{
    a->imprimirInformacoes();
}

#endif