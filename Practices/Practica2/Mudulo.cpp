/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Mudulo.cpp
 * Author: javierarandaizquierdo
 * 
 * Created on 28 de febrero de 2019, 13:19
 */

#include "Mudulo.h"

namespace Modulo{

    void showTemazo(Temazo temazo){
        cout<<"Titulo: ";
        cout<<temazo.getTitulo()<<endl;
        
        cout<<"Interprete: ";
        cout<<temazo.getInterprete()<<endl;
        
        cout<<"Duracion: ";
        cout<<temazo.getDuracionEnSegundo()<<endl;
        
        cout<<"Puntuacion: ";
        cout<<temazo.getPuntiacionDelPublico()<<endl;
    }
    
    void showGarito(Garito garito){
        cout<<"Nombre: ";
        cout<<garito.getNombre()<<endl;
        
        cout<<"Direccion: ";
        cout<<garito.getDireccion()<<endl;
    }
    
    void showFecha(Fecha fecha){
        cout<<fecha.getDia()<<" - "<<fecha.getMes()<<" - "<<fecha.getAnio()<<endl;
    }
    
    void modifyGarito(Garito& garito){
        
        string nombre, direccion;
        
        cout<<"Introduce the new name for the garito: ";
        cin>>nombre;
        
        cout<<"Introduce the new address for the garito: ";
        cin>>direccion;
        
        garito.setNombre(nombre);
        garito.setDireccion(direccion);
               
    }
}