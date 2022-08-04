#include<iostream>//cin y cout endl
#include<conio.h>
#include<stdlib.h>
#include<stdio.h>
#include<math.h>
#include<ctime>

int generar_aleatorio(int linf,int lsup){
    int numero=0;
    numero = linf + rand() % (lsup+1 - linf);
    return numero;
}
void llenar_letras(char arreglo[],int tam){
    for(int i=0;i<tam;i++){
        arreglo[i]=generar_aleatorio(97,122);
    }
}
void mostrar_arreglo(char arreglo[],int tam){
    for(int i=0;i<tam;i++){
        cout<<arreglo[i]<<endl;
    }
}
void insertar_letra(char arreglo[],int tam, int pos, char letra){
    char aux_arr[tam];
    int j=0;
    for(int i=0;i<(tam-pos);i++){
        aux_arr[i]=arreglo[pos+i];
    }
    arreglo[pos]=letra;
    for(int i=pos+1;i<=tam+1;i++){
        arreglo[i]=aux_arr[j];
        j++;
    }
}
void ordenar_letras(char *parr,int tam){
    char aux=0;
    for(int i=0;i<tam;i++){
        // Comparaciones
        for(int j=0;j<tam-i;j++){
            // Intercambiar los elementos
            if(*(parr+j) > *(parr+(j+1))){
                aux=*(parr+j);
                *(parr+j)=* (parr+(j+1));
                *(parr+(j+1))=aux;
            }
        }
    }
}

int main(){
    char letras[50];
    int tam=0;
    srand(time(NULL));
    do{
        cout<<"Ingrese cantidad de letras a llenar: "<<endl;
        cin>>tam;
    }while(tam<=0 || tam>50);
    llenar_letras(letras,tam);
    mostrar_arreglo(letras,tam);
    cout<<endl<<endl;
    insertar_letra(letras,tam,2,'z');
    tam++;
    cout<<"Arreglo insertado el caracter"<<endl;
    mostrar_arreglo(letras,tam);
    cout<<endl<<"Arreglo ordenado: "<<endl;
    ordenar_letras(letras,tam);
    mostrar_arreglo
ordenar_letras(letras,tam);
    mostrar_arreglo(letras,tam+1);
    getch();
    return 0;
}
