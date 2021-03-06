/* 
 * File:   Garito.cpp
 * Author: javierarandaizquierdo
 */

#include "Garito.h"

Garito::Garito(string nombre, string direccion): _nombre(nombre),_direccion(direccion){
}

Garito::Garito( const Garito& orig ):_nombre(orig._nombre),_direccion(orig._direccion){
}

Garito::~Garito() {
}
    
//Setter methods
void Garito::setNombre(string nombre){
    if(nombre == ""){
        throw string ("The name is empty");
    }
    else{
         this->_nombre = nombre;
    }
};

void Garito::setDireccion(string direccion){
    if(direccion == ""){
        throw string ("The address is empty");
    }
    else{
        this->_direccion = direccion;
    }
};

//Getter methods

string Garito::getNombre(){
    return _nombre;
};
string Garito::getDireccion(){
    return _direccion;
};

