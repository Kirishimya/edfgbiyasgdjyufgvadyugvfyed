#include <iostream>
#include <fstream>


int main()
{
    std::ifstream arquivo("text.txt");


    if (!arquivo.is_open())
    {
        std::cerr << "Erro ao abrir o arquivo" << std::endl;
        return 1;
    }

    std::string linha;

    while (std::getline(arquivo, linha))
    {
        std::cout << linha << std::endl;
    }

    arquivo.close();

    return 0;
}