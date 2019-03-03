/* 
 * File:   Mudulo.cpp
 * Author: javierarandaizquierdo
 * 
 */

#include "Mudulo.h"



void showFecha(Fecha& fecha){
        cout<<  fecha.getDia()<<" - "<<
                fecha.getMes()<<" - "<<
                fecha.getAnio()<<endl;
}
        

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
        
        cout<<"Nombre del ultimo garito: ";
        cout<<temazo.getNombreUltimoGarito()<<endl;
        
        cout<<"Fecha de ultimo uso: ";
        //showFecha( temazo.getFehaUltimoUso() );
        cout<<  temazo.getFehaUltimoUso().getDia()<<" - "<<
                temazo.getFehaUltimoUso().getMes()<<" - "<<
                temazo.getFehaUltimoUso().getAnio()<<endl;
        
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
    
    void modifyGarito(Garito& garito){
        
        string nombre, direccion;
        
        cout<<"Introduce the new name for the garito: ";
        cin>>nombre;
        
        cout<<"Introduce the new address for the garito: ";
        getline(cin,direccion);
        
        garito.setNombre(nombre);
        garito.setDireccion(direccion);    
    }