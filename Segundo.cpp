#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main ()
{
    int n;
    cout <<"Por favor, ingrese un numero: "<< endl;
    cin >> n;
    
    if (n % 2 == 0)
    {
        cout <<"El numero es par"<< endl;
    }
    else 
    {
         cout <<"El numero no es par"<< endl;
    
    }
    
    system("PAUSE");
  return 0;
}