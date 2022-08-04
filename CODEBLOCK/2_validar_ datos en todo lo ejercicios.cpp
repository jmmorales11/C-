#include<iostream>//cin y cout endl
#include<conio.h>
#include<stdlib.h>
#include<stdio.h>
#include<math.h>
using namespace std;
int main (){
    int cant_numero=0, numero= 0, suma=0, cont=0;
    do{
        cout <<"Cantidad numeros a ingresar"<<endl;
        cin>> cant_numero;
        if (cant_numero <= 0){
            cout<<"numero invalido"<<endl;
        }

    }while (cant_numero<=0);
    for(;;){

        cout<<"igrese un numero"<<endl;
        cin>>numero;
        suma+=numero;
        cont++;
        if (cont==cant_numero)
        {
            break;
        }
    }
  cout<<"la suma de los valores igresados es: "<< suma<<endl;
getch();
return 0;
}
