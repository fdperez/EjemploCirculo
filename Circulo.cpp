
/* 
 * File:   Circulo.cpp
 * Author: Juan
 * 
 * Created on 12 de febrero de 2020, 9:38
 */

#include <math.h>
#include <iostream>
#include "Circulo.h"
#include <string>

Circulo::Circulo() : _x(0), _y(0), _radio(0.0), _tam(0), _lpuntos(new Punto2D[_tam]) {
}

Circulo::Circulo(int _x, int _y, float _radio, int _tam): _x(_x), _y(_y), _radio(_radio), _tam(_tam), _lpuntos(new Punto2D[_tam]) {
    if(_tam<5){
        throw TamanoP("El radio es demasiado pequeño debe ser mayor que 5",this->_radio);
    }
}

Circulo::Circulo(const Circulo& orig) : _x(orig._x), _y(orig._y), _radio(orig._radio), _tam(orig._tam), _lpuntos(new Punto2D[orig._tam]) {
    for (int i=0; i<this->_tam; i++){
        this->_lpuntos[i]=orig._lpuntos[i];
    }
}

Circulo::~Circulo() {
    delete []this->_lpuntos;
}

float Circulo::get_Radio() {
    return this->_radio;
}

int Circulo::get_X() {
    return this->_x;
}

int Circulo::get_Y() {
    return this->_y;
}

void Circulo::set_Radio(float _radio) {
    this->_radio = _radio;
}

void Circulo::set_X(int _x) {
    this->_x = _x;
}

void Circulo::set_Y(int _y) {
    this->_y = _y;
}

float Circulo::getArea() {
    return M_PI * pow(_radio, 2);
}

Punto2D* Circulo::get_LPuntos() {
    return this->_lpuntos;
}

int Circulo::get_Tam() {
    return this->_tam;
}

bool Circulo::operator<=(const Circulo& c) {
    return this->_radio<=c._radio;
}

bool Circulo::operator>(const Circulo& c) {
    return this->_radio>c._radio;
}

Circulo& Circulo::operator=(const Circulo& c) {
    if(this!=&c){
        this->_x=c._x;
        this->_y=c._y;
        this->_radio=c._radio;
        if(this->_tam!=c._tam){
            this->_tam=c._tam;
            delete[]this->_lpuntos;
            this->_lpuntos=new Punto2D[this->_tam];
        }
        for(int i; i<this->_tam; i++){
            this->_lpuntos[i]=c._lpuntos[i];
        }
    }
    return *this;
}

