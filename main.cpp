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

//Los pasos en funciones se deben hacer con punteros o referencias

void muestraDatos(Circulo &c1) {
    cout << c1.get_X() << " - " << c1.get_Y() << " - " << c1.get_Radio() << " - " << c1.getArea() << endl;
    for (int i = 0; i < c1.get_Tam(); i++) {
        cout << "valores de la pos " << i << " son " << c1.get_LPuntos()[i].get_X() << " - " << c1.get_LPuntos()[i].get_Y() << endl;
    }
}

int main(int argc, char** argv) {
    try {
        Circulo c1(1, 1, 1, 20); //Declaración de un objeto, normalmente lo crearemos con punteros
        c1.get_LPuntos()[0].set_X(20);
        muestraDatos(c1);
    } catch (TamanoP &ex) {
        cout << ex.getError();
    }

    /*Circulo c2;//Constructor por defecto Circulo c2=c1 haría una llamada al constructor copia
    c2 = c1; //LLamada al operador asignación

    Circulo *c3 = new Circulo(0, 0, 5, 2);//Declaración de un objeto como un puntero
    //c2.set_Radio(20);

    //muestraDatos(c2);
    muestraDatos(*c3);

    if (c3)
        delete c3;
     */

    Circulo * ac[5]; //Array estático con 5 posiciones de punteros a círculos
    for (int i = 0; i < 5; i++) {
        ac[i] = nullptr;
    }
    ac[1] = new Circulo(); //Inicializo en la posición 1 con un puntero a un círculo.
    for (int i = 0; i < 5; i++) {
        if (ac[i] != nullptr) {
            cout << i << " - " << ac[i]->get_Radio() << endl; //En el constructor por defecto es 0
        }
    }

    for (int i = 0; i < 5; i++) {
        delete ac[i];
    }

    Circulo **lc = new Circulo*[5]; //Array dinámico de punteros a Círculos(Podemos modificar la memoria reservada)
    for (int i = 0; i < 5; i++) {
        lc[i] = nullptr;
    }
    lc[2] = new Circulo(); //Inicializo en la posición 2 con un puntero a un círculo. Si en vez 
    //de iniciarlizarlo con un círculo, lo hago con otro Array Dinámico
    //el resultado sería una matriz (Un array de arrays).
    for (int i = 0; i < 5; i++) {
        if (lc[i] != nullptr) {
            cout << i << " - " << lc[i]->get_Radio() << endl;
        }
    }

    for(int i=0; i<5; i++){
        delete lc[i];
    }
    delete []lc;
    
    return 0;
}

