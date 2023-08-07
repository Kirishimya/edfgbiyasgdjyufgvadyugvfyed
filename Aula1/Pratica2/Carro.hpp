#ifndef CARRO_H
#define CARRO_H
#include <iostream>

class Carro 
{
    private:
        std::string marca,
                    modelo;
        int anoFabricacao;
    public:
        void setMarca (std::string marca);
        void setModelo (std::string modelo);
        void setAnoFabricacao (int ano);
        void imprimirDados ();
};

#endif