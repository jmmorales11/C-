#include<iostream>//cin y cout endl
#include<conio.h>
#include<stdlib.h>
#include<stdio.h>
#include<math.h>
using namespace std;
int main (){
    int numero= 0, suma=0 ,cant=5, cont =1;
    while (cont<=cant){
        cout <<"ingrese un numero entero"<<endl;
        cin>> numero;
        suma =suma+numero; //o suma+ = numero
        cont++; // o tambien cont = cont + 1
    }
    cout<<"la sumatoria es: "<<suma<<endl;

getch();
return 0;
}
