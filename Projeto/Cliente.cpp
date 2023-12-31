#include "Cliente.hpp"

Cliente::Cliente ()
{

}
Cliente::Cliente (std::string nome, std::string email, std::string tel, size_t num)
{
    this->nome = nome;
    this->email = email;
    this->telefone = tel;
    this->idade = num;
}
void Cliente::setNome (std::string str)
{
    this->nome = str;
}
void Cliente::setEmail (std::string str)
{
    this->email = str;
}
void Cliente::setTelefone (std::string str)
{
    this->telefone = str;
}
void Cliente::setIdade (size_t num)
{
    this->idade = num;
}

std::string Cliente::getNome ()
{
    return this->nome;
}
std::string Cliente::getEmail ()
{
    return this->email;
}
std::string Cliente::getTelefone ()
{
    return this->telefone;
}
size_t Cliente::getIdade ()
{
    return this->idade;
}
void Cliente::imprimirInformacoes ()
{
    std::cout<<"*Informações do cliente\n";
    std::cout << "Cliente:" << this->getNome ()<<std::endl;
    std::cout << "E-mail:" << this->getEmail ()<<std::endl;
    std::cout << "Telefone:" << this->getTelefone ()<<std::endl;
    std::cout << "Idade:" << this->getIdade ()<<std::endl<<std::endl;
}

// Cliente::~Cliente ()
// {
//     std::cout << "delete cli\n";
// }