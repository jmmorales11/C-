#include<iostream>//cin y cout endl
#include<conio.h>
#include<stdlib.h>
#include<stdio.h>
#include<math.h>
using namespace std;
int main (){
    int numero= 0, suma=0;
    while (true){
        cout <<"Ingrese un numero entero"<<endl;
        cin>> numero;
        suma =suma+numero;
         if(numero ==0){
            break;}
    }
    cout<<"la sumatoria es: "<<suma<<endl;

getch();
return 0;
}
