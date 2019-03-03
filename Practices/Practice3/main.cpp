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
   
    //Suma de boleanos
string sumaDeBool(bool boolSuma){
        if(boolSuma == true)
            return "True";
        else
            return "Fase";
    }
int main(int argc, char** argv) {
    
    // Forma de crear un objeto con parametros (el anterior
    //creaba 2 objetos
//    Temazo temazo1("Ave Maria","David Bisbal",140,8);
    Temazo temazoDefecto;
    //Temazo* pT = new Temazo( "xxx");
    //Temazo temazo2 = Temazo();
    
    Garito garito1;
    Garito garitoCopia(garito1);
    
    Fecha fecha1;
    Fecha fecha2(22,4,2018);
    
    
    //showTemazo(temazo1);
    showTemazo(temazoDefecto);
    
    showGarito(garito1);
    showGarito(garitoCopia);
    
    showFecha(fecha1);
    showFecha(fecha2);
    
    cout<<"Modifying garitoCopia..."<<endl;
    
    try{
        modifyGarito(garitoCopia);
    
        showGarito(garitoCopia);
        
        garito1.setNombre("");
    }
    catch( string &error ){
        cerr << error << endl;
    }

    
    
    //Suma de boleanos
     
    cout<<endl;
       cout<<endl;
          cout<<endl;
             cout<<endl;
                cout<<endl;
                
    
    cout<<"Valores de suma de bool:"<<endl;
    
    bool bool1 = true;
    bool bool2 = true;
    bool boolSuma = bool1 + bool2;
    
    cout<<"True + True = ";
    cout<<sumaDeBool(boolSuma)<<endl;
    
    bool1 = true;
    bool2 = false;
    boolSuma = bool1 + bool2;
    
    cout<<"True + False = ";
    cout<<sumaDeBool(boolSuma)<<endl;
    
    bool1 = false;
    bool2 = true;
    boolSuma = bool1 + bool2;
    
    cout<<"False + True = ";
    cout<<sumaDeBool(boolSuma)<<endl;
    
    bool1 = false;
    bool2 = false;
    boolSuma = bool1 + bool2;
    
    cout<<"False + False = ";
    cout<<sumaDeBool(boolSuma)<<endl;
    
    return 0;
}

