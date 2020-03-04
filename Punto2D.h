/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Punto2D.h
 * Author: Juan
 *
 * Created on 13 de febrero de 2020, 12:12
 */

#ifndef PUNTO2D_H
#define PUNTO2D_H

class Punto2D {
public:
    Punto2D();
    Punto2D(int _x, int _y);
    Punto2D(const Punto2D& orig)=default;
    virtual ~Punto2D();
    void set_X(int _x);
    void set_Y(int _y);
    int get_X();
    int get_Y();
private:
    int _x;
    int _y;
};

#endif /* PUNTO2D_H */

