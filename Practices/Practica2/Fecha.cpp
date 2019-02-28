/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Fecha.cpp
 * Author: javierarandaizquierdo
 * 
 * Created on 25 de febrero de 2019, 10:08
 */

#include "Fecha.h"
#include <ctime>

Fecha::Fecha() {
    //Gets the currents time.
    std::time_t currentTime = std::time(0);   

    //Convert the current tim into something that we can work whith.
    std::tm* ctConverter = std::localtime(&currentTime);

    //Assign the values to the ...
    this->_dia = ctConverter->tm_mday;
    this->_mes = ctConverter->tm_mon;
    this->_anio = ctConverter->tm_year + 1900;        
}
Fecha::Fecha(int dia, int mes, int anio): _dia(dia),_mes(mes),_anio(anio){
}

Fecha::Fecha(const Fecha& orig) {
}

//Setter
void Fecha::setDia(int dia){
    this->_dia = dia;
}

void Fecha::setMes(int mes){
    this->_mes = mes;
}

void Fecha::setAnio(int anio){
    this->_anio = anio;
}

//Getter

int Fecha::getDia(){
    return _dia;
}

int Fecha::getMes(){
    return _mes;
}

int Fecha::getAnio(){
    return _anio;
}