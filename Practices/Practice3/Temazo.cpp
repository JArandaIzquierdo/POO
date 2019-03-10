/* 
 * File:   Temazo.cpp
 * Author: javierarandaizquierdo
 * 
 */

#include "Temazo.h"

Temazo::Temazo(string titulo, string interprete,string nombreUltimoGarito,
        Fecha fechaUltimoUso,int duracionEnSegundo, int puntuacionDelPublico
        ):
            _titulo(titulo),
            _interprete(interprete),
            _duracionEnSegundos(duracionEnSegundo),
            _puntuacionDelPublico(puntuacionDelPublico),
            _nombreUltimoGarito(nombreUltimoGarito),
            _fechaUltimoUso(fechaUltimoUso)
{}

Temazo::Temazo(const Temazo& orig) : 
    _titulo(orig._titulo),
    _interprete(orig._interprete),
    _duracionEnSegundos(orig._duracionEnSegundos),
    _puntuacionDelPublico(orig._puntuacionDelPublico),
    _nombreUltimoGarito(orig._nombreUltimoGarito),
    _fechaUltimoUso(orig._fechaUltimoUso)
{}

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

Fecha& Temazo::getFechaUltimoUso(){
    return this->_fechaUltimoUso;
}

//Operators
bool Temazo::operator<(Temazo& otroTemazo) {
    if(this->_puntuacionDelPublico == otroTemazo._puntuacionDelPublico)
        return this->getFechaUltimoUso() < otroTemazo.getFechaUltimoUso();
    return this->_puntuacionDelPublico < otroTemazo._puntuacionDelPublico;
}

bool Temazo::operator=( Temazo& otroTemazo) {

    if(this!=&otroTemazo){
        this->_titulo = otroTemazo._titulo;
        this->_interprete = otroTemazo._interprete;
        this->_nombreUltimoGarito = otroTemazo._nombreUltimoGarito;
        this->_fechaUltimoUso = otroTemazo._fechaUltimoUso;
        this->_duracionEnSegundos = otroTemazo._duracionEnSegundos;
        this->_puntuacionDelPublico = otroTemazo._puntuacionDelPublico;
    }
}
