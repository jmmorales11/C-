#include<iostream>//cin y cout endl
#include<conio.h>
#include<stdlib.h>
#include<stdio.h>
#include<math.h>
using namespace std;
int main (){
    int numero= 1, suma=0;
    while (numero!=0){
        cout <<"ingrese un numero entero"<<endl;
        cin>> numero;
        suma =suma+numero;
    }
    cout<<"la sumatoria es: "<<suma<<endl;

getch();
return 0;
}
