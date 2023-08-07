#include "Carro.hpp"

void Carro::setMarca (std::string marca)
{
    this->marca = marca;
}
void Carro::setModelo (std::string modelo)
{
    this->modelo = modelo;
}
void Carro::setAnoFabricacao (int ano)
{
    this->anoFabricacao = ano;
}
void Carro::imprimirDados ()
{
    std::cout << "Marca: " << this->marca <<"\n";
    std::cout << "Modelo: " << this->modelo <<"\n";
    std::cout << "Ano de Fabricação: " << this->anoFabricacao <<"\n";

}