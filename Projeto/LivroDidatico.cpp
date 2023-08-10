#include "LivroDidatico.hpp"

LivroDidatico::LivroDidatico (std::string titulo, Autor autor, size_t ano, size_t ed, size_t pag, Cliente cli, std::string disciplina,
        size_t nivelDeEnsino)
{
    this->titulo = titulo;
    this->autor = autor;
    this->anoDePublicacao = ano;
    this->numeroDeEdicao = ed;
    this->numeroDePaginas = pag;
    this->ultimoCliente = NULL;
    this->ultimoCliente = new Cliente;
    *this->ultimoCliente = cli;
    this->disciplina = disciplina;
    this->nivelDeEnsino = nivelDeEnsino;
}

void LivroDidatico::setDisciplina (std::string str)
{
    this->disciplina = str;   
}

void LivroDidatico::setNivelDeEnsino (size_t num)
{
    this->nivelDeEnsino = num;   
}

std::string LivroDidatico::getDisciplina ()
{
    return this->disciplina; 
}

size_t LivroDidatico::getNivelDeEnsino ()
{
    return this->nivelDeEnsino;
}
