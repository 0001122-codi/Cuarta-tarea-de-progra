#include <iostream>

using namespace std;

int main()
{
    float numero;

    cout <<"Por favor, ingrese un numero: "<< endl;
    cin >>numero;

    if (numero == 0)
    {
        cout <<"Este numero es cero"<< endl;
    }
    else if (numero < 0)
    {
        cout <<"Este numero es negativo"<< endl;
    }
    else if (numero > 0)
    {
        cout <<"Este numero es positivo"<< endl;
    }
}