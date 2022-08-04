#include<iostream>//cin y cout endl
#include<conio.h>
#include<stdlib.h>
#include<stdio.h>
#include<math.h>
#include<ctime>
#include<time.h>
#include<string.h>
#define TAM 100

using namespace std;
void ingresar_datos(char cadena[],int tam);
void morse(char cadena[],char numero[], char morse[][6], int tam);
void mostrar_matriz(char cadena[][6]);
int main (){
    char numero[10]= {'0','1','2','3','4','5','6','7','8','9'};
    char morse_cadena[10][6]={{"-----"},{".----"},{"..---"},{"...--"},{"....-"},{"....."},{"-...."},{"--..."},{"---.."},{"----."}};
    int j,i,continuar;
    char cadena[TAM];

    cout<<"\n Ingrese los numeros:  "<<endl;
    ingresar_datos(cadena,TAM);
    cout<<cadena;
    morse(cadena,numero, morse_cadena,TAM);

      //cout <<"\n",morse_cadena;
/*
      cout <<"Desea continuar si=1 o no=0 \n\n";
      cin >>continuar;
      if (continuar= 1){
        return main();
      }else{
          getch();
          return 0;
      }

  */
        getch();
    return 0;

}
void ingresar_datos(char cadena[],int tam){
    cin.getline(cadena,tam);
}
void morse(char cadena[],char numero[], char morse[][6], int tam){

    for(int i=0;i<cadena[tam];i++){
            for(int j=0; j<10;j++){
                if (cadena[i]==numero[j]){
                    cin>> morse[i][j];

                }
            }
    }
}
void mostrar_matriz(char cadena[][6]){
    for(int i=0;i<10;i++){
        for(int j=0;j<2;j++){
            cout<<cadena[i][j]<<"\t";
        }
        cout<<endl;
    }
}

