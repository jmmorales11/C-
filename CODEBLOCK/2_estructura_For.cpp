#include<iostream> //cin y cout
#include<conio.h>
#include<stdlib.h>
#include<stdio.h>
#include<math.h>
using namespace std;
int main (){
   int n_notas, i;
    float promedio=0, nota=0, acum_nota=0;
    cout<<"Cuantas notas desea ingresar?: "<< endl;
    cin>>n_notas;
    for(i=1;i<=n_notas;i++){
        cout<<"ingrese la nota: "<<i<<endl;
        cin >>nota;
        acum_nota=acum_nota+nota;
    }
    promedio = acum_nota/n_notas;
    cout<<"el promedio de las notas es: "<< promedio<< endl;

getch();
return 0;
}
