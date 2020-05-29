#include <iostream>
#include <string.h>
#include <stdio.h>
#include <windows.h>

using namespace std;

int main()
{
    char palabra[10];
    int z;

    cout <<"Escriba una palabra"<< endl;
    scanf("%[^\n]",&palabra);

    z = strlen(palabra);

    if (z < 10)
    {
        cout <<"Su palabra posee menos de 10 caracteres"<< endl;
        if (z % 2 == 0)
        {
            cout <<"La cantidad de caracteres que posee la palabra es par"<< endl;
        }
        else
        {
            cout <<"La cantidad de caracteres que posee su palabra es impar"<< endl;
        }
               
    }
     else if (z > 10)
    {
        cout <<"Su palabra posee mas de 10 caracteres"<< endl;
        if (z % 2 == 0)
        {
            cout <<"La cantidad de caracteres que posee la palabra es par"<< endl;
        }
        else
        {
            cout <<"La cantidad de caracteres que posee su palabra es impar"<< endl;
        }
    }
    else if (z = 10)
    {
        cout <<"Su palabra posee 10 caracteres"<< endl;
        if (z % 2 == 0)
        {
            cout <<"La cantidad de caracteres que posee la palabra es par"<< endl;
        }
        else
        {
            cout <<"La cantidad de caracteres que posee su palabra es impar"<< endl;
        } 
    }
  system("PAUSE");
  return 0;
   
}


