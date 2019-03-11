/* 
 * File:   ParametroNoValido.h
 * Author: javierarandaizquierdo
 */


#ifndef PARAMETRONOVALIDO_H
#define PARAMETRONOVALIDO_H

#include <iostream>
using namespace std;

#include "ParametroNoValido.h"

class ParametroNoValido {
public:
    ParametroNoValido()=default;
    ParametroNoValido(string fichero,string funcion, string descripcion);
    ParametroNoValido(const ParametroNoValido& orig);
    virtual ~ParametroNoValido();
    string queOcurre();
    
private:
    string _fichero="";
    string _funcion="";
    string _descripcion="";

};

#endif /* PARAMETRONOVALIDO_H */

