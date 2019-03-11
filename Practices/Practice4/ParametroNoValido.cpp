/* 
 * File:   ParametroNoValido.cpp
 * Author: javierarandaizquierdo
 */

#include "ParametroNoValido.h"

ParametroNoValido::ParametroNoValido() {

}


ParametroNoValido::ParametroNoValido(string fichero, string funcion, string descripcion):
    _fichero(fichero),
    _funcion(funcion),
    _descripcion(descripcion)
{}

ParametroNoValido::ParametroNoValido(const ParametroNoValido& orig):
    _fichero(orig._fichero),
    _funcion(orig._funcion),
    _descripcion(orig._descripcion)
{}

ParametroNoValido::~ParametroNoValido() {
}

string ParametroNoValido::queOcurre(){
    return _fichero +" - "+ _funcion +" - "+ _descripcion;
}

