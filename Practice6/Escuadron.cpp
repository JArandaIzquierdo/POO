#include "Escuadron.h"


Escuadron::Escuadron(): Escuadron("","") {
}

Escuadron::Escuadron(std::string nombre, std::string base): 
    _nombre(nombre),
    _base(base),
    _numPilotos(0)
{
    
    for(int i=0;i< _MAX_PILOTOS;i++){
        _pilotos[i]=nullptr;
    }
}

Escuadron::Escuadron(const Escuadron& orig): 

    _nombre(orig._nombre),
    _base(orig._base),
    _numPilotos(0)

{
    for(int i=0;i<orig._numPilotos;i++){
        _pilotos[i]=nullptr;
    }
}

Escuadron::~Escuadron() {
    for(int i=0;i<_numPilotos;i++){
        _pilotos[i]=nullptr;
    }
}

string Escuadron::getNombre() {
    return _nombre;
}

string Escuadron::getBase() {
    return _base;
}

void Escuadron::setNombre(string nombre) {
    _nombre = nombre;
}

void Escuadron::setBase(string base) {
    _base = base;
}

void Escuadron::addPiloto(Piloto* p) {
    if(_numPilotos == _MAX_PILOTOS){
        throw std::length_error ("Escuadron::addPiloto: No se pueden añadir"
                                "mas pilotos a este escuadron");
    }
    _pilotos[_numPilotos]= p;
    _numPilotos++;
}

void Escuadron::deletePiloto(string nombre) {

    for(int i=0;i<_numPilotos;i++){
        if(_pilotos[i]->getNombre()==nombre){
            _pilotos[i]=_pilotos[_numPilotos-1];
        }
    }
    _pilotos[_numPilotos-1]=nullptr;
    _numPilotos--;
}

double Escuadron::promedioMisiones() {
    double media;
    for(int i=0;i<_numPilotos;i++){
        media = media +_pilotos[i]->getNumMisiones();
    }
    media = media/_numPilotos;
    return media;
}






