/* 
 * File:   main.cpp
 * Author: javierarandaizquierdo
 */

#include <cstdlib>
#include "Temazo.h"
#include "Garito.h"
#include "Fecha.h"
#include "Mudulo.h"
#include <iostream>

using namespace std;


/*
 * 
 */
void mostrarTemazosAnteriores(Temazo temazos[],int tamTemazos, Fecha fecha){
    for(int i=0; i<10;i++){
        if (temazos[i].getFechaUltimoUso() < fecha)
            showTemazo(temazos[i]);
    }
}

int main(int argc, char** argv) {
    
    /*Codigo para probar las excepciones del metodo incrementarPuntuacion
    de la clase Temazo*/
    
    Temazo temazo1("Temazo1","El Fary", "Garito 1",Fecha(23,3,2017),
            60,20);
    
    showTemazo(temazo1);
    
    try{
        temazo1.incrementarPuntuacion(20);
    }
    catch(ParametroNoValido &parametro){
        cout<<parametro.queOcurre()<<endl;
    }
    
    /*Probar las excepciones de la clase Garito
     */
    
    Garito garito1("Garito 1","Direccion 1");
    try{
        garito1.setNombre("");
        garito1.setDireccion("");
    }
    catch(ParametroNoValido &excepcion){
        cout<< excepcion.queOcurre() << endl;
    }
    
    /*6.a) Crear un vector de punturos a 10 Gartos. Crear 2 objetos 
     * usando los 2 primeros elementos del vector y cambiar su nombre
     * y direccion.
     */
    
    Garito *garitos[10];
    
    garitos[0]->setDireccion("Calle 0");
    garitos[0]->setNombre("Garito 1");
    
    showGarito(*garitos[0]);
    
    /* 6.b) Crea un vector de 5 temazos. Modifica los 3 primeros 
     * con los datos que quieras. Todos los objetos tienen que tener
     * la puntuacion a 0 y tienen que haber tocado por ultima vez en 
     * alguno de los garitos del apartado a)
     */
    
    Temazo temazos [5];
    
    temazos[0].setTitulo("A toda mecha");
    temazos[0].setInterprete("El fary");
    temazos[0].setDuracionEnSegundos(63);
    temazos[0].setFechaUltimoUso(Fecha(22,03,2015));
    temazos[0].setNombreUltimoGarito(garitos[0]->getNombre());
    
    showTemazo(temazos[0]);
    
    return 0;
}

