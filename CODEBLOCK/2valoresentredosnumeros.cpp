#include<iostream>//cin y cout endl
#include<conio.h>
#include<stdlib.h>
#include<stdio.h>
#include<math.h>
using namespace std;
void mostrar_numeros(int vmin, int vmax);
int main (){
    int vinicial, vfinal;
    cout <<" ingrese valor inicial"<<endl;
    cin>>vinicial ;
    cout <<" ingrese valor final"<<endl;
    cin>>vfinal ;
    mostrar_numeros(vinicial , vfinal);

getch();
return 0;
}

void mostrar_numeros(int vmin, int vmax){
    for (int i= vmin; i<=vmax; i++){
            cout <<i<<"\t";

    }
    cout << endl;
}

