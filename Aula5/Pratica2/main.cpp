#include <iostream>
#include <fstream>
#include <string>
int main ()
{
    std::ofstream arquivo("text.txt", std::fstream::app);

    if (!arquivo.is_open())
    {
        std::cerr << "Erro ao abrir arquivo" << std::endl;
        return 1;
    }

    std::cout << "Digite uma frase." << std::endl;

    std::string frase;

    std::getline(std::cin, frase);

    arquivo << frase << std::endl;

    arquivo.close ();
    return 0;
}