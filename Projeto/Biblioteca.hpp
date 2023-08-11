#ifndef BIBLIOTECA_HPP
#define BIBLIOTECA_HPP
#include <iostream>
#include <list>
#include <string>
#include "ItemAcervo.hpp"
#include "FuncUteis.hpp"

template <typename T>
class Biblioteca 
{
    private:
        std::list<T> acervo;
    public:
        void addItem(T item)
        {
            try
            {
                int ok = 1;
                for (typename std::list<T>::iterator item_possuido{acervo.begin()}; item_possuido != acervo.end(); ++item_possuido)
                {
                    if (*item_possuido == item)
                    {
                        throw std::invalid_argument("O item já está na biblioteca");
                        ok = 0;
                    }
                }
                if (ok)
                {
                    acervo.push_back(item);
                }
            }catch (std::invalid_argument err)
            {
                std::cout << "O item já está na biblioteca" << std::endl;
            }
        }
        void searchItem (std::string busca)
        {
            //std::list<T> pesquisa;
            for (typename std::list<T>::iterator item{acervo.begin()}; item != acervo.end(); ++item)
            {
                if ((*item.getTitulo().find(busca)!=std::string::npos) || 
                    (*item.getAutor().getNome().find(busca)!=std::string::npos))
                    {
                        *item.imprimirInformacoes();
                        std::cout << std::endl;
                    }
            }
        }
        void listItem ()
        {
            std::cout << "Lista do que há na Biblioteca..." << std::endl;
            for (typename std::list<T>::iterator item{acervo.begin()}; item != acervo.end(); ++item)
            {
                *item.imprimirInformacoes();
            }
        }
};

#endif