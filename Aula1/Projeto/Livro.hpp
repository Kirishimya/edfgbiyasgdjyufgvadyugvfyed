#ifndef LIVRO_HPP
#define LIVRO_HPP
#include "Autor.hpp"

class Livro 
{
    private:
        std::string titulo;
        Autor autor;
        size_t anoDePublicacao,
               numeroDeEdicao,
               numeroDePaginas;
    public:
        void setTitulo (std::string titulo);
        void setAutor (Autor autor);
        void setAnoDePublicacao (size_t ano);
        void setNumeroDeEdicao (size_t num);
        void setNumeroDePaginas (size_t num);

        std::string getTitulo ();
        Autor getAutor ();
        size_t getAnoDePublicacao ();
        size_t getNumeroDeEdicao ();
        size_t getNumeroDePaginas ();
        void imprimirInformacoes ();
};

#endif