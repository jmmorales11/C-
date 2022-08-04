#include<iostream>
#include<stdlib.h>
#include<stdio.h>
#include<conio.h>
#include<math.h>
using namespace std;
int main (){
    int numero =0;
    system("cls");
    cout<<"Ingrese un numero entero: ";
    cin>>numero;
    if (numero >0){

        cout<<numero<<" Es positivo"<<endl;
    }
    else{
        cout<<numero<<"Es negativo"<<endl;
    }

getch();
return 0;
}
