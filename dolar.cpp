//Ana Luz Hernández Castorena - POO
#include"dolar.h"
#include<iostream>

Dolar::Dolar(){
    this->valor2=0.0;

}

Dolar::Dolar(float valor2){
    this->valor2=valor2;
}

Dolar operator +(const Dolar &v1, const Dolar &v2){
    Dolar resultado;
    resultado.valor2=(v1.valor2)+(v2.valor2);

    return resultado;

}
Dolar operator -(const Dolar &v1, const Dolar &v2) {
    Dolar resultado;
    resultado.valor2= (v1.valor2) - (v2.valor2);

    return resultado;
}

bool operator>(const Dolar &v1, const Dolar &v2) {
    bool resultado;
    resultado = (v1.valor2) > (v2.valor2);
    return resultado;
}
bool operator<(const Dolar &v1, const Dolar &v2) {
    bool resultado;
    resultado = (v1.valor2) < (v2.valor2);
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

std::string Dolar::to_String() {
    std::string valor2;
    valor2= to_String((valor2);
    return valor2+"USD";

}
