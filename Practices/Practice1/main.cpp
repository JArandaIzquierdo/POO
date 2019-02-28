/* 
 * File:   main.cpp
 * Author: javierarandaizquierdo
 *
 */

#include <cstdlib>
#include <iostream>
#include "vehicle.h"

using namespace std;
using namespace Vehicle;

/*
 * 
 */
int main(int argc, char** argv) {


    int size;
    int posMaxPrice;
    int posSearchPlate;
    
    cout<<"Introduce the number of vehicles that you are going to add";
    cin>>size;
    
    vehicle *vec = new vehicle [size];
    
    int numberOfVehicles = fillVector(vec,size);
    
    showOnScreen(vec,numberOfVehicles);
    
    posMaxPrice = maxPrice(vec, numberOfVehicles);
    
    posSearchPlate = searchByPlate("333444", vec, numberOfVehicles);
    
       
    delete [] vec;
    
    return 0;
}

