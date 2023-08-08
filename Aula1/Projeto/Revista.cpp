#include "Revista.hpp"

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
    std::cout << "Numero de edição: " << this->getNumeroDeEdicao ()<<std::endl;
}