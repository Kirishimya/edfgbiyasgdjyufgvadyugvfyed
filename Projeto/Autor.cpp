#include "Autor.hpp"

Autor::Autor ()
{

}
Autor::Autor (std::string nome, int dia, int mes, int ano, std::string genero, std::string nacionalidade)
{
    this->nome = nome;
    this->dataNascimento.dia = dia;
    this->dataNascimento.mes = mes;
    this->dataNascimento.ano = ano;
    this->genero = genero;
    this->nacionalidade = nacionalidade;
}
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

void Autor::imprimirInformacoes ()
{
    std::cout << "*Informações do autor"<<std::endl;
    std::cout << "Autor: " << this->getNome () <<std::endl;
    std::cout << "Data de nascimento: " << this->getDataNascimento().dia << "/" << this->getDataNascimento().mes << "/"<< this->getDataNascimento().ano <<std::endl;
    std::cout << "Genero: " << this->getGenero ()<<std::endl;
    std::cout << "Nacionalidade: " << this->getNacionalidade ()<<std::endl<<std::endl;
}