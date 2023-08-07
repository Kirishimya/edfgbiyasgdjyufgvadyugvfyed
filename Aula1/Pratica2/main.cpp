#include <iostream>
#include "Carro.hpp"

int main ()
{
    Carro car;

    car.setMarca ("Tesla");
    car.setModelo ("Model S");
    car.setAnoFabricacao (2012);
    car.imprimirDados ();

    return 0;
}
