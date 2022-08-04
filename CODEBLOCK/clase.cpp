#include <iostream>
#include <time.h>
#include <stdlib.h>
void encerar(int[]);
void imprimir(int[]);
void ingresar(int[]);

void ingresar(int vect[]){
    int i;
    srand(time(NULL));
    for (i=0;i<20;i++){
        vect[i]=rand()%101;
    }

}
void imprimir(int vect[]){
   // short i=0
   printf("[");
    for(int i=0;i<20;i++){
        printf("%d,",vect[i]);
    }printf("]");

}

void encerar(int vect[]){
   // short i=0
    for(int i=0;i<20;i++){
        vect[i]=0;
    }

}

int main (int argc, char** argv){
    int vector[20];
    encerar(vector);
    ingresar (vector);
    imprimir(vector );
    return 0;

}
