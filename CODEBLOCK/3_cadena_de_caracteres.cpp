#include<iostream>
#include<conio.h>
#include<string.h>  //funcion tamaño de la cadena
#include<stdio.h>
using namespace std;

int main(){
    char cadenas[]="hola como estas";
    /*for (int i =0;i<strlen(cadenas);i++){// mostrar
        cout <<cadenas[i];
    }*/
    int i =0;
    do{
        cout <<cadenas[i];  //mostrar
        i++;
    } while (cadenas[i] !='\0');
    /*
    char palabra[20];
    char cadenas[]="Hola como estas"; //INICIALIZAR
    //char cadenas[]={'H','O','L','A','\0'};
    //char cadenas[]={104,111,108,97,0}; //codigo asqui
    //cout <<strlen(cadenas)<<endl;
    //cout<<cadenas<<endl;
    //cout <<cadenas[1]<<endl;
    cout <<"ingrese su nombre"<<endl,
    //cin>> palabra;
    //gets(palabra);
    //cin.getline(palabra,20,'\n'); //Ingresar cadenas con tamaño espesifico
    scanf("%s",palabra);
    cout <<"Su nombre es : "<<palabra<<endl;
    */
    getch();
    return 0;

}
