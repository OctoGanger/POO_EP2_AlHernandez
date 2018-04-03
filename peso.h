#ifndef POO_EXAMENPARCIAL1_ALHERNANDEZ_PESO_H
#define POO_EXAMENPARCIAL1_ALHERNANDEZ_PESO_H
#include<iostream>
#include"dolar.h"
class Peso {
public:
    float valor1;

public:
    Peso();
    Peso(float valor1);

    friend Peso operator+(const Peso &v1, const Peso &v2);
   friend Peso operator-(const Peso &v1, const Peso &v2);

    friend bool operator >(const Peso &v1,const Peso &v2);
    friend bool operator <(const Peso &v1,const Peso &v2);

    friend Peso operator++(const Peso &v1,const Peso &v2);
    friend Peso operator--(const Peso &v1, const Peso &v2);

std::string to_String();


};
