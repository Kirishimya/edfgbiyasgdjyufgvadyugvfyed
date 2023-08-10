#ifndef FUNCUTEIS_HPP
#define FUNCUTEIS_HPP
#include "Autor.hpp"
#include "Cliente.hpp"
#include "Livro.hpp"
#include "Revista.hpp"

template <typename T>
void imprimirInformacoes (T *a)
{
    a->imprimirInformacoes();
}
template <typename T>
void imprimirInformacoes (T a)
{
    a.imprimirInformacoes();
}
template <typename T>
void getTitulo (T *a)
{
    a->imprimirInformacoes();
}
template <typename T>
void getTitulo (T a)
{
    a.getTitulo();
}

#endif