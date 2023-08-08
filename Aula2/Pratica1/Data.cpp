#include "Data.hpp"

Data::Data(long d, long m, long a)
{
    long meses[12] =  {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    for(int i = 0; i < 12; i++)
    {
        this->meses[i] = meses[i];
    }
    this->dia = d;
    this->mes = m;
    this->ano = a;
}
void Data::set_dia (long num)
{
    this->dia = num;
}
void Data::set_mes (long num)
{
    this->mes = num;
}
void Data::set_ano (long num)
{
    this->ano = num;
}
long Data::get_dia ()
{
    return this->dia;
}
long Data::get_mes ()
{
    return this->mes;
}
long Data::get_ano ()
{
    return this->ano;
}
bool Data::is_bisexto ()
{
    return ((this->ano % 400) == 0) || ((this->ano % 4) == 0 && (this->ano % 100) != 0);
}
void Data::imprimir ()
{
    std::cout << this->dia << "/" << this->mes << "/" << this->ano << std::endl;
}
long Data::operator - (Data d)
{
    long dif_dias = this->dia - d.dia;
    //std::cout << dif_dias << "\n";
    long dif_meses_p_dias = 0;
    {
        long n_meses[2] = {this->mes, d.mes};
        long total_de_dias[2] = {0, 0};
        for (int h = 0; h < 2; h++)
        {
            for (int i = 0; i < (n_meses[h] - 1); i++)
            {
                //std::cout << ((((this->is_bisexto() && h == 0) || (d.is_bisexto() && h == 1)) && i == 1) ? 29 : this->meses[i]) << "\n";
                total_de_dias[h] += (((this->is_bisexto() && h == 0) || (d.is_bisexto() && h == 1)) && i == 1) ? 29 : this->meses[i];
                std::cout<< total_de_dias[h] << std::endl;
            }
        }
        dif_meses_p_dias = total_de_dias[0] - total_de_dias[1];
                        std::cout<< dif_meses_p_dias << std::endl;

    }
    //std::cout << dif_meses_p_dias << "\n";
    dif_dias += dif_meses_p_dias;
    std::cout << (this->ano - 1 - d.ano - 1) << std::endl;
    long dif_anos_p_dias = ((this->ano - 1 - d.ano - 1)*(365 + (int)(this->is_bisexto())  + (int)(d.is_bisexto())));
    dif_dias += dif_anos_p_dias;

    return dif_dias;
}
bool Data::operator == (Data d)
{
    return (this->dia == d.dia) && (this->mes == d.mes) && (this->ano == d.ano);
}
bool Data::operator != (Data d)
{
    return (this->dia != d.dia) || (this->mes != d.mes) || (this->ano != d.ano);
}
bool Data::operator > (Data d)
{
    return (this->ano > d.ano) || ((this->ano == d.ano) && (this->mes > d.mes)) || ((this->ano == d.ano) && (this->mes == d.mes) && (this->dia > d.dia));
}
bool Data::operator < (Data d)
{
    return (this->ano < d.ano) || ((this->ano == d.ano) && (this->mes < d.mes)) || ((this->ano == d.ano) && (this->mes == d.mes) && (this->dia < d.dia));
}