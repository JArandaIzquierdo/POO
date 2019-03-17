/* 
 * File:   Garito.cpp
 * Author: javierarandaizquierdo
 */

#include "Garito.h"
#include "ParametroNoValido.h"

Garito::Garito(string nombre, string direccion): _nombre(nombre),_direccion(direccion){
}

Garito::Garito( const Garito& orig ):_nombre(orig._nombre),_direccion(orig._direccion){
}

Garito::~Garito() {
}
    
//Setter methods
void Garito::setNombre(string nombre){
    if(nombre == ""){
        throw ParametroNoValido ("Garito.cpp","setNombre","Nombre esta vacio");
    }
    else{
         this->_nombre = nombre;
    }
};

void Garito::setDireccion(string direccion){
    if(direccion == ""){
        throw ParametroNoValido("Garito.cpp","setDireccion","Direccion esta vacio");
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

string Garito::toCSV(){
    
    stringstream ss;
    string result;
    
    ss <<_nombre<<"; "<<_direccion;
    
    result = ss.str();
    
    return result;
}

