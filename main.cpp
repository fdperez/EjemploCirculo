/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Juan
 *
 * Created on 12 de febrero de 2020, 9:34
 */

#include <cstdlib>
#include <iostream>
#include "Circulo.h"
#include "TamanoP.h"

using namespace std;

void muestraDatos(Circulo &c1) {
    cout << c1.get_X() << " - " << c1.get_Y() << " - " << c1.get_Radio() << " - " << c1.getArea() << endl;
    for (int i = 0; i < c1.get_Tam(); i++) {
        cout << "valores de la pos " << i << " son " << c1.get_LPuntos()[i].get_X() << " - " << c1.get_LPuntos()[i].get_Y() << endl;
    }
}

int main(int argc, char** argv) {
    try {
        Circulo c1(1, 1, 1, 2);
        c1.get_LPuntos()[0].set_X(20);
        muestraDatos(c1);
    } catch (TamanoP &ex) {
        cout << ex.getError();
    }
    Circulo c2;
    //   c2 = c1;



    Circulo *c3 = new Circulo(0, 0, 5, 2);
    c2.set_Radio(20);


    muestraDatos(c2);
    //   muestraDatos(*c3);

    if (c3)
        delete c3;

    return 0;
}

