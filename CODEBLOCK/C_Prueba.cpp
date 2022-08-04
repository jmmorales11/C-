#include <iostream>
#include <stdlib.h>
#include <conio.h>
#include <time.h>
void llenar_letras(int[], int);
void mostrar_letras(int[], int);
void insertar_letras(int[], int);
void ordenar_letras(int[], int);
void llenar_letras(int cad[], int tam){
	int i=0, val;
	srand(time(NULL));
	do{
		val=rand()%91;
		if(val>64 && val <91){
			cad[i++]=val;
		}
	}while(i<tam);
}
void mostrar_letras(int cad[], int tam){
	int i;
	for(i=0;i<tam;i++){
		printf("\n%c",cad[i]);
	}
}
void insertar_letras(int cad[], int tam){
	int pos;
	char c;
	printf("Ingresar la posicion en la que se va a insertar");
	scanf("%d",&pos);
	if(pos<tam){
		printf("Ingresar el caracter ");
		fflush(stdin);
		scanf("%c",&cad[pos]);
	}
	else{
		printf("Fuera de rango ");
	}
}

void ordenar_letras(int cad[], int tam){
	int i,j, aux;
	for(i=0;i<tam;i++){
		for(j=0;j<tam;j++){
			if(cad[i]<cad[j]){
				aux=cad[i];
				cad[i]=cad[j];
				cad[j]=aux;
			}
		}
	}
}
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int tam,cad[100];
	printf("\n Ingrese el tamaño del arreglo ");
	scanf("%d",&tam);
	llenar_letras(cad,tam);
	mostrar_letras(cad,tam);
	insertar_letras(cad,tam);
	mostrar_letras(cad,tam);
	ordenar_letras(cad,tam);
	printf("\nvector ordenado\n");
	mostrar_letras(cad,tam);
	return 0;
}
