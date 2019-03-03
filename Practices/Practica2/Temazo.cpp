/* 
 * File:   Temazo.cpp
 * Author: javierarandaizquierdo
 * 
 */

#include "Temazo.h"

Temazo::Temazo(string titulo, string interprete,int duracionEnSegundo, int puntuacionDelPublico){
    this->_titulo = titulo;
    this->_interprete = interprete;
    this->_duracionEnSegundos = duracionEnSegundo;
    this->_puntuacionDelPublico = puntuacionDelPublico;
}

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
