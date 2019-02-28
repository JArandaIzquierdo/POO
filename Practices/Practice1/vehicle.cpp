#include <iostream>
#include <string>
#include "vehicle.h"
using Vehicle::vehicle;
using namespace std;



void kbRead(vehicle &vehiculo)
{
    cout<<"Introduce the brand of the vehicle: ";
    cin>>vehiculo.brand;
    
    if(vehiculo.brand.length()<3 || vehiculo.brand.length()>20)
    {
        throw string ("[vehicle brand]: The brand have less tha 3 caracters or more than 20 caracters");
    };
    
    cout<<"Introduce the model of the vehicle: ";
    cin>>vehiculo.model;
    
    if( vehiculo.model.length() < 1 || vehiculo.model.length() > 30 )
    {
        throw string ("[vehicle model]: The model have less tha 1 caracters or more than 30 caracters");
    };
    
    
    cout<<"Introduce the plate of the vehicle: ";
    cin>>vehiculo.plate;
    
    if( vehiculo.plate.length() != 6 )
    {   
        throw string ( "[vehicle plate]: The plate doesn't have 6 caracter" );
    };
    
    cout<<"Introduce the manufacture year of the vehicle: ";
    cin>>vehiculo.manufactureYear;
    
    cout<<"Introduce the price of the vehicle: ";
    cin>>vehiculo.price;
  
    if( vehiculo.price < 0 )
    {
        throw string ( "[vehicle price]: The price of the vehicle is less than 0" );
    };
    
    cout<<"Introduce the weight of the vehicle";
    cin>>vehiculo.maximumWeight;
    
    if( vehiculo.maximumWeight < 0)
    {
        throw string ("[Vehicle weight]: the weight of the vehicle if less than 0");
    };
};

void kdRead( vehicle *vehiculo )
{
    cout<<"Introduce the brand of the vehicle: ";
    cin>>vehiculo->brand;
    
    if(vehiculo->brand.length()<3 || vehiculo->brand.length()>20)
    {
        throw string ("[vehicle brand]: The brand have less tha 3 caracters or more than 20 caracters");
    };
    
    cout<<"Introduce the model of the vehicle: ";
    cin>>vehiculo->model;
    
    if( vehiculo->model.length() < 1 || vehiculo->model.length() > 30 )
    {
        throw string ("[vehicle model]: The model have less tha 1 caracters or more than 30 caracters");
    };
    
    
    cout<<"Introduce the plate of the vehicle: ";
    cin>>vehiculo->plate;
    
     if( vehiculo->plate.length() != 6 )
    {   
        throw string ( "[vehicle plate]: The plate doesn't have 6 caracter" );
    };
        
    cout<<"Introduce the manufacture year of the vehicle: ";
    cin>>vehiculo->manufactureYear;
    
    cout<<"Introduce the price of the vehicle: ";
    cin>>vehiculo->price;
  
    if( vehiculo->price < 0 )
    {
        throw string ( "[vehicle price]: The price of the vehicle is less than 0" );
    };
    
    cout<<"Introduce the weight of the vehicle";
    cin>>vehiculo->maximumWeight;
    
    if( vehiculo->maximumWeight < 0)
    {
        throw string ("[Vehicle weight]: the weight of the vehicle if less than 0");
    };
};

void showOnScreen(vehicle &vehiculo)
{
    cout<<"The brand of the car is: "<<vehiculo.brand<<endl;
    cout<<"The brand of the model is: "<<vehiculo.model<<endl;
    cout<<"The plate of the car is: "<<vehiculo.plate<<endl;
    cout<<"The manufacture year of the car is: "<<vehiculo.manufactureYear<<endl;
    cout<<"The price of the car is: "<<vehiculo.price<<endl;

};

void showOnScreen(vehicle *vehiculo)
{
    cout<<"The brand of the car is: "<<vehiculo->brand<<endl;
    cout<<"The brand of the model is: "<<vehiculo->model<<endl;
    cout<<"The plate of the car is: "<<vehiculo->plate<<endl;
    cout<<"The manufacture year of the car is: "<<vehiculo->manufactureYear<<endl;
    cout<<"The price of the car is: "<<vehiculo->price<<endl;

};

        
int fillVector( vehicle v[], int lenV )
{
    char control;
    int counter=0;
    
    do
    {
        do{
            cout<<"Introduce the brand of the vehicle: ";
            cin>>v[counter].brand;
        }
        while(v[counter].brand.length()<3 || v[counter].brand.length()>20);

        do{
            cout<<"Introduce the model of the vehicle: ";
            cin>>v[counter].model;
        }
        while( v[counter].model.length() < 1 || v[counter].model.length() > 30 );

        do{
            cout<<"Introduce the plate of the vehicle: ";
            cin>>v[counter].plate;
        }
        while( v[counter].plate.length() != 6 );

        cout<<"Introduce the manufacture year of the vehicle: ";
        cin>>v[counter].manufactureYear;

        do{
            cout<<"Introduce the price of the vehicle: ";
            cin>>v[counter].price;
        }
        while( v[counter].price < 0 );
        
        counter++;
        
        if(counter > lenV)
        {
            throw string ("Size of the vector is exceeded");
        };
        
        do
        {
            cout<<"Do you want to add another vehicle? Y for yes, N  for no";
            cin>>control;
        }
        while( control == 'N' || control == 'n' || control == 'Y' || control == 'y' );
    }
    while( control == 'Y' || control == 'y' );
    
    return counter;
};

void showOnScreen(vehicle v[], int lenV)
{
    char key;
    for( int i=0; i<lenV; i++ )
    {
        cout<<"The brand of the car is: "<<v[i].brand<<endl;
        cout<<"The brand of the model is: "<<v[i].model<<endl;
        cout<<"The plate of the car is: "<<v[i].plate<<endl;
        cout<<"The manufacture year of the car is: "<<v[i].manufactureYear<<endl;
        cout<<"The price of the car is: "<<v[i].price<<endl;
    
        if(i%5 == 0)
        {
             cout<<"Press a key to continue...";
             cin>>key;
        }
    }   
};

int maxPrice(vehicle v[], int lenV)
{
    float max=v[0].price;
    int position;
 
    for ( int i = 1; i<lenV; i++ )
    {
        if( v[i].price > max )
        {
        max = v[i].price;
        position = i; 
        }
    }
    
    return position;
};

int searchByPlate(string plateNumber, vehicle v[], int lenV)
{
    int position = -1;
    for(int i = 0; i < lenV; i++)
    {
        if( v[i].plate == plateNumber )
        {
            position = i;
        }
    }
    if(position == -1)
    {
        throw string ("The vehicle in not in the array of vehicles");
    }
    
    return position;

};