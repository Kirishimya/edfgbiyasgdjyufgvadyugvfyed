#ifndef BIBLIOTECA_HPP
#define BIBLIOTECA_HPP
#include <iostream>
#include <list>
#include <string>
#include "FuncUteis.hpp"

template <typename T>
class Biblioteca 
{
    private:
        std::list<T> acervo;
    public:
        void addItem(T item)
        {
            acervo.push_back (item);
        }
        void searchItem (std::string busca)
        {
            std::list<T> pesquisa;
            for (typename std::list<T>::iterator item{acervo.begin()}; item != acervo.end(); ++item)
            {
                
            }
        }
};

#endif