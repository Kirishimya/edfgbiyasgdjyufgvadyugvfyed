#include "Revista.hpp"

Revista::Revista ()
{
    this->ultimoCliente = NULL;
    this->ultimoCliente = new Cliente;
}
Revista::Revista (std::string titulo, std::string ed, size_t ano, size_t pag, size_t numed, Cliente cli)
{
    this->titulo = titulo;
    this->editora = ed;
    this->anoDePublicacao = ano;
    this->numeroDePaginas = pag;
    this->numeroDeEdicao = numed;
    this->ultimoCliente = NULL;
    this->ultimoCliente = new Cliente;
    *this->ultimoCliente = cli;
}
void Revista::setTitulo (std::string str)
{
    this->titulo = str;
}
void Revista::setEditora (std::string str)
{
    this->editora = str;
}
void Revista::setAnoDePublicacao (size_t num)
{
    this->anoDePublicacao = num;
}
void Revista::setNumeroDePaginas (size_t num)
{
    this->numeroDePaginas = num;
}
void Revista::setNumeroDeEdicao (size_t num)
{
    this->numeroDeEdicao = num;
}
void Revista::setUltimoCliente (Cliente cli)
{
    *this->ultimoCliente = cli;
}
std::string Revista::getTitulo ()
{
    return this->titulo;
}
std::string Revista::getEditora ()
{
    return this->editora;
}
size_t Revista::getAnoDePublicacao ()
{
    return this->anoDePublicacao;
}
size_t Revista::getNumeroDePaginas ()
{
    return this->numeroDePaginas;
}
size_t Revista::getNumeroDeEdicao ()
{
    return this->numeroDeEdicao;
}
void Revista::imprimirInformacoes ()
{
    std::cout<<"*Informações da revista\n";
    std::cout << "Titulo: " << this->getTitulo ()<<std::endl;
    std::cout << "Editora:" << this->getEditora ()<<std::endl;
    std::cout << "Ano de publicação:" << this->getAnoDePublicacao ()<<std::endl;
    std::cout << "Numero de páginas: " << this->getNumeroDePaginas ()<<std::endl;
    std::cout << "Numero de edição: " << this->getNumeroDeEdicao ()<<std::endl<<std::endl;
}
Cliente* Revista::getUltimoCliente ()
{
    return this->ultimoCliente;
}
Revista::~Revista ()
{
    //std::cout << "Chamei destrutor rwevista\n"; 
    delete this->ultimoCliente; 
}