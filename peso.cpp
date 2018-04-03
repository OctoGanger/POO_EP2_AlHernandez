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

bool operator>(const Peso &v1, const Peso &v2){

    Peso resultado;
