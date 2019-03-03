/* 
 * File:   Mudulo.cpp
 * Author: javierarandaizquierdo
 * 
 */

#include "Mudulo.h"


    void showTemazo(Temazo temazo){
        
        cout<<endl;
        cout<<"TEMAZO:"<<endl;
        
        cout<<"Titulo: ";
        cout<<temazo.getTitulo()<<endl;
        
        cout<<"Interprete: ";
        cout<<temazo.getInterprete()<<endl;
        
        cout<<"Duracion: ";
        cout<<temazo.getDuracionEnSegundo()<<endl;
        
        cout<<"Puntuacion: ";
        cout<<temazo.getPuntiacionDelPublico()<<endl;
        
        cout<<"---------------------"<<endl;
        cout<<endl;
    }
    
    void showGarito(Garito garito){
        cout<<endl;
        cout<<"GARITO:"<<endl;
        
        cout<<"Nombre: ";
        cout<<garito.getNombre()<<endl;
        
        cout<<"Direccion: ";
        cout<<garito.getDireccion()<<endl;
        
        cout<<"------------------------"<<endl;
        cout<<endl;
    }
    
    //REVISARR!! 
    void showFecha(Fecha& fecha){
        cout<<  fecha.getDia()<<" - "<<
                fecha.getMes()<<" - "<<
                fecha.getAnio()<<endl;
    }
    
    void modifyGarito(Garito& garito){
        
        string nombre, direccion;
        
        cout<<"Introduce the new name for the garito: ";
        cin>>nombre;
        
        cout<<"Introduce the new address for the garito: ";
        getline(cin,direccion);
        
        garito.setNombre(nombre);
        garito.setDireccion(direccion);    
    }