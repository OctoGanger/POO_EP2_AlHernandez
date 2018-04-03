//
// Created by AnaLuz on 02/04/2018.
//

#include"peso.h"
#include<iostream>

class Dolar{
protected:
    float valor2;

public:
    Dolar();
    Dolar(float valor2);

    friend Dolar operator+(const Dolar &v1,const Dolar &v2);
    friend Dolar operator-(const Dolar &v1,const Dolar &v2);

    friend bool  operator>(const Dolar &v1, const Dolar &v2);
    friend bool operator <(const Dolar &v1, const Dolar &v2);

    friend Dolar operator++(const Dolar &v1, const Dolar &v2);
    friend Dolar operator--(const Dolar &v1, const Dolar &v2);
    std::string toString();




    std:: string to_String();
};