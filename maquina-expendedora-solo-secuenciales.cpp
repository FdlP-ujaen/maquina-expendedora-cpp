/**
@file maquina-expendedora-solo-secuenciales.cpp
@author Víctor Rivas <vrivas@ujaen.es>
@date 29-sep-2026
*/

#include <iostream>
using namespace std;

int main() {
    cout << "Máquina expendedora - SOLO SECUENCIALES"<<endl;

    int precioProducto=0, dineroQueDa=0, aDevolver=0;
    cout << "¿Cuánto cuesta el producto? (en céntimos) ";
    cin >> precioProducto;

    cout << "¿Cuánto dinero me da? (en céntimos) ";
    cin >> dineroQueDa;

    aDevolver=dineroQueDa-precioProducto;
    cout << "Debo devolver " << aDevolver << " céntimos. "<< endl;
    return 0;
}
