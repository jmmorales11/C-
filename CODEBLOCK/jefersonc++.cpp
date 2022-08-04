#include <iostream>
#include <stdlib.h>
#include <conio.h>
#include <stdio.h>
#include <string>
#include <time.h>

using namespace std;
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
		cout<<" -> "<<vec[i];
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
	cout<<"\nIngrese el elemento en la pocision %d: "<<tam+1;
	cin>>vector[tam++];
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
	cin>>vector[pos];
}
int EliminaElementosUltimoPop(int vec[],int tam){
	tam=tam-1;
	for(int i=0;i<tam;i++){
		cout<<"-> ",vec[i];
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
		cout<<"\n\t1.- Append "<<endl;
		cout<<"\n\t2.- clear "<<endl;
		cout<<"\n\t3.- Extend "<<endl;
		cout<<"\n\t4.- Count "<<endl;
		cout<<"\n\t5.- Index "<<endl;
		cout<<"\n\t6.- Insert "<<endl;
		cout<<"\n\t7.- Pop "<<endl;
		cout<<"\n\t8.- Remove "<<endl;
		cout<<"\n\t9.- Reverse "<<endl;
		cout<<"\n\t10.- Sort "<<endl;
		cout<<"\n\t11.- Salir "<<endl;
		cout<<"\n\tIngrese la opcion a procesar "<<endl;
		cin>>op;
		switch (op){
			case 1:
				imprimirElementos(vector,tam);
				tam=agregar(vector,tam);
				imprimirElementos(vector,tam);
				cout<<"\ntamanio \n",tam;
				system("pause");
				break;
			case 2:
				tam=vaciarLista(vector,tam);
				tam=0;
				//imprimirElementos(vector,tam);
				cout<<"\nVector sin elementos \n";
				system("pause");
				break;
			case 3:
				cout<<"\nIngrese el tamanio del segundo vector ";
				cin>>tam1;
				generarElementos(vector1,tam1);
				tam=unirElementos(vector,tam,vector1,tam1);
				imprimirElementos(vector,tam);
				system("pause");
				break;
			case 4:
				if(tam!=0){
					imprimirElementos(vector,tam);
					cout<<"\nIngrese el elemento a contar ";
					cin>>elemento;
					ner=numeroElementos(vector,tam,elemento);
					cout<<"\nNumero de elementos repetidos  = \n"<<ner<<endl;
					system("pause");
				}else{
					cout<<"\nNo existe elementos\n "<<endl;
					system("pause");
				}

				break;
			case 5:
				if(tam>=0){
					imprimirElementos(vector,tam);
					cout<<"\nIngrese el elemento a buscar ";
					cin>>elemento;
					ner=indiceElementos(vector,tam,elemento);
					if(ner>=0){
						cout<<"\nElementos se ubica en la posicion  \n"<<ner<<endl;
						system("pause");
					}else{
						cout<<"\nNo existe elementos en el arreglo\n ";
						system("pause");
					}

				}else{
					cout<<"\nNo existe elemento encontrado\n ";
					system("pause");
				}
				break;
			case 6:
				//imprimirElementos(vector,tam);
				do{
					imprimirElementos(vector,tam);
					cout<<"\nIngrese el elemento en la posicion a insertar ";
					cin>>pos;
					//pos=pos-1;
					if(pos<=tam){
						cout<<"\nIngrese el elemento a insertar";
						cin>>vector[pos];
						tam++;
						imprimirElementos(vector,tam);
						system("pause");
					}else{
						cout<<"\nNo existe la posicion en el arreglo\n ";
						system("pause");
						system("cls");
					}

				}while(pos>tam);
				break;
			case 7:
				if(tam!=0){
					imprimirElementos(vector,tam);
					cout<<"\nElementos ultimo borrado \n";
					tam=EliminaElementosUltimoPop(vector,tam);
					//imprimirElementos(vector,tam);
					system("pause");
				}else{
					cout<<"\nNo existe elementos\n ";
					system("pause");
				}
				break;
			case 8:
				if(tam!=0){
					imprimirElementos(vector,tam);
					cout<<"\nElemento a borraro \n";
					cin>>elemento;
					tam=removerElemento(vector,tam,elemento);
					imprimirElementos(vector,tam);
					system("pause");
				}else{
					cout<<"\nNo existe elementos\n ";
					system("pause");
				}
				break;
			case 9:
				if(tam!=0){
					imprimirElementos(vector,tam);
					revesElemento(vector,tam);
					cout<<"\n";
					imprimirElementos(vector,tam);
					system("pause");
				}
				else{
					cout<<"\nNo existe elementos\n ";
					system("pause");
				}
				break;
			case 10:
				if(tam!=0){
					imprimirElementos(vector,tam);
					ordenarElementos(vector,tam);
					cout<<"\nArreglo ordenado\n";
					imprimirElementos(vector,tam);
					system("pause");
				}else{
					cout<<"\nNo existe elementos\n "<<endl;
					system("pause");
				}
				break;
			case 11:
				cout<<"Gracias por su atencion"<<endl;
			exit(0);
			default:
				cout<<"Opcion Incorrecta "<<endl;
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
