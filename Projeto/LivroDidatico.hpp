#ifndef LIVRODIDATICO_HPP
#define LIVRODIDATICO_HPP
#include "Livro.hpp"

class LivroDidatico : public Livro
{
    private:
        std::string disciplina;
        size_t nivelDeEnsino;
    public:
        void setDisciplina (std::string str);
        void setNivelDeEnsino (size_t num);
        std::string getDisciplina ();
        size_t getNivelDeEnsino ();
};

#endif