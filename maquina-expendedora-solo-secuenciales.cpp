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

    // Monedas de 2€
    int valorMoneda=200;
    int numMonedas = aDevolver/valorMoneda;
    aDevolver = aDevolver%valorMoneda;
    cout << numMonedas << " monedas de 2€" << endl;

    // Monedas de 1€
    valorMoneda=100;
    numMonedas = aDevolver/valorMoneda;
    aDevolver = aDevolver%valorMoneda;
    cout << numMonedas << " monedas de 1€" << endl;

    // Monedas de 50 cent
    valorMoneda=50;
    numMonedas = aDevolver/valorMoneda;
    aDevolver = aDevolver%valorMoneda;
    cout << numMonedas << " monedas de 50 cents." << endl;

   
    // Monedas de 20 cent
    valorMoneda=20;
    numMonedas = aDevolver/valorMoneda;
    aDevolver = aDevolver%valorMoneda;
    cout << numMonedas << " monedas de 20 cents." << endl;

    
    // Monedas de 10 cent
    valorMoneda=10;
    numMonedas = aDevolver/valorMoneda;
    aDevolver = aDevolver%valorMoneda;
    cout << numMonedas << " monedas de 10 cents." << endl;

   
    // Monedas de 5 cent
    valorMoneda=5;
    numMonedas = aDevolver/valorMoneda;
    aDevolver = aDevolver%valorMoneda;
    cout << numMonedas << " monedas de 5 cents." << endl;


    // Monedas de 2 cent
    valorMoneda=2;
    numMonedas = aDevolver/valorMoneda;
    aDevolver = aDevolver%valorMoneda;
    cout << numMonedas << " monedas de 2 cents." << endl;


    // Monedas de 1 cent
    cout << aDevolver << " monedas de 1 cents." << endl;

    return 0;
}
