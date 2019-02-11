#include <cstdlib>
#include <iostream>
#include <string>
using namespace std;



/**
 * Define a vehicle
 */
struct vehicle
{
    string brand;///> vehicle brand
    string model;///> vehicle model
    string plate;///> vehicle plate
    int manufactureYear;///> vehicle manufacture year
    float price;///> vehicle price

};
/**
 * Initialize all attributes of a vehicle
 * @param vehiculo is the vehicle that we want to inicializate passed by reference
 */
void kbRead(vehicle &vehiculo)
{
    do{
        cout<<"Introduce the brand of the vehicle: ";
        cin>>vehiculo.brand;
    }
    while(vehiculo.brand.length()<3 || vehiculo.brand.length()>20);
    
    do{
        cout<<"Introduce the model of the vehicle: ";
        cin>>vehiculo.model;
    }
    while( vehiculo.model.length() < 1 || vehiculo.model.length() > 30 );
    
    do{
        cout<<"Introduce the plate of the vehicle: ";
        cin>>vehiculo.plate;
    }
    while( vehiculo.plate.length() != 6 );
    
    cout<<"Introduce the manufacture year of the vehicle: ";
    cin>>vehiculo.manufactureYear;
    
    do{
        cout<<"Introduce the price of the vehicle: ";
        cin>>vehiculo.price;
    }
    while( vehiculo.price < 0 );
    
};

/***
 * Inicializate the values of a vehicle uisng pointers
 * @param vehiculo is the vehicle that we want to inicializate uisng pointers
 */
void kdRead( vehicle *vehiculo )
{
    do{
        cout<<"Introduce the brand of the vehicle: ";
        cin>>vehiculo->brand;
    }
    while(vehiculo->brand.length() < 3 || vehiculo->brand.length()>20);
    
    do{
        cout<<"Introduce the model of the vehicle: ";
        cin>>vehiculo->model;
    }
    while( vehiculo->model.length() < 1 || vehiculo->model.length() > 30 );
    
    do{
        cout<<"Introduce the plate of the vehicle: ";
        cin>>vehiculo->plate;
    }
    while( vehiculo->plate.length() != 6 );
    
    cout<<"Introduce the manufacture year of the vehicle: ";
    cin>>vehiculo->manufactureYear;
    
    do{
        cout<<"Introduce the price of the vehicle: ";
        cin>>vehiculo->price;
    }
    while( vehiculo->price < 0 );
};

/***
 * Show the values of the vehicle passed by reference
 */
void showOnScreen(vehicle &vehiculo)
{
    cout<<"The brand of the car is: "<<vehiculo.brand<<endl;
    cout<<"The brand of the model is: "<<vehiculo.model<<endl;
    cout<<"The plate of the car is: "<<vehiculo.plate<<endl;
    cout<<"The manufacture year of the car is: "<<vehiculo.manufactureYear<<endl;
    cout<<"The price of the car is: "<<vehiculo.price<<endl;

};

/***
 * Show the values of the vehicle unsign pointers
 */
void showOnScreen(vehicle *vehiculo)
{
    cout<<"The brand of the car is: "<<vehiculo->brand<<endl;
    cout<<"The brand of the model is: "<<vehiculo->model<<endl;
    cout<<"The plate of the car is: "<<vehiculo->plate<<endl;
    cout<<"The manufacture year of the car is: "<<vehiculo->manufactureYear<<endl;
    cout<<"The price of the car is: "<<vehiculo->price<<endl;

};
/**
 * Show the vihicles inside the vector of vehicles v that their year of manufacture
 * is higher than the int variable year
 * 
 * @param v: is a vector of vehicles
 * @param tam: el the length of the vector v
 * @param year: an int numbre that represent a year
 */
void showNewerThan(vehicle v[],int tam,int year)
{
    for(int i=0;i<tam;i++)
    {
        if(v[i].manufactureYear > year){
            showOnScreen(v[i]);
        }
    }
};

/**
 * 
 * @param argc
 * @param argv
 * @return 
 */
int main(int argc, char** argv) {

    const int TAM=100;///>maximum size of the vector
    int n;///>number of vehicles in the vector
    
    
    do{
        cout<<"Introduce a number of vehicles: ";
        cin>>n;
    }
    while( n < 0 || n > TAM );
    
    vehicle v[TAM];
    
    //We fill up the vector v 
    for(int i=0; i<n;i++)
    {
        kbRead(v[i]);
    };
    
    //Show the content in vector v
    for(int i=0;i<n;i++)
    {
        showOnScreen(v[i]);
    };
    
    int max = v[0].price;
    int pos=0;
    
    for(int i=0;i<n;i++)
    {
        if(v[i].price > max){
            max=v[i].price;
            pos=i;
        }
    };
    cout<<"----------------------------------------------------"<<endl;
    cout<<"The car with the highest price is: "<<endl;
    showOnScreen(v[pos]);
    
    cout<<"----------------------------------------------------"<<endl;
    cout<<"Cars manufacturaded after 2011 are: "<<endl;
    showNewerThan(v,n,2011);
    
    return 0;
}

