#ifndef LIVRODIDATICO_HPP
#define LIVRODIDATICO_HPP
#include "Livro.hpp"

class LivroDidatico : public Livro
{
    private:
        std::string disciplina;
        size_t nivelDeEnsino;
    public:
        LivroDidatico();
        LivroDidatico (std::string titulo, Autor autor, size_t ano, size_t ed, size_t pag, Cliente cli, std::string disciplina,
        size_t nivelDeEnsino);
        void setDisciplina (std::string str);
        void setNivelDeEnsino (size_t num);
        std::string getDisciplina ();
        size_t getNivelDeEnsino ();
};

#endif