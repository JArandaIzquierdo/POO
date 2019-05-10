

#ifndef ESCUADRON_H
#define ESCUADRON_H

#include "Piloto.h"
#include <string>

using namespace std;

class Escuadron {
public:
    static const int _MAX_PILOTOS=50;
    
    Escuadron();
    Escuadron(std::string nombre, std::string base);
    Escuadron(const Escuadron& orig);
    virtual ~Escuadron();
    
    //Setter
    void setNombre(string nombre);
    void setBase(string base);
    
    //Getter
    string getNombre();
    string getBase();
    
    //Añadir piloto
    void addPiloto(Piloto *p);
    
    //Eliminar piloto
    void deletePiloto(string nombre);
    
    //Metodo promedioMisiones()
    double promedioMisiones();
    
private:
    std::string _nombre;
    std::string _base;
    
    int _numPilotos=0;
    Piloto *_pilotos[_MAX_PILOTOS];
};

#endif /* ESCUADRON_H */

