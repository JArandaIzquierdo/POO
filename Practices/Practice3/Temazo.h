/* 
 * File:   Temazo.h
 * Author: javierarandaizquierdo
 *
 */
#include <iostream>
#include "Fecha.h"
using namespace std;

#ifndef TEMAZO_H
#define TEMAZO_H

class Temazo {
public:
    
    Temazo()=default;
    Temazo(string titulo, string interprete,int duracionEnSegundo=0, int puntuacionDelPublico=0,
            string nombreUltimoGarito, Fecha fechaUltimoUso);
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
    Fecha getFehaUltimoUso();
    
private:
    
    string _titulo="";
    string _interprete="";
    int _duracionEnSegundos=0;
    int _puntuacionDelPublico=0;
    string _nombreUltimoGarito="";
    Fecha _fechaUltimoUso;

};

#endif /* TEMAZO_H */

