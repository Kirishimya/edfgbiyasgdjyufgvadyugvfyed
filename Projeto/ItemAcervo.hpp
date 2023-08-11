#ifndef ITEMACERVO_H
#define ITEMACERVO_H
#include <iostream>

class ItemAcervo
{
    protected:
        std::string titulo;

        size_t anoDePublicacao,
               numeroDeEdicao,
               numeroDePaginas;
    public:
        virtual void imprimirInformacoes() = 0;
        void setTitulo (std::string titulo)
        {
            this->titulo = titulo;
        }
        void setAnoDePublicacao (size_t ano)
        {
            this->anoDePublicacao = ano;
        }
        void setNumeroDeEdicao (size_t num)
        {
            this->numeroDeEdicao = num;
        }
        void setNumeroDePaginas (size_t num)
        {
            this->numeroDePaginas = num;
        }

        std::string getTitulo ()
        {
            return this->titulo;
        }
        size_t getAnoDePublicacao ()
        {
            return this->anoDePublicacao;
        }
        size_t getNumeroDeEdicao ()
        {
            return this->numeroDeEdicao;
        }
        size_t getNumeroDePaginas ()
        {
            return this->numeroDePaginas;
        }

        bool operator == (ItemAcervo* item)
        {
            return this->titulo == item->getTitulo() && this->anoDePublicacao == item->getAnoDePublicacao() && this->numeroDeEdicao == item->getNumeroDeEdicao() && this->numeroDePaginas == item->getNumeroDePaginas();
        }
};

#endif