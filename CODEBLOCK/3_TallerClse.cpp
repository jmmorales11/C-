#include<iostream>
#include<conio.h>
#include<string.h>
#define TAM 100

void ingresar_caracteres ( char cadena[], int tam  );
void intercalar_cadenas (char cad1[],int tam1,char cad2[],int tam2,char res[],int restam);
using namespace std;
int main(){
    int tam1,tam2,res_tam;
    char cadena1[TAM],cadena2[TAM],cadena_res[res_tam];

    cout<<"Ingrese la cadena 1\n";
    ingresar_caracteres(cadena1,TAM);
    cout<<cadena1<<endl;
    cout<<"Ingrese la cadena 2\n";
    ingresar_caracteres(cadena2,TAM);
    cout<<cadena2<<endl;
    tam1=strlen(cadena1);
    tam2=strlen(cadena2);
    res_tam= tam1+tam2;
    cout <<strlen(cadena_res);
    if (tam1>tam2){
        cout<<"La cadena mayor es cadena 1 : \n";
        intercalar_cadenas(cadena1,tam1,cadena2,tam2,cadena_res,TAM*2);
    }else {
        cout<<"La cadena mayor es cadena 2 : \n";
        intercalar_cadenas(cadena2,tam2,cadena1,tam1,cadena_res,res_tam);
    }
    cout<<cadena_res<<endl;
    getch();
    return 0;
}

void ingresar_caracteres ( char cadena[], int tam  ){
     cin.getline(cadena,tam,'\n');
}

void intercalar_cadenas (char cad1[],int tam1,char cad2[],int tam2,char res[],int restam){
    int j =0, i =0;
  /*  for ( int i=0; i < tam1*2;i+=2 ){
        res[i]=cad1[j];
        j++;
    }
    j=0;
    for ( int i=1; i < tam2*2;i+=2 ){
        res[i]=cad2[j];
        j++;
    }
*/
    while (cad1[i] != '\0'){

        res[i]=cad1[j];
        j++;
        i+=2;

    }
    i=1;
    j=0;
    while (cad2[i] != '\0'){

        res[i]=cad2[j];
        j++;
        i+=2;

    }
}
