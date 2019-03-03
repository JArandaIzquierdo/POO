/* 
 * File:   Temazo.cpp
 * Author: javierarandaizquierdo
 * 
 */

#include "Temazo.h"

Temazo::Temazo(string titulo, string interprete,int duracionEnSegundo, int puntuacionDelPublico,
        string nombreUltimoGarito, Fecha fechaUltimoUso):
            _titulo(titulo),
            _interprete(interprete),
            _duracionEnSegundos(duracionEnSegundo),
            _puntuacionDelPublico(puntuacionDelPublico),
            _nombreUltimoGarito(nombreUltimoGarito),
            _fechaUltimoUso(fechaUltimoUso)
{}

Temazo::Temazo(const Temazo& orig) : _titulo(orig._titulo),_interprete(orig._interprete),
                                     _duracionEnSegundos(orig._duracionEnSegundos),
                                     _puntuacionDelPublico(orig._puntuacionDelPublico){}

Temazo::~Temazo() {
    
}

//Setter
void Temazo::setTitulo(string titulo){
    this->_titulo = titulo;
}

void Temazo::setInterprete(string interprete){
    this->_interprete = interprete;
}

void Temazo::setDuracionEnSegundos(int duracionEnSegundos){
    this->_duracionEnSegundos = duracionEnSegundos;
}

void Temazo::setNombreUltimoGarito(string nombreUltimoGarito) {
    this->_nombreUltimoGarito = nombreUltimoGarito;   
}

void Temazo::setFechaUltimoUso(Fecha fechaUltimoUso){
    this->_fechaUltimoUso = fechaUltimoUso;
}



//Getter
string Temazo::getTitulo(){
    return this->_titulo;
}

string Temazo::getInterprete(){
    return this->_interprete;
}

int Temazo::getDuracionEnSegundo(){
    return this->_duracionEnSegundos;
}

int Temazo::getPuntiacionDelPublico(){
    return this->_puntuacionDelPublico;
}

string Temazo::getNombreUltimoGarito(){
    return this->_nombreUltimoGarito;
}

Fecha Temazo::getFehaUltimoUso(){
    return this->_fechaUltimoUso;
}

