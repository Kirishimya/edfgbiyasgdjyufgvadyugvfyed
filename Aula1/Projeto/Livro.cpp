#include "Livro.hpp"

void Livro::Livro::setTitulo (std::string titulo)
{
    this->titulo = titulo;
}
void Livro::setAutor (Autor autor)
{
    this->autor = autor;
}
void Livro::setAnoDePublicacao (size_t ano)
{
    this->anoDePublicacao = ano;
}
void Livro::setNumeroDeEdicao (size_t num)
{
    this->numeroDeEdicao = num;
}
void Livro::setNumeroDePaginas (size_t num)
{
    this->numeroDePaginas = num;
}

std::string Livro::getTitulo ()
{
    return this->titulo;
}
Autor Livro::getAutor ()
{
    return this->autor;
}
size_t Livro::getAnoDePublicacao ()
{
    return this->anoDePublicacao;
}
size_t Livro::getNumeroDeEdicao ()
{
    return this->numeroDeEdicao;
}
size_t Livro::getNumeroDePaginas ()
{
    return this->numeroDePaginas;
}
void Livro::imprimirInformacoes ()
{
    std::cout <<"*Informações do livro\n";
    std::cout << "Titulo: " << this->getTitulo ()<<std::endl;
    std::cout << "Informações do autor:" << std::endl;
    this->getAutor ().imprimirInformacoes ();
    std::cout << "Ano de publicação:" << this->getAnoDePublicacao ()<<std::endl;
    std::cout << "Numero de edição: " << this->getNumeroDeEdicao ()<<std::endl;
    std::cout << "Numero de páginas: " << this->getNumeroDePaginas ()<<std::endl;
}