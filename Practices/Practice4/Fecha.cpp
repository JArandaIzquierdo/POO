/* 
 * File:   Fecha.cpp
 * Author: javierarandaizquierdo
 * 
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
    this->_mes = ctConverter->tm_mon + 1;
    this->_anio = ctConverter->tm_year + 1900;        
}
Fecha::Fecha(int dia, int mes, int anio): _dia(dia),_mes(mes),_anio(anio){
}

Fecha::Fecha(const Fecha& orig):
    _dia(orig._dia),
    _mes(orig._mes),
    _anio(orig._anio)
{
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

//Operators
/**
 * Comparamos si una fechar es menor que otra dada
 * @param otraFecha
 * @return 
 */
bool Fecha::operator <(const Fecha& otraFecha){
 
    if(_anio > otraFecha._anio)
        return false;
    else{
        if(_anio == otraFecha._anio){
            if(_mes > otraFecha._mes){
                return false;
            }
            else{
                if(_mes == otraFecha._mes){
                    if(_dia > otraFecha._dia)
                        return false;
                    if(_dia == otraFecha._dia)
                        return false;
                }
            }
        }
    }
    
    return true;
}
/**
 * Comparamos si una fecha es mayor que otra dada
 * @param otraFecha Fecha con la que comparamos
 * @return 
 */
bool Fecha::operator >(const Fecha& otraFecha){
    if(_anio < otraFecha._anio)
        return false;
    else{
        if(_anio == otraFecha._anio){
            if(_mes < otraFecha._mes){
                return false;
            }
            else{
                if(_mes == otraFecha._mes){
                    if(_dia < otraFecha._dia)
                        return false;
                    if(_dia == otraFecha._dia)
                        return false;
                }
            }
        }
    }
    return true;
}
/**
 * Comparamos si una fecha es igual a otra dada
 * @param otraFecha
 * @return 
 */
bool Fecha::operator ==(const Fecha& otraFecha){
    
    return _anio == otraFecha._anio && _mes==otraFecha._mes && _dia==otraFecha._dia;
}
/**
 * Comparamos si una fecha es distinta a otra dada
 * @param otraFecha
 * @return 
 */
bool Fecha::operator !=(const Fecha& otraFecha){
    
    return _anio != otraFecha._anio || _mes!=otraFecha._mes || _dia!=otraFecha._dia;
}
/**
 * Comparar si una fecha es menor o igual a otra dada
 * @param otraFecha
 * @return 
 */
bool Fecha::operator <= (const Fecha& otraFecha){
 
    if(_anio > otraFecha._anio)
        return false;
    else{
        if(_mes > otraFecha._mes)
                return false;
        else{
            if(_dia > otraFecha._dia)
                        return false;    
            }
    }
    
    return true;
}

/**
 * Comparar si una fecha es mayor o igual a otra dada
 * @param otraFecha
 * @return 
 */
bool Fecha::operator >= (const Fecha& otraFecha){
 
    if(_anio < otraFecha._anio)
        return false;
    else{
        if(_mes < otraFecha._mes)
                return false;
        else{
            if(_dia < otraFecha._dia)
                        return false;    
            }
    }
    
    return true;
}


Fecha Fecha::operator=(const Fecha& otraFecha) {
    if(this!=&otraFecha){
        this->_dia = otraFecha._dia;
        this->_mes = otraFecha._mes;
        this->_anio = otraFecha._anio;
    }
    return *this;
}

string Fecha::toCSV(){
    
    stringstream ss;
    string result;
    ss << _anio << "; "<<_mes<<"; "<<_dia;
    
    result = ss.str();
    
    return result;
}

