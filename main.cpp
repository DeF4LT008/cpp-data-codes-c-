#include <iostream>
#include <stdio.h>
#include <vector>

int main()
{
//Ejercicio 7 salir hasta un negativo y una media
std::vector<double> aux;
double x,n5;
double suma=0;

////////////////
do
{ //SALE HASATA QUE ES NEGATIVO.
std::cout<<"Ingreso del número: "<<std::endl;   
std::cin>>n5;  
aux.push_back(n5);

}while(n5>=0);
aux.pop_back();

std::cout <<"\ntamaño: "<< aux.size() <<std::endl; 
for(double x :aux)
{
    suma +=x;
}
//////////////

double media=suma/aux.size();
std::cout <<"\nValor de media: "<< media <<std::endl;  

  return 0;
}