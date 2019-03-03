/* 
 * File:   Garito.h
 * Author: javierarandaizquierdo
 */

#ifndef GARITO_H
#define GARITO_H

#include <iostream>
using namespace std;

class Garito {
public:
    
    Garito(string nombre="",string direccion="");
    Garito(const Garito& orig);
    virtual ~Garito();
    
    void setNombre(string nombre);
    void setDireccion(string direccion);
    
    string getNombre();
    string getDireccion();

private:
    
    string _nombre;
    string _direccion;

};

#endif /* GARITO_H */

