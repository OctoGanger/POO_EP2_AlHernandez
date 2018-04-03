#include <iostream>
#include"peso.h"
#include"dolar.h"
int main() {
    Peso monto1 = (1);
    Dolar dmonto1 = (18.5);
    Peso monto2 = (2);
    Dolar dmonto2 = (19.5);
    Dolar suma1 = dmonto1 + dmonto2;
    Peso suma2 = monto1 + monto2;


    std::cout << "DOLAR+DOLAR\n";
    std::cout << suma1.to_String();
    std::cout << "\n";

    std::cout << "PESO+PESO\n";
    std::cout << suma2.to_String();
    std::cout << "\n";

    bool mayor;
    bool menor;

    dmonto1 > monto1 ? mayor = true : mayor = false;
    if (dmonto1 > monto1) {
        std::cout << "si\n";
    } else {

        std::cout << "no\n";
    }


    dmonto2 < monto2 ? menor = true : menor = false;
    if (dmonto2 < monto2) {
        std::cout << "si\n";
    } else {

        std::cout << "no\n";
    }
