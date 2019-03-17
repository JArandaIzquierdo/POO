/* 
 * File:   Temazo.h
 * Author: javierarandaizquierdo
 *
 */
#include <iostream>
#include <sstream>
#include "Fecha.h"
using namespace std;

#ifndef TEMAZO_H
#define TEMAZO_H

class Temazo {
    
    static int numTemazos;
    static int shortestLength;
    
public:
    
    Temazo()=default;
    Temazo(string titulo, string interprete,string nombreUltimoGaritoint,
            Fecha fechaUltimoUso, int duracionEnSegundo=0, int puntuacionDelPublico=0);
    Temazo(const Temazo& orig);
    virtual ~Temazo();
    
    //Setter
    void setTitulo(string titulo);
    void setInterprete(string interprete);
    void setDuracionEnSegundos(int duracionEnSegundos);
    void setNombreUltimoGarito(string nombreUltimoGarito);
    void setFechaUltimoUso (Fecha fecha);
    
    //Getter
    string getTitulo();
    string getInterprete();
    int getDuracionEnSegundo();
    int getPuntiacionDelPublico();
    string getNombreUltimoGarito();
    Fecha& getFechaUltimoUso();
    int getIdTemazo();
    int getShortestLength();
    
    //Operators
    bool operator<( Temazo& otroTemazo);
    bool operator=( Temazo& otroTemazo);
    
    //Metodos
    void incrementarPuntuacion(int points);
    string toCSV();
    
private:
    
    string _titulo="";
    string _interprete="";
    int _duracionEnSegundos=0;
    int _puntuacionDelPublico=0;
    string _nombreUltimoGarito="";
    Fecha _fechaUltimoUso;
    int _idTemazo;

};

#endif /* TEMAZO_H */

