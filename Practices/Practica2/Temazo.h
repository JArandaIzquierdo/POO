/* 
 * File:   Temazo.h
 * Author: javierarandaizquierdo
 *
 */
#include <iostream>
using namespace std;

#ifndef TEMAZO_H
#define TEMAZO_H

class Temazo {
public:
    Temazo();
    Temazo(string titulo="Tema", string interprete="musico",int duracionEnSegundo=0, int puntuacionDelPublico=0);
    Temazo(const Temazo& orig);
    virtual ~Temazo();
    
    //Setter
    void setTitulo(string titulo);
    void setInterprete(string interprete);
    void setDuracionEnSegundos(int duracionEnSegundos);
    
    //Getter
    string getTitulo();
    string getInterprete();
    int getDuracionEnSegundo();
    int getPuntiacionDelPublico();
    
private:
    
    string _titulo;
    string _interprete;
    int _duracionEnSegundos;
    int _puntuacionDelPublico;

};

#endif /* TEMAZO_H */

