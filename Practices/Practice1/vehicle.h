/* 
 * File: vehicle.h
 * Author: Javier Aranda Izquierdo
 */

#ifndef VEHICLE_H
#define VEHICLE_H
using namespace std;


/**
 */

namespace Vehicle{
    
    
    struct vehicle
    {
        string brand;///< vehicle brand
        string model;///< vehicle model
        string plate;///< vehicle plate
        int manufactureYear;///< vehicle manufacture year
        float price;///< vehicle price
        float maximumWeight;

    };
    
   
    int fillVector( vehicle v[], int lenV );
    
    void showOnScreen( vehicle v[], int lenV );
    
    int maxPrice( vehicle v[], int lenV );
    
    int searchByPlate( string plateNumber,vehicle v[], int lenV );
    
    
    
    void showOnScreen( vehicle &vehiculo );
    
    void showOnScreen( vehicle *vehiculo );
    
    void kbRead( vehicle &vehiculo );
    
    void kdRead( vehicle *vehiculo );
    
    void showNewerThan(vehicle v[],int tam,int year);

};
#endif /* VEHICLE_H */

