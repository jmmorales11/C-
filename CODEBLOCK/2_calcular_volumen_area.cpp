#include<iostream>//cin y cout endl
#include<conio.h>
#include<stdlib.h>
#include<stdio.h>
#include<math.h>
using namespace std;
double calcular_cilindro(int tipo,float radio,float altura);
int main (){
    int opcion;
    float radio, altura;
    do{
            cout <<"INGRESE LA OPCION A CALCULAR  "<<endl;
            cout <<"1 VOLUMEN  "<<endl;
            cout <<"2 AREA  "<<endl;
            cin>>opcion ;
    }while ( opcion < 1 || opcion > 2);
    cout <<"Ingrese el radio del cilindro "<<endl;
    cin>> radio;
    cout <<"Ingrese la altura del cilindro  "<<endl;
    cin>> altura;
    cout <<"El valor es:"<< calcular_cilindro(opcion,radio,altura );

getch();
return 0;
}

double calcular_cilindro(int tipo,float radio,float altura){
double area, volumen;
switch(tipo){
    case 1:
        volumen = (((3.1416)*((radio)*(radio)))*( altura));
        return volumen;
        break;
    case 2:
        area = (2*(3.1416)*(radio)*(radio)) + (2 *(3.1416)*(radio)*(altura));
        return area;
        break;
}
}
