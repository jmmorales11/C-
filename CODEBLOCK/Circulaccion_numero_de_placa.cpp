#include<iostream>
#include<stdlib.h>
#include<stdio.h>
#include<conio.h>
#include<math.h>
using namespace std;
int main (){
    int numerodeplaca =0;
    system("cls");
    cout<<"Circulacion vehicular " <<endl;
    cout<<"Ejemplo si tu placa es PBC-4519 Escribe el 9 "<<endl;
    cout<<"Introduce el ultimo digito de la placa "<<endl;
    cin>>numerodeplaca;
    if (numerodeplaca == 1 ||numerodeplaca==0 ){
            cout<<"Con el ultimo digito de la placa no circula LUNES"<<endl;
    }
    else{

        if (numerodeplaca == 2 |numerodeplaca==3 ){
             cout<<"Con el ultimo digito de la placa no circula MARTES"<<endl;
        }
        else{
                if (numerodeplaca == 4 |numerodeplaca==5 ){
             cout<<"Con el ultimo digito de la placa no circula MIERCOLES"<<endl;
                }
        else {
                if (numerodeplaca == 6 |numerodeplaca==7 ){
             cout<<"Con el ultimo digito de la placa no circula JUEVES"<<endl;
        }
        else {
            if (numerodeplaca == 8|numerodeplaca==9 ){
             cout<<"Con el ultimo digito de la placa nocircula VIERNES"<<endl;
        }
        else{
              cout<<"Numero no valido"<<endl;
        }
        }

        }
        }
    }

getch();

return 0;
}
