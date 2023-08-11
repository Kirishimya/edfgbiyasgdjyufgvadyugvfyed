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
        
        void setAutor (Autor autor);  
        void setUltimoCliente (Cliente cli);
        Autor getAutor ();
        void imprimirInformacoes ();
        Cliente* getUltimoCliente ();

        ~Livro ();
};

#endif