#include <cstdlib>
#include <iostream>
#include <math.h>
using namespace std;

double mySqrt (double parameter){

  if (parameter < 0){
      throw -1;
    }

  return (sqrt(parameter));
}

int main (int argc, char** argv){
  double aux = 0;
  double result = 0;
  cout << "Radicand: ";
  cin >> aux;

  try{
    result = mySqrt ( aux );
    cout << "The result is: " << result << endl;
  }

  catch (int e){
    cout << "Can not be computed" << endl;
  }
}
