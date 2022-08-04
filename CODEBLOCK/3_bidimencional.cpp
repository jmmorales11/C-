#include<iostream>
#include<conio.h>
#include<stdlib.h>
#include<time.h>
using namespace std;
int generar_aleatorio(int linf,int lsup);
void llenar_matriz(int arreglo[][2],int fil,int vinf,int vsup);
void mostrar_matriz(int arreglo[][2],int fil);

int main(){
system("cls");
    srand(time(NULL));
    int fil=5;
    int numeros[fil][2];
    llenar_matriz(numeros,fil,0,20);
    mostrar_matriz(numeros,fil);



 getch();
 return 0;
}

int generar_aleatorio(int linf,int lsup){
    int numero=0;
    numero = linf+rand() % (lsup+1 - linf);
    return numero;
}

void llenar_matriz(int arreglo[][2],int fil,int vinf,int vsup){
    for (int i=0;i<fil;i++){
        for(int j=0;j<2;j++){
                arreglo[i] [j]=generar_aleatorio(vinf,vsup);
        }
    }
}

void mostrar_matriz(int arreglo[][2],int fil){
    for(int i=0;i<fil;i++){
        for(int j=0;j<2;j++){
            cout<<arreglo[i][j]<<"\t";
        }
        cout<<endl;
    }
}
