#include "Autor.hpp"

void Autor::setNome (std::string nome){
    this->nome = nome;
}
void Autor::setDataNascimento (int dia, int mes, int ano){
    this->dataNascimento.dia = dia;
    this->dataNascimento.mes = mes;
    this->dataNascimento.ano = ano;
}
void Autor::setGenero (std::string genero){
    this->genero = genero;
}
void Autor::setNacionalidade (std::string nacionalidade){
    this->nacionalidade = nacionalidade;
}

std::string Autor::getNome (){
    return this->nome;
}
Data Autor::getDataNascimento (){
    return this->dataNascimento;
}
std::string Autor::getGenero (){
    return this->genero;
}
std::string Autor::getNacionalidade (){
    return this->nacionalidade;
}