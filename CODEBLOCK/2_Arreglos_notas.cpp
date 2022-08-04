#include<iostream>//cin y cout endl
#include<conio.h>
#include<stdlib.h>
#include<stdio.h>
#include<math.h>

#define TAM 10 //definir constantes tercera manera

using namespace std;
int main (){
    // contastante int const MAX=100
    //float notas[]= {0,0,0,0,0};//inicializar
    float notas[TAM];
        for(int i=0;i<TAM;i++){
        notas[i]=0;
    }
    for (int i=0; i<TAM;i++){
        cout <<"Ingresar la nota"<<i+1<<endl;
        cin>> notas [i];

    }

    for(int i=0; i<TAM;i++){
        cout <<"NOTAS ["<<i<<"]"<<notas[i]<<endl;
    }

    system ("pause");
    getch();
    return 0;
return 0;
}

/*
//Segunda manera
int main (){
    //float notas[]= {0,0,0,0,0};//inicializar asume los valores dentro de las llaves
    float notas[5];
    for(int i=0;i<5;i++){
        notas[i]=0;
    }
    for(int i=0; i<5;i++){
        cout <<"NOTAS ["<<i<<"]"<<notas[i]<<endl;
    }

    system ("pause");
    getch();
    return 0;
return 0;
}*/
/*
//primer manera
int main (){
    float notas[5];
    for (int i=0; i<5;i++){
        cout <<"Ingresar la nota"<<i+1<<endl;
        cin>> notas [i];

    }
    for(int i=0; i<5;i++){
        cout <<"NOTAS ["<<i<<"]"<<notas[i]<<endl;
    }

    system ("pause");
    getch();
    return 0;
return 0;
} */

