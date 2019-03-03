/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Fecha.h
 * Author: javierarandaizquierdo
 *
 * Created on 25 de febrero de 2019, 10:08
 */

#ifndef FECHA_H
#define FECHA_H

class Fecha {
public:
    Fecha();
    Fecha(int dia, int mes, int anio);
    Fecha(const Fecha& orig);
    
    //Setter
    void setDia(int dia);
    void setMes(int mes);
    void setAnio(int anio);
    
    //Getter
    int getDia();
    int getMes();
    int getAnio();
    
private:
    int _dia;
    int _mes;
    int _anio;
};

#endif /* FECHA_H */

