#ifndef PESSOA_H
#define PESSOA_H
#include <iostream>

class Pessoa {
    private:
        std::string nome;
        int idade;
    public:
        void setNome (std::string novonome);
        void setIdade (int novaidade);
        void imprimirDados ();
};

#endif