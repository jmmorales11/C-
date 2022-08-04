/*HASTA EL MIERCOLES 12.00AM
ingreso de ecuaciones de tres ecuaciones

aplicacion  que use una matriz de 3x4 para resolver un sistema de ecuacioes de tres ecuacionees con tres incognitas
una aplicacion
metodo de Gauz para resolver las variablles
y realizar sustitucion regresiva
c++ phyton
utilizando funciones

*/
#include<iostream>//cin y cout endl
#include<conio.h>
#include<stdlib.h>
#include<stdio.h>
#include<math.h>
#include<ctime>
#include<time.h>
#include <stdlib.h>
//#define TAM 5
using namespace std;
int generar_aleatorio(int linf,int lsup);
void llenar_matriz(int arreglos[][4], int fil, int vinf,int vsup);
void mostrar_matriz(int arreglos[][4], int fil);

int main (){
    srand(time(NULL));
    int fila =3;
    int numeros[fila][4];
    llenar_matriz(numeros ,fila,0,20);
    mostrar_matriz(numeros,fila);
    system ("pause");
    getch();
return 25;
}

int generar_aleatorio(int linf,int lsup){
    int numero=0;
    numero = linf + rand() % (lsup+1 - linf);
    return numero;
}
void llenar_matriz(int arreglos[][4], int fil, int vinf,int vsup){
    for(int i=0;i<fil; i++){
            for(int j=0;j<4;j++){
                arreglos[i][j]=generar_aleatorio(vinf,vsup);
            }
    }
}

void mostrar_matriz(int arreglos[][4], int fil){
    for(int i=0;i<fil; i++){
            for(int j=0;j<4;j++){
                cout<<arreglos[i][j]<<"\t";
            }
            cout<<endl;
    }
}
