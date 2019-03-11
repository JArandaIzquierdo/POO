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

const int MAX=100;

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
    
//    // Forma de crear un objeto con parametros (el anterior
//    //creaba 2 objetos
    Temazo temazo1("Ave Maria","David Bisbal","El ultimo garito",Fecha (2,2,2012),140,8);
    Temazo temazoDefecto;
//    //Temazo temazo2 = Temazo();
//    
//    Garito garito1;
//    Garito garitoCopia(garito1);
//    
//    Fecha fecha1;
//    Fecha fecha2(22,4,2018);
//    
//    
    showTemazo(temazo1);
//    showTemazo(temazoDefecto);
//    
//    showGarito(garito1);
//    showGarito(garitoCopia);
//    
//    showFecha(fecha1);
//    showFecha(fecha2);
//    
//    cout<<"Modifying garitoCopia..."<<endl;
//    
//    try{
//        modifyGarito(garitoCopia);
//    
//        showGarito(garitoCopia);
//        
//        garito1.setNombre("");
//    }
//    catch( string &error ){
//        cerr << error << endl;
//    }
    
    //a) vector de 20 temazos
   /* Temazo temazos[20];
    
    //b) Puntero que apunta a la casa del DJ
    Garito* pMiCasa = new Garito ("Casa de Seguismundo","C/ de los DJs, 20");
    
    //c) Vector de 10 punteros de tipo Garito
    Garito* garitos[10];
    
    //Inicializacion de los 2 primeros garitos del vector garitos en el HEAP
    garitos[0] = new Garito("Garito 1 en el vector","Calle de garito 1");
    garitos[0] = new Garito("Garito 2 en el vector","Calle de garito 2");
    
    //d) Modificaciones de los 3 primeros temazos
    temazos[0].setTitulo("Temazo 1");
    temazos[0].setInterprete("Seguismundo");
    temazos[0].setFechaUltimoUso(Fecha(24,01,1990));// Mi cumpleaños
    temazos[0].setNombreUltimoGarito("Casa de Seguismundo");// la casa del DJ   
    temazos[1].setTitulo("Temazo 2");
    temazos[1].setInterprete("Interprete 2");
    temazos[1].setFechaUltimoUso(Fecha(26,05,2018));//Ultima Champion ganada por el madrid
    temazos[1].setNombreUltimoGarito("Casa del Madrid");
    
    temazos[2].setTitulo("Temazo 3");
    temazos[2].setInterprete("Interprete 3");
    temazos[2].setFechaUltimoUso(Fecha(6,06,2015));//Ultima Champion ganada por el Barcelona
    temazos[2].setNombreUltimoGarito("Casa de barcelona");
    
    //e) Funcion para mostrar los temazos previos a la fecha dada.
    Fecha fechaE(1,1,2016);
    
    mostrarTemazosAnteriores(temazos,10,fechaE);
    
    delete pMiCasa;
    */
    
    Garito* garitos[10];
    garitos[0]("garito0","DireccionGarito0");
    garitos[1]("garito1","DireccionGarito1");
    
    return 0;
}

