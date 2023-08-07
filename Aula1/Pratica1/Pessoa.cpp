#include "Pessoa.hpp"

void Pessoa::setNome (std::string novonome)
{
    this->nome = novonome;
}

void Pessoa::setIdade (int novaidade)
{
    this->idade = novaidade;
}

void Pessoa::imprimirDados ()
{
    std::cout << "Nome: " << nome << std::endl;
    std::cout << "Idade: " << idade << std::endl;
}