#include<iostream>//cin y cout endl
#include<conio.h>
#include<stdlib.h>
#include<stdio.h>
#include<math.h>
#include<ctime>
#include<time.h>
#include <stdlib.h>
#define TAM 6
using namespace std;
void inicializar_arreglo(int arreglo[],int tam,int valor);
void insertar_numero(int arreglo[],int tam );
void mostrar_arreglo(int arreglo[],int tam);
void pop(int arreglo[], int tam);
void eliminarpos(int arreglo[], int tam,int pos);
void remove_arreglo( int arreglo[], int tam);
void eliminar_valor(int arreglo[], int tam, int valor );
void reverse_arreglo ( int arreglo[], int tam);
void ordenar_burbuja(int arreglo[],int tam);
void index_arreglo(int arreglo[], int tam);
void append(int arreglo[],int tam);
void index(int arreglo[],int tam);
void cout_elementos(int arreglo[],int tam);
void removerElemento(int arreglo[],int tam);
void unirElementos(int arreglo[],int tam,int arreglo_2[],int tam1);
int main (){
    system("cls");
    int arreglo_2[TAM]= {1,2,3,4,5,6};
    int arreglo[TAM]={5,6,8,2,2,2};
    int opcion;
    cout <<" \n\n Ingrese la opcion que desea realizar: "<<endl;
    cout <<" [1] Mostrar Arreglo"<<endl;
    cout <<" [2] REVERSE (Dar vuelta al arreglo)"<<endl;
    cout <<" [3] SORT (Ordenar arreglo) "<<endl;
    cout <<" [4] INSERT (Insertar valor en una posicion) "<<endl;
    cout <<" [5] POP (Eliminar un item por posicion)  "<<endl;
    cout <<" [6] REMOVE (Eliminar un item por valor) "<<endl;
    cout <<" [7] INDEX( Devuelve el índice en el que aparece un ítem (error si no aparece))"<<endl;
    cout <<" [8] APPEND ( Añade un ítem al final de la lista) "<<endl;
    cout <<" [9] EXTEND ( Unir dos arreglos)"<<endl;
    cout <<" [10] COUNT ( Numero de veces que se repite un valor )"<<endl;
    cout <<" [11] CLEAR (Limpiar arreglo)"<<endl;
    cout <<" [12] Todo"<<endl;
    cout <<" [13] Salir"<<endl;
    cin >>opcion;
     switch(opcion){
         case 1:
             cout <<"\n Mostrar arrgelo original"<<endl;
             mostrar_arreglo(arreglo,TAM);
             break;
        case 2:
            mostrar_arreglo(arreglo,TAM);
            cout <<" \n\nDa la vuelta la lista"<<endl;
            reverse_arreglo (arreglo, TAM);
            mostrar_arreglo(arreglo,TAM);
             break;
        case 3:
            mostrar_arreglo(arreglo,TAM);
            cout <<" \n\nOrdena la lista"<<endl;
            ordenar_burbuja(arreglo,TAM);
            mostrar_arreglo(arreglo,TAM);
             break;
        case 4:
            mostrar_arreglo(arreglo,TAM);
            insertar_numero(arreglo,TAM );
            mostrar_arreglo(arreglo,TAM);
             break;
        case 5:
            mostrar_arreglo(arreglo,TAM);
            pop(arreglo, TAM);
            mostrar_arreglo(arreglo,TAM-1);
             break;
        case 6:
            mostrar_arreglo(arreglo,TAM);
            removerElemento(arreglo,TAM);
            //remove_arreglo( arreglo, TAM);
            mostrar_arreglo(arreglo,TAM-1);
             break;
        case 7:
            mostrar_arreglo(arreglo,TAM);
            index(arreglo,TAM);
             break;
        case 8:
            mostrar_arreglo(arreglo,TAM);
            append(arreglo,TAM);
            mostrar_arreglo(arreglo,TAM+1);
             break;
        case 9:
            mostrar_arreglo(arreglo,TAM);
            mostrar_arreglo(arreglo_2,TAM);
            unirElementos(arreglo, TAM, arreglo_2,TAM);
             break;
        case 10:
            mostrar_arreglo(arreglo,TAM);
            cout_elementos(arreglo,TAM);
             break;
        case 11:
            cout <<" \n\nLimpiar el arreglo"<<endl;
            inicializar_arreglo(arreglo,TAM,0);
            mostrar_arreglo(arreglo,TAM);
             break;
        case 12:
            cout <<"\n Mostrar arrgelo original"<<endl;
             mostrar_arreglo(arreglo,TAM);
             cout <<" \n\nDa la vuelta la lista"<<endl;
            reverse_arreglo (arreglo, TAM);
            mostrar_arreglo(arreglo,TAM);
            cout <<" \n\nOrdena la lista"<<endl;
            ordenar_burbuja(arreglo,TAM);
            mostrar_arreglo(arreglo,TAM);
            insertar_numero(arreglo,TAM );
            mostrar_arreglo(arreglo,TAM);
            pop(arreglo, TAM);
            mostrar_arreglo(arreglo,TAM-1);
            removerElemento(arreglo,TAM);
            mostrar_arreglo(arreglo,TAM-2);
            index(arreglo,TAM);
            mostrar_arreglo(arreglo,TAM-2);
            append(arreglo,TAM);
            cout<<endl;
            mostrar_arreglo(arreglo,TAM-2);
            mostrar_arreglo(arreglo_2,TAM);
            cout<<endl;
            unirElementos(arreglo, TAM, arreglo_2,TAM);
            mostrar_arreglo(arreglo,TAM-2);
            cout<<endl;
            cout_elementos(arreglo,TAM-1);
            cout <<" \n\nLimpiar el arreglo"<<endl;
            inicializar_arreglo(arreglo,TAM,0);
            mostrar_arreglo(arreglo,TAM);

             break;
        case 13:
            cout<< "Programa Finalizado" <<endl;
            return 0;
             break;


     }
     getch();
    return main();
}

