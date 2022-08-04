
#include <stdlib.h>
#include <conio.h>
#include <stdio.h>
#include <time.h>
void menu(int [],int);
void generarElementos(int [],int);
void imprimirElementos(int [],int);
int vaciarLista(int [],int);
int agregar(int [],int);
int unirElementos(int [],int,int[],int);
int numeroElementos(int [],int,int);
int IndiceElementos(int [],int,int);
void agregarElemento(int [], int, int );
int EliminaElementosUltimoPop(int [],int);
int removerElemento(int [],int,int);
void revesElemento(int [],int);
void ordenarElementos(int [],int);

void generarElementos(int vec[],int tam){
	srand(time(NULL));
	for(int i=0;i<5;i++){
		vec[i]=rand()%11;
	}
}
void imprimirElementos(int vec[],int tam){
	for(int i=0;i<tam;i++){
		printf("%d -> ",vec[i]);
	}
}
int vaciarLista(int vec[],int tam){
	for(int i=0;i<tam;i++){
		vec[i]=0;
	}
	tam=0;
	return 0;
}
int agregar(int vector[], int tam){
	printf("\nIngrese el elemento en la pocision %d: ",tam+1);
	scanf("%d",&vector[tam++]);
	return tam;
}
int unirElementos(int vector[],int tam,int vector1[],int tam1){
	int j=0,i;
	for(i=tam;i<(tam+tam1);i++){
		vector[i]=vector1[j++];
	}
	return i;
}
int numeroElementos(int vector[],int tam,int elemento){
	int sum=0;
	for(int i=0;i<tam;i++){
		if(vector[i]==elemento){
			sum++;
		}
	}
	return sum;
}
int indiceElementos(int vector[],int tam,int elemento){
	int index=0,i;
	for(i=0;i<tam;i++){
		if(vector[i]==elemento){
			index=i+1;
			i=tam+1;
		}
	}
	if(i==0){
		index=index-1;
	}
	return index;
}
void agregarElemento(int vector[], int pos){
	scanf("%d",&vector[pos]);
}
int EliminaElementosUltimoPop(int vec[],int tam){
	tam=tam-1;
	for(int i=0;i<tam;i++){
		printf("%d -> ",vec[i]);
	}
	return tam;
}
int removerElemento(int vec[],int tam, int elemento){
	int vecAux[20],i,k=0,sw=0,aux;
	for(int i=0;i<tam;i++)
	vecAux[i]=0;
	for(int i=0;i<tam;i++){
		if(vec[i]==elemento && sw==0){
			i++;
			aux=vec[i];
			vecAux[k++]=aux;
			sw=1;
		}else{
			aux=vec[i];
			vecAux[k++]=aux;
		}
	}
	for(int i=0;i<k;i++){
		vec[i]=vecAux[i];
	}
	return k;
}
void revesElemento(int vec[],int tam){
	int vecAux[100], k=0;
	for(int i=(tam-1);i>=0;i--){
		vecAux[k++]=vec[i];
	}
	for(int i=0;i<k;i++){
		vec[i]=vecAux[i];
	}
}
void ordenarElementos(int vec[],int tam){
	int i,j,aux;
	for(i=0;i<tam;i++){
		for(j=0;j<tam;j++){
			if(vec[i]<vec[j]){
				aux=vec[i];
				vec[i]=vec[j];
				vec[j]=aux;
			}
		}
	}
}
void menu(int vector[], int tam){
	int op,vector1[100], tam1, elemento,ner,pos;
	do{
		system("cls");
		printf("\n\t1.- Append ");
		printf("\n\t2.- clear ");
		printf("\n\t3.- Extend ");
		printf("\n\t4.- Count ");
		printf("\n\t5.- Index ");
		printf("\n\t6.- Insert ");
		printf("\n\t7.- Pop ");
		printf("\n\t8.- Remove ");
		printf("\n\t9.- Reverse ");
		printf("\n\t10.- Sort ");
		printf("\n\t11.- Salir ");
		printf("\n\tIngrese la opcion a procesar ");
		scanf("%d",&op);
		switch (op){
			case 1:
				imprimirElementos(vector,tam);
				tam=agregar(vector,tam);
				imprimirElementos(vector,tam);
				printf("\ntamanio %d \n",tam);
				system("pause");
				break;
			case 2:
				tam=vaciarLista(vector,tam);
				tam=0;
				//imprimirElementos(vector,tam);
				printf("\nVector sin elementos \n");
				system("pause");
				break;
			case 3:
				printf("\nIngrese el tamanio del segundo vector ");
				scanf("%d",&tam1);
				generarElementos(vector1,tam1);
				tam=unirElementos(vector,tam,vector1,tam1);
				imprimirElementos(vector,tam);
				system("pause");
				break;
			case 4:
				if(tam!=0){
					imprimirElementos(vector,tam);
					printf("\nIngrese el elemento a contar ");
					scanf("%d",&elemento);
					ner=numeroElementos(vector,tam,elemento);
					printf("\nNumero de elementos repetidos %d = \n",ner);
					system("pause");
				}else{
					printf("\nNo existe elementos\n ");
					system("pause");
				}

				break;
			case 5:
				if(tam>=0){
					imprimirElementos(vector,tam);
					printf("\nIngrese el elemento a buscar ");
					scanf("%d",&elemento);
					ner=indiceElementos(vector,tam,elemento);
					if(ner>=0){
						printf("\nElementos se ubica en la posicion %d \n",ner);
						system("pause");
					}else{
						printf("\nNo existe elementos en el arreglo\n ");
						system("pause");
					}

				}else{
					printf("\nNo existe elemento encontrado\n ");
					system("pause");
				}
				break;
			case 6:
				//imprimirElementos(vector,tam);
				do{
					imprimirElementos(vector,tam);
					printf("\nIngrese el elemento en la posicion a insertar ");
					scanf("%d",&pos);
					//pos=pos-1;
					if(pos<=tam){
						printf("\nIngrese el elemento a insertar");
						scanf("%d",&vector[pos]);
						tam++;
						imprimirElementos(vector,tam);
						system("pause");
					}else{
						printf("\nNo existe la posicion en el arreglo\n ");
						system("pause");
						system("cls");
					}

				}while(pos>tam);
				break;
			case 7:
				if(tam!=0){
					imprimirElementos(vector,tam);
					printf("\nElementos ultimo borrado \n");
					tam=EliminaElementosUltimoPop(vector,tam);
					//imprimirElementos(vector,tam);
					system("pause");
				}else{
					printf("\nNo existe elementos\n ");
					system("pause");
				}
				break;
			case 8:
				if(tam!=0){
					imprimirElementos(vector,tam);
					printf("\nElemento a borraro \n");
					scanf("%d",&elemento);
					tam=removerElemento(vector,tam,elemento);
					imprimirElementos(vector,tam);
					system("pause");
				}else{
					printf("\nNo existe elementos\n ");
					system("pause");
				}
				break;
			case 9:
				if(tam!=0){
					imprimirElementos(vector,tam);
					revesElemento(vector,tam);
					printf("\n");
					imprimirElementos(vector,tam);
					system("pause");
				}
				else{
					printf("\nNo existe elementos\n ");
					system("pause");
				}
				break;
			case 10:
				if(tam!=0){
					imprimirElementos(vector,tam);
					ordenarElementos(vector,tam);
					printf("\nArreglo ordenado\n");
					imprimirElementos(vector,tam);
					system("pause");
				}else{
					printf("\nNo existe elementos\n ");
					system("pause");
				}
				break;
			case 11:
				printf("Gracias por su atencion");
			exit(0);
			default:
				printf("Opcion Incorrecta ");
		}
		}while(op!=12);

}


int main(int argc, char** argv) {
	int vector[100],tam=5;
	generarElementos(vector,tam);
	//imprimirElementos(vector,tam);
	menu(vector,tam);

	return 0;
}
