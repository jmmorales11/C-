//MORALES JEIMY, QUIMBULCO JUAN

#include<iostream>
#include<conio.h>
#include<string.h>
#define TAM 100

void ingresar_caracteres ( char cadena[], int tam  );
void intercalar_cadenas (char cad1[],int tam1,char cad2[],int tam2,char res[],int restam);
using namespace std;
int main(){
    char cadena1[TAM],cadena2[TAM],cadena_res[TAM*2];
    int tam1,tam2;
    cout<<"Ingrese la cadena 1\n";
    ingresar_caracteres(cadena1,TAM);
    cout<<cadena1<<endl;
    cout<<"Ingrese la cadena 2\n";
    ingresar_caracteres(cadena2,TAM);
    cout<<cadena2<<endl;
    tam1=strlen(cadena1);
    tam2=strlen(cadena2);

    if (tam1>tam2){
        cout<<"\nLA CADENA 1 ES MAYOR Y SU TAMAÑO ES :   "<<tam1<<" \n"<<endl;
        intercalar_cadenas(cadena1,tam1,cadena2,tam2,cadena_res,TAM*2);
    }else {
        cout<<"\nLA CADENA 2 ES MAYOR Y SU TAMAÑO ES :  "<<tam2<<"\n"<<endl;
        intercalar_cadenas(cadena2,tam2,cadena1,tam1,cadena_res,TAM*2);
    }
    cout<<cadena_res<<endl;
    getch();
    return 25;
}

void ingresar_caracteres ( char cadena[], int tam  ){
     cin.getline(cadena,tam,'\n');
}

void intercalar_cadenas (char cad1[],int tam1,char cad2[],int tam2,char res[],int restam){
    int j =0, i =0,tam3=tam1-tam2;
    char cad3[tam3];
    for (int i =0;i<tam3;i++){
        cad3[i]=' ';
    }
    strcat(cad2,cad3); // junta cadenas en la primera


/*
   for ( int i=0; i < tam1*2;i+=2 ){
        res[i]=cad1[j];
        j++;
    }
    j=0;
    for ( int i=1; i < tam2*2;i+=2 ){

        res[i]=cad2[j];
        j++;
    }

    */
    while (cad1[j] != '\0'){
        res[i]=cad1[j];
        j++;
        i+=2;
    }


    i=1;
    j=0;
    while (cad2[j] != '\0'){

        res[i]=cad2[j];
        j++;
        i+=2;
    }
}
