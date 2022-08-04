#include<iostream>
#include<conio.h>
#include<ctime>

using namespace std;
void mostrar_letras(char letras[],int tam);
void llenar_letra(char letras[],int tam);
void llenar_letras_aleatorio(char letras[], int tam);
void insertar_letras(char letras[], int tam, int pos, char num);
void ordenar_letras(char letras[], int tam);
void insertar_letra(char letras[], int pos, char valor);
int main (){
    int n, p;
    char letras[n], v;

    cout << "Ingrese el tamaño del arreglo"<<endl;
    cin>> n ;
    llenar_letras_aleatorio(letras, n);
    mostrar_letras(letras,n);
    cout<<"\n Ingrese la posicion en la que desea ingresar ";
    cin >> v;
    cout <<" Letra que desea ingresar "<<v<<endl;
    cin >>p ;
    insertar_letra(letras, v, p);
    mostrar_letras(letras,n);
    cout<<" \n El arreglo ordenado es: \n";
    ordenar_letras(letras, n);
    mostrar_letras(letras,n);
return 0;
}

void mostrar_letras(char letras[],int tam){
    for(char i=0;i<tam;i++){
        cout<<" [";
        cout<<letras[i]<<"";
        cout<<"]  ";
    }
}

void llenar_letra(char letras[],int tam){
    for( char i=0;i<tam;i++){
            cout<<"Ingrese el valor "<<i+1<<": "<<endl;
            cin>>letras[i];

    }
}
void llenar_letras_aleatorio(char letras[], int tam){
	int i=0, valor;
	srand(time(NULL));
	do{
		valor=rand()%91;
		if(valor>64 && valor <91){
			letras[i++]=valor;
		}
	}while(i<tam);
}

void insertar_letra(char letras[], int pos, char valor){
	letras[pos - 1] = valor;
}

void ordenar_letras(char letras[], int tam){
	int i,j, aux;
	for(i=0;i<tam;i++){
		for(j=0;j<tam;j++){
			if(letras[i]<letras[j]){
				aux=letras[i];
				letras[i]=letras[j];
				letras[j]=aux;
			}
		}
	}
}
