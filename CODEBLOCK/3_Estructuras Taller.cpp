//una empresa comercial en Quito desea codificar su vetas a lo largo de sus vendedores
// tiene 5 vendedores
/*  tiee  un codigo, nombre,total de las ventas
cada vendededor almacena sus ventas por dias
declarar las declaraciones
codficar una funcion
codificar un funcion que obtener el total de ventas mensuales
obtener el vendedor que mayor en ventas en un dia de la semana */

#include<iostream>
#include<conio.h>

using namespace std;
struct ventas_semana{
    int dias[4][4];
};

struct empresa{
    char codigo[5];
    char nombre[30];
    ventas_semana v_dias;
    int total;
};

empresa mayor_vendedor(empresa arr[], int tam);
void ingresar_vendedores(empresa arr[],int tam);
void mostrar_vendedores(empresa arr[],int tam);
void total_ventas(empresa arr[],int tam);
void mayor_ventas(ventas_semana matriz[][4]);

int main(){
    int const TAM=1;
    empresa vendedores[TAM];
    ventas_semana
    ingresar_vendedores(vendedores,TAM);
    total_ventas(vendedores,TAM);
    mostrar_vendedores(vendedores,TAM);
    cout <<"El dia con mayor venta es :  "<<endl;
    mayor_vendedor(vendedores, TAM);
}

void ingresar_vendedores(empresa arr[],int tam){

    for(int i=0;i<tam;i++){

        cout <<"Ingrese el codigo "<<endl;
        cin.getline(arr[i].codigo,5,'\n');
        cout<<"Ingresar el nombre"<<endl;
        cin.getline(arr[i].nombre,30,'\n');
        cout <<"Ingrese el numero de ventas del dia lunes: "<<endl;
        cin>>arr[i].v_dias.dias[][0];
        cout <<"Ingrese el numero de ventas del dia martes: "<<endl;
        cin>>arr[i].v_dias.dias[][1];
        cout <<"Ingrese el numero de ventas del dia miercoles: "<<endl;
        cin>>arr[i].v_dias.dias[][2];
        cout <<"Ingrese el numero de ventas del dia jueves: "<<endl;
        cin>>arr[i].v_dias.dias[][3];
        cout <<"Ingrese el numero de ventas del dia viernes: "<<endl;
        cin>>arr[i].v_dias.dias[][4];
        cin.ignore(); // cuando combino cadenas
            }
}

void mostrar_vendedores(empresa arr[],int tam){

    for(int i=0;i<tam;i++){
        cout<<"\nCODIGO: "<<arr[i].codigo<<endl;
        cout <<"NOMBRE: "<<arr[i].nombre<<endl;
        cout <<"Venta del dia Lunes : " <<arr[i].v_dias.dias[][0]<<endl;
        cout <<"Venta del dia Martes : " <<arr[i].v_dias.dias[][1]<<endl;
        cout <<"Venta del dia Miercoles : " <<arr[i].v_dias.dias[][2]<<endl;
        cout <<"Venta del dia Jueves : " <<arr[i].v_dias.dias[][3]<<endl;
        cout <<"Venta del dia viernes : " <<arr[i].v_dias.dias[][4]<<endl;
        cout <<"ventas totales : "<< arr[i].total<<endl;


    }
}
void total_ventas(empresa arr[],int tam){
    for (int i= 0 ; i<tam;i++){
        arr[i].total=(arr[i].v_dias.dias[][0]+arr[i].v_dias.dias[][1]+arr[i].v_dias.dias[][2]+arr[i].v_dias.dias[][3]+arr[i].v_dias.dias[][4]);
    }
}
void mayor_ventas(ventas_semana matriz[][]){
    int menor = matriz[][0];
    int mayor = matriz[][0];
    // Recorrer la matriz y comparar
    for (int y = 0; y < ALTURA; y++) {
        for (int x = 0; x < ANCHURA; x++) {
            int elementoActual = matriz[y][x];
            if (elementoActual > mayor) mayor = elementoActual;
            if (elementoActual < menor) menor = elementoActual;
        }
    }
    cout<<mayor<<endl;


}
empresa mayor_vendedor( empresa arr[], int tam){


/*
    for (int i=0; i<tam;i++){
        if (arr[i].v_dias.lunes < arr[i].v_dias.martes ){
            cout << "Martes: " <<arr[i].v_dias.martes<<endl;
        }if (arr[i].v_dias.lunes < arr[i].v_dias.miercoles){
            cout <<"Miercoles : " <<arr[i].v_dias.miercoles<<endl;
        }if (arr[i].v_dias.lunes<arr[i].v_dias.jueves){
            cout <<"Jueves : " <<arr[i].v_dias.jueves<<endl;
        }if (arr[i].v_dias.lunes < arr[i].v_dias.viernes){
            cout <<"Viernes: "<<arr[i].v_dias.viernes<<endl;
        }else {
            cout <<"Lunes:  "<<arr[i].v_dias.lunes<<endl;
        }
    }*/
}
