/** 
 * @file main.cpp
 * @author Casipro Gramo
 *
 * @date Fecha estelar 20160309
 */
#include <iostream>
#include <cstdlib>
#include <string>

#include "Piloto.h"
#include "Escuadron.h"

using namespace std;

/**
 * @todo Ver el enunciado del ejercicio 5 de la práctica
 */
int main ( int argc, char** argv )
{
    string datosPilotos[5] = {"Dameron Poe;Jakku;100;123456;---",
                              "Anakin Skywalker;Tatooine;133;126756;Derribados 3 cazas enemigos",
                              "Han Solo;Corellia;247;126786;Impacto en motor izquierdo",
                              "Chewbacca;Kashyyk;115;136786;---",
                              "Leia Organa;Alderaan;3;126336;Derribados 10 cazas enemigos"};

    
    //Creamos un array de 5 pilotos
    Piloto pilotos[5];
    
    //Cargamos los datos de los pilotos con fromCSV
    for(int i=0;i<5;i++){
        pilotos[i].fromCSV(datosPilotos[i]);
    }
    
    //Creamos 2 escuadrones
    Escuadron escuadron1("Escuadron 1", "Base 1");
    Escuadron escuadron2("Escuadron 2", "Base 2");
    
    //Los 2 primeros pilotos son asignados al primer escuadron
    escuadron1.addPiloto(&pilotos[0]);
    escuadron1.addPiloto(&pilotos[1]);
    
    //Los otros 3 pilotos son asignados al escuadron 2
    for(int i=2;i<5;i++){
        escuadron2.addPiloto(&pilotos[i]);
    }
    
    //Mostrar el nombre y la media de cada escuadron
    string nombre;
    double media;
    
    nombre = escuadron1.getNombre();
    media = escuadron1.promedioMisiones();
    
    cout<<nombre<<" - "<<media<<endl;
    
    nombre = escuadron2.getNombre();
    media = escuadron2.promedioMisiones();
    
    cout<<nombre<<" - "<<media<<endl;
    
    
    //Crear 2 starFighter
    StarFighter starFighter1("Marca 1", "Modelo 1");
    StarFighter starFighter2("Marca 2", "Modelo 2");
    
    //Añadimos 3 piezas al starFighter 1
    starFighter1.addPieza("Piezas 1 ", 1, "Esta es la pieza 1 del starFighter 1");
    starFighter1.addPieza("Piezas 2 ", 1, "Esta es la pieza 2 del starFighter 1");
    starFighter1.addPieza("Piezas 3 ", 1, "Esta es la pieza 3 del starFighter 1");
    
    //Añadimos 3 piezas al starFighter 2
    starFighter2.addPieza("Piezas 1 ", 2, "Esta es la pieza 1 del starFighter 2");
    starFighter2.addPieza("Piezas 2 ", 2, "Esta es la pieza 2 del starFighter 2");
    starFighter2.addPieza("Piezas 3 ", 2, "Esta es la pieza 3 del starFighter 2");
    
    //Mostramos el peso de casa StarFighter
    
    float peso;
    
    peso= starFighter1.calculaPeso();
    cout<<"El peso del StarFighter 1 es: "<<peso<<endl;
    
    peso=starFighter2.calculaPeso();
    cout<<"El peso del StarFighter 2 es: "<<peso<<endl;
    
    
    
    return 0;
}

