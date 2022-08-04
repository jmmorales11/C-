#include<iostream>//cin y cout endl
#include<conio.h>
#include<stdlib.h>
#include<stdio.h>
#include<math.h>
using namespace std;
int main (){
    int i , clave=0;
    cout <<"Ingrese -1 para terminar"<<endl;
    for(i=0;i<5;i++){
        if (clave== -1)//variable centinela dar un valor cualquiera y esa sera una  orden para terminar el proceso del bluque
            {
           cout<<i<<endl;
            continue; //regresa al for y no pasa a lo siguiente
        }

        cout<<"INGRESE UN VALOR"<<endl;
        cin>> clave;
    }
getch();
return 0;
}
