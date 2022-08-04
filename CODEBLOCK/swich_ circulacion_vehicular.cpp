#include<iostream>
#include<stdlib.h>
#include<stdio.h>
#include<conio.h>
#include<math.h>
using namespace std;
int main (){
    int digito;
    cout<<"Ingrese el digito "<<endl;
    cin>>digito;
    switch(digito){
        case 0:
        case 1:
            cout << "lunes" << endl;
            break;
        case 2:
        case 3:
            cout<<"Martes"<<endl;
            break;
        case 4:
        case 5:
            cout<<"Miercoles"<<endl;
            break;
        case 6:
        case 7:
            cout<<"jueves"<<endl;
            break;
        case 8:
        case 9:
            cout<<"viernes"<<endl;
            break;
        default:
            cout<<"error" << endl;

    }


    getch();

return 0;
}
