#include<iostream>
#include<conio.h>
#include<string.h>//funcion tamaño de la cadena
#include<stdio.h>
#define TAM 100
using namespace std;

void ingrese_cadena( char cadena[], int tam);
void intercalar_cadenas(char cad1[], int tam1, char cad2[], int tam2, char res[], int restam);
int main(){
    int tam1,tam2,resultadotam,a;
    char cadena1[TAM], cadena2[TAM], cadena_resultado[resultadotam];

    cout <<"INGRESE LA CADENA 1 \n";
    ingrese_cadena( cadena1, TAM);
    cout <<cadena1<<endl;
    cout <<"INGRESE LA CADENA 2"<<endl;
    ingrese_cadena( cadena2, TAM);
    cout <<cadena2<<endl;

    tam1= strlen(cadena1);
    tam2= strlen(cadena2);
    resultadotam= tam1+tam2;
    cout <<strlen(cadena_resultado);
    if (tam1>tam2){
        cout<<" La cadena 1 Es mayor  tiene un tamaño de : ";
        cout<<tam1;
        intercalar_cadenas(cadena1, tam1, cadena2, tam2, cadena_resultado, resultadotam);
        cout <<"\n"<<cadena_resultado;

    }else{
            cout <<"La cadena 2 Es mayor  tiene un tamaño de :  ";
            cout <<tam2;
            intercalar_cadenas(cadena2, tam2, cadena1, tam1, cadena_resultado, resultadotam);
            cout <<"\n"<<cadena_resultado;

    }

    getch();
    return 0;

}

void ingrese_cadena( char cadena[], int tam){
    cin.getline(cadena,tam,'\n');

}

void intercalar_cadenas(char cad1[], int tam1, char cad2[], int tam2, char res[], int restam) {
    int j=0;
    for (int i =0;i<tam1;i+=2){
        res[i]=cad1[j];
        j++;
    }
    j=0;
    for (int i =1;i<tam1;i+=2){
        res[i]=cad2[j];
        j++;
    }


}
