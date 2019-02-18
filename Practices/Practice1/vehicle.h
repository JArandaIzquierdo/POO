/* 
 * File:   vehicle.h
 * Author: Javier Aranda Izquierdo
 */

#ifndef VEHICLE_H
#define VEHICLE_H
using namespace std;


/**
 */

namespace Vehicle{
    
    struct Vehicle
    {
        string brand;///> vehicle brand
        string model;///> vehicle model
        string plate;///> vehicle plate
        int manufactureYear;///> vehicle manufacture year
        float price;///> vehicle price

    };
    
    /**
     * 
     * @param v: array of vehicles
     * @param lenV: length of the array v
     * @return: number of vehicles read
     */
    int fillVector( Vehicle v[], int lenV );
    /**
     * Show on the screen the list of vehicle in groups of 5
     * @param v: array of vehicles
     * @param lenV: length of the array v
     */
    void showOnScreen( Vehicle v[], int lenV );

    /**
     * 
     * @param v: array of vehicles
     * @param lenV: length of the array v
     * @return: the position of the most expensive vehicle
     */
    int maxPrice( Vehicle v[], int lenV );
    
    /**
     * 
     * @param plateNumber: plate of a vehicle
     * @param v: array of vehicles
     * @param lenV: length of the array v
     * @return: the position of the vehicle with the given plate number
     */
    int searchByPlate( string plateNumber,Vehicle v[], int lenV );

}
#endif /* VEHICLE_H */

