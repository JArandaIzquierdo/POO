/* 
 * File:   main.cpp
 * Author: javierarandaizquierdo
 */

#include <cstdlib>
#include "Temazo.h"
#include "Garito.h"
#include "Fecha.h"
#include "Mudulo.h"

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    
    // Forma de crear un objeto con parametros (el anterior
    //creaba 2 objetos
    Temazo temazo1("Ave Maria","David Bisbal",140,8);
    //Temazo* pT = new Temazo( "xxx");
    //Temazo temazo2 = Temazo();
    
    Garito garito1;
    Garito garitoCopia (garito1);
    
    Fecha fecha1 ;
    Fecha fecha2(22,4,2018);
    
    Modulo::showTemazo(temazo1);
    
    Modulo::showGarito(garito1);
    Modulo::showGarito(garitoCopia);
    
    Modulo::showFecha(fecha1);
    Modulo::showFecha(fecha2);
    
    

    return 0;
}

