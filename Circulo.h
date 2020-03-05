/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Circulo.h
 * Author: Juan
 *
 * Created on 12 de febrero de 2020, 9:38
 */

#ifndef CIRCULO_H
#define CIRCULO_H

#include "Punto2D.h"
#include "TamanoP.h"

class Circulo {
public:
    Circulo();
    Circulo(int _x, int _y, float _radio, int _tam);
    Circulo(const Circulo& orig);
    virtual ~Circulo();
    int get_X();
    int get_Y();
    float get_Radio();
    void set_X(int _x);
    void set_Y(int _y);
    void set_Radio(float _radio);
    float getArea();
    Punto2D* get_LPuntos(); 
    int get_Tam(); 
    bool operator<=(const Circulo &c);
    bool operator>( const Circulo &c);
    Circulo& operator=(const Circulo &c);
    
private:
    int _x;
    int _y;
    int _tam;
    float _radio;
    Punto2D *_lpuntos; //Ojo con los punteros en el constructor copia y operador asignación
};

#endif /* CIRCULO_H */

