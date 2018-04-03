//
// Created by AnaLuz on 02/04/2018.
//
#include"peso.h"
#include<iostream>

Peso::Peso(){
    this->valor1=0.0;

}
Peso::Peso(float valor1) {
    this->valor1=valor1;
}

Peso operator +(const Peso &v1, const Peso &v2){
   Peso resultado;
   resultado.valor1=(v1.valor1)+(v2.valor1);

   return resultado;

}
Peso operator -(const Peso &v1, const Peso &v2) {
    Peso resultado;
    resultado.valor1 = (v1.valor1) - (v2.valor1);

    return resultado;
}

bool operator>(const Peso &v1, const Peso &v2) {
    bool resultado;
    resultado = (v1.valor1) > (v2.valor1);
    return resultado;
}
bool operator<(const Peso &v1, const Peso &v2) {
    bool resultado;
    resultado = (v1.valor1) < (v2.valor1);
    return resultado;
}

Peso operator++(Peso &v1, Peso &v2) {
    Peso resultado;
    Peso resultado2;
    resultado.valor1 = ++(v1.valor1);
    resultado2.valor1 = ++(v2.valor1);

    return resultado;

}

Peso operator--(Peso &v1, Peso &v2) {
    Peso resultado;
    Peso resultado2;
    resultado.valor1 = --(v1.valor1);
    resultado2.valor1 = --(v2.valor1);

    return resultado;

}
std::string Peso::to_String() {
    std::string valor1;
    valor1 = to_String((valor1);
    return valor1 + "MXN";
};
