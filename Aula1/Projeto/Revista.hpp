#ifndef REVISTA_HPP
#define REVISTA_HPP
#include <iostream>

class Revista 
{
    private:
        std::string titulo,
                    editora;
        size_t anoDePublicacao,
               numeroDePaginas,
               numeroDeEdicao;

    public:
        void setTitulo (std::string str);
        void setEditora (std::string str);
        void setAnoDePublicacao (size_t num);
        void setNumeroDePaginas (size_t num);
        void setNumeroDeEdicao (size_t num);

        std::string getTitulo ();
        std::string getEditora ();
        size_t getAnoDePublicacao ();
        size_t getNumeroDePaginas ();
        size_t getNumeroDeEdicao ();
        void imprimirInformacoes ();
};

#endif