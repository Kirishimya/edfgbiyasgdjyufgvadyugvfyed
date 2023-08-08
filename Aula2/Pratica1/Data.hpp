#ifndef DATA_HPP
#define DATA_HPP
#include <iostream>

class Data
{
    private:
        long dia,
               mes,
               ano;
        long meses[12];
    public:
        Data () : meses ({31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31}) {}
        Data (long d, long m, long a);
        void set_dia (long num);
        void set_mes (long num);
        void set_ano (long num);
        long get_dia ();
        long get_mes ();
        long get_ano ();
        bool is_bisexto ();
        void imprimir ();
        long operator - (Data d);
        bool operator == (Data d);
        bool operator != (Data d);
        bool operator > (Data d);
        bool operator < (Data d);
};

#endif