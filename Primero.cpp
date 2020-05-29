#include <iostream>

using namespace std;
 int main()
 {
     int Dividendo;
     int Divisor;
      cout <<"Ingrese el dividendo: "<< endl;
      
      cin >>Dividendo;
      
      cout<<"Ingrese el divisor: "<< endl;
      cin >>Divisor;
      while (Divisor<=0)
      {
        cout <<"No se puede dividir entre 0, por favor ingrese otro numero"<< endl;
        cin >>Divisor;
      }
      

      if(Dividendo % Divisor == 0)
      {
          cout<<"Estos dos numeros si son divisibles"<< endl;
      } 
      else
      {
          cout<<"Estos dos numeros no son divisibles"<< endl;
      }
      system("Pause");
      return 0;
 }

    
    
        
    