void insertar_numero(int arreglo[], int tam)
{
    int numero, pos;
    cout << "\n\nIngrese el numero a insertar: "; cin >> numero;
	cout << "Ingrese la posicion a insertar: "; cin >> pos;
	arreglo[pos ] = numero;
}

void mostrar_arreglo(int arreglo[],int tam){
    for(int i=0;i<tam;i++){
        cout<<" [";
        cout<<arreglo[i]<<"";
        cout<<"]  ";
    }
}
void ordenar_burbuja(int arreglo[],int tam){
    int aux=0;
    for(int i=0;i<tam;i++){
        // Comparaciones
        for(int j=0;j<tam-i;j++){
            // Intercambiar los elementos
            if(arreglo[j] > arreglo[j+1]){
                aux=arreglo[j];
                arreglo[j]=arreglo[j+1];
                arreglo[j+1]=aux;
            }
        }
    }
}
void pop(int arreglo[], int tam){
    int n ;
    cout <<"\n\nCual posicion desea eliminar? " <<endl;
    cin >>n;

    eliminarpos(arreglo, tam ,n);
}
void eliminarpos(int arreglo[], int tam,int pos){
    int i=0;

    for (int i =pos ; i < tam; i++){
        arreglo[i]=arreglo [i+1];

        }
        tam=tam-1;
}
void remove_arreglo( int arreglo[], int tam){
    int num ;
    cout <<" \n\nIngrese el valor que desea eliminar"<<endl ;
    cin>> num;
    eliminar_valor(arreglo,tam,num);

}
void eliminar_valor(int arreglo[], int tam, int valor ){
    for( int i =0; i <tam;i++){
        if ( arreglo[i] !=valor){
                //cout<<arreglo[i];
        }
    }
}

void reverse_arreglo ( int arreglo[], int tam){
    int auxiliar ;
    for ( int i=0 ; i <tam/2; i++){
        auxiliar = arreglo[i];
        arreglo[i]= arreglo[tam-1-i];
        arreglo[tam -1-i]=auxiliar;
    }
}
void inicializar_arreglo(int arreglo[],int tam,int valor){
    for(int i=0;i<tam;i++){
        arreglo[i]=valor;
    }
}
void index_arreglo(int arreglo[], int tam){
    int index=0, elemento ;
    cout<<"Ingrese el elemento que desea buscar"<< endl;
    for (int i=0; i<tam; i++){
        if (arreglo[i]==elemento){
            index++;
        }
        cout <<index;
    }
}

void append(int arreglo[],int tam){
    int valor;
    int aux_arr[tam],i=0;
    cout <<"Ingrese el valor a agregar : "<< endl;
    cin>>valor;
    for( i=0;i<(tam);i++){
        arreglo[i];
    }
    arreglo[i]=valor;
}
void index(int arreglo[],int tam){
    int contador, numero;
    cout<<" \n Index selecione su numero"<<endl;
    cin>>numero;
    for(int i=0;i<tam;i++){
        if( arreglo[i]==numero){
            cout<<"\nEl numero : "<< numero <<" se encontro en la posicion "<<i<<endl;
            contador++;
        }
    }
}

void cout_elementos(int arreglo[],int tam){

	int sum=0, elemento;
	cout<<"\n Ingrese el elemento ";
	cin>>elemento;
	for(int i=0;i<tam;i++){
		if(arreglo[i]==elemento){
			sum++;
		}

	}
	cout <<"\nEl  " <<elemento<<" se repite : "<<sum<<endl;
}

void removerElemento(int arreglo[],int tam){
	int vecAux[20],i,k=0,sw=0,aux, elemento;
	cout <<"\n Ingrese el elemento a eliminar ";
	cin >>elemento;
	for(int i=0;i<tam;i++)
	vecAux[i]=0;
	for(int i=0;i<tam;i++){
		if(arreglo[i]==elemento && sw==0){
			i++;
			aux=arreglo[i];
			vecAux[k++]=aux;
			sw=1;
		}else{
			aux=arreglo[i];
			vecAux[k++]=aux;
		}
	}
	for(int i=0;i<k;i++){
		arreglo[i]=vecAux[i];
	}
}
void unirElementos(int arreglo[],int tam,int arreglo_2[],int tam1){
	int j=0,i;
	for(i=tam;i<(tam+tam1);i++){
		arreglo[i]=arreglo_2[j++];
	}
}
