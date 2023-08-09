#ifndef REVISTA_HPP
#define REVISTA_HPP
#include <iostream>
#include "Cliente.hpp"
#include "ItemAcervo.hpp"

class Revista : public ItemAcervo
{
    protected:
        std::string editora;
        Cliente* ultimoCliente;
    public:
        Revista ();
        Revista (std::string titulo, std::string ed, size_t ano, size_t pag, size_t numed, Cliente cli);
        void setTitulo (std::string str);
        void setEditora (std::string str);
        void setAnoDePublicacao (size_t num);
        void setNumeroDePaginas (size_t num);
        void setNumeroDeEdicao (size_t num);
        void setUltimoCliente (Cliente cli);

        std::string getTitulo ();
        std::string getEditora ();
        size_t getAnoDePublicacao ();
        size_t getNumeroDePaginas ();
        size_t getNumeroDeEdicao ();
        void imprimirInformacoes ();
        Cliente* getUltimoCliente ();
        ~Revista ();
};

#endif