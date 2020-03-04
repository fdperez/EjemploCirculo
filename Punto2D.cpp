/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Punto2D.cpp
 * Author: Juan
 * 
 * Created on 13 de febrero de 2020, 12:12
 */

#include "Punto2D.h"

Punto2D::Punto2D():_x(0), _y(0) {
}

Punto2D::Punto2D(int _x, int _y):_x(_x), _y(_y) {
}

Punto2D::~Punto2D() {
}

int Punto2D::get_X() {
    return this->_x;
}

int Punto2D::get_Y() {
    return this->_y;
}

void Punto2D::set_X(int _x) {
    this->_x=_x;
}

void Punto2D::set_Y(int _y) {
    this->_y=_y;
}



