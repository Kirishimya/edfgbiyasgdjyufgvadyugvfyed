#ifndef CLIENTE_HPP
#define CLIENTE_HPP
#include <iostream>

class Cliente 
{
    private:
        std::string nome,
                    email,
                    telefone;
        size_t idade;
    public:
        void setNome (std::string str);
        void setEmail (std::string str);
        void setTelefone (std::string str);
        void setIdade (size_t num);

        std::string getNome ();
        std::string getEmail ();
        std::string getTelefone ();
        size_t getIdade ();
        void imprimirInformacoes ();
};

#endif