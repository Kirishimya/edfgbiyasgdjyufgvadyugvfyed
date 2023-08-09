#ifndef LIVRO_HPP
#define LIVRO_HPP
#include "Autor.hpp"
#include "Cliente.hpp"
#include "ItemAcervo.hpp"

class Livro : public ItemAcervo
{
    protected:
        Autor autor;
        Cliente* ultimoCliente;
    public:
        Livro ();
        Livro (std::string titulo, Autor autor, size_t ano, size_t ed, size_t pag, Cliente cli);
        void setTitulo (std::string titulo);
        void setAutor (Autor autor);
        void setAnoDePublicacao (size_t ano);
        void setNumeroDeEdicao (size_t num);
        void setNumeroDePaginas (size_t num);
        void setUltimoCliente (Cliente cli);

        std::string getTitulo ();
        Autor getAutor ();
        size_t getAnoDePublicacao ();
        size_t getNumeroDeEdicao ();
        size_t getNumeroDePaginas ();
        void imprimirInformacoes ();
        Cliente* getUltimoCliente ();

        ~Livro ();
};

#endif