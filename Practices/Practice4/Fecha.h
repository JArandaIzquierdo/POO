/* 
 * File:   Fecha.h
 * Author: javierarandaizquierdo
 *
 */

#ifndef FECHA_H
#define FECHA_H

using namespace std;

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
    
    //Operators
    bool operator<(const Fecha& otraFecha);
    bool operator>(const Fecha& otraFecha);
    bool operator==(const Fecha& otraFecha);
    bool operator!=(const Fecha& otraFecha);
    bool operator<=(const Fecha& otraFecha);
    bool operator>=(const Fecha& otraFecha);
    bool operator=(const Fecha& otraFecha);
    
    //Methods 
    string toCSV();
    
private:
    int _dia;
    int _mes;
    int _anio;
};

#endif /* FECHA_H */

