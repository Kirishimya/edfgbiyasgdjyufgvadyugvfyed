#include "Livro.hpp"

Livro::Livro ()
{
    this->ultimoCliente = NULL;
    this->ultimoCliente = new Cliente;
}
Livro::Livro (std::string titulo, Autor autor, size_t ano, size_t ed, size_t pag, Cliente cli)
{
    this->titulo = titulo;
    this->autor = autor;
    this->anoDePublicacao = ano;
    this->numeroDeEdicao = ed;
    this->numeroDePaginas = pag;
    this->ultimoCliente = NULL;
    this->ultimoCliente = new Cliente;
    *this->ultimoCliente = cli;
}

void Livro::setAutor (Autor autor)
{
    this->autor = autor;
}

void Livro::setUltimoCliente (Cliente cli)
{
    *this->ultimoCliente = cli;
}

Autor Livro::getAutor ()
{
    return this->autor;
}

void Livro::imprimirInformacoes ()
{
    std::cout <<"*Informações do livro\n";
    std::cout << "Titulo: " << this->getTitulo ()<<std::endl;
    std::cout << "Ano de publicação:" << this->getAnoDePublicacao ()<<std::endl;
    std::cout << "Numero de edição: " << this->getNumeroDeEdicao ()<<std::endl;
    std::cout << "Numero de páginas: " << this->getNumeroDePaginas ()<<std::endl;
    this->getAutor ().imprimirInformacoes ();

}
Cliente* Livro::getUltimoCliente ()
{
    return this->ultimoCliente;
}
Livro::~Livro ()
{
    //std::cout << "Chamei destrutor livro\n"; 
    delete this->ultimoCliente;
}