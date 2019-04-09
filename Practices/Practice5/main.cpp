/** 
 * @file main.cpp
 * @author Casipro Gramo 
 * @author Yoyapro GRamo
 *
 * @date Fecha estelar 20160309
 */

#include <cstdlib>
#include <string>
#include<iostream>

#include "Informe.h"
#include "Piloto.h"
#include "Droide.h"

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
   string datosNaves[5] = {"Kuat Systems;Delta-7;1", 
                           "Kuat Systems;Delta-7B;1", 
                           "Incom Corporation;T-65B X-wing;1", 
                           "Koensayr Manufacturing;Y-wing;2", 
                           "Kuat Systems;A-wing;1"};
   string datosDroides[5] = {"Industrial Automation;R2-D2", 
                             "Industrial Automation;R2-KT", 
                             "AccuTronics;R3-D3", 
                             "AccuTronics;R3-KT", 
                             "Arakyd Industries;C3PO"};

   // Ejemplo de encadenamiento de llamadas a métodos sobre un objeto
   Informe i1;
   i1.setIdPiloto (1)
     .setFechaEstelar (31521231)
     .setDatosInforme ("Sin novedad");
   
// Usar el metodo fromCSV de la clase piloto
   
   Piloto pilotos[5];
   for ( int i=0; i<5;i++){
       pilotos[i].fromCSV(datosPilotos[i]);
   }
   
//Usar el metodo fromCSV de la clase StarFither
   StarFighter starFighters[5];
   for(int i=0;i<5;i++){
       starFighters[i].fromCSV(datosNaves[i]);
   }
  
//Usar el metodo fromCSV de la clase Droide
   Droide droides[5];
   for(int i=0; i<5;i++){
       droides[i].fromCSV(datosDroides[i]);
   }
   
   
//The first pilot is associated to the third droid and 
//the second starfighter
pilotos[0].setNave(&starFighters[1]);
pilotos[0].setAuxiliar(&droides[2]);

//The second pilot is associated to the first droid and 
//the fourth starfighter
pilotos[1].setAuxiliar(&droides[0]);
pilotos[1].setNave(starFighters[3]);

//The third pilot is associated to the second droid and 
//the first starfighter
pilotos[2].setAuxiliar(&droides[1]);
pilotos[2].setNave(&starFighters[0]);   

//The reports for the last mission of the two first pilots 
//are created

    return 0;
}
