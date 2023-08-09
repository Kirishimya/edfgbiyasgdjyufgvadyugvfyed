#ifndef AUTOR_HPP
#define AUTOR_HPP
#include <iostream>
#include "Util.hpp"

class Autor 
{
    private:
        std::string nome;
        Data dataNascimento;
        std::string genero;
        std::string nacionalidade;
    public:
        Autor ();
        Autor (std::string nome, int dia, int mes, int ano, std::string genero, std::string nacionalidade);
        void setNome (std::string nome);
        void setDataNascimento (int dia, int mes, int ano);
        void setGenero (std::string genero);
        void setNacionalidade (std::string nacionalidade);

        std::string getNome ();
        Data getDataNascimento ();
        std::string getGenero ();
        std::string getNacionalidade ();
        void imprimirInformacoes ();
};

#endif