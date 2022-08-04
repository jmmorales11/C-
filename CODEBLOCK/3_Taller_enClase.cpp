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
#include<string.h>

using namespace std;
struct ventas_semana{
    int lunes;
    int martes;
    int miercoles;
    int jueves;
    int viernes;
};

struct empresa{
    char codigo[5];
    char nombre[30];
    ventas_semana v_dias;
    int total;
};

void mayor_vendedor(empresa arr[], int tam);
void ingresar_vendedores(empresa arr[],int tam);
void mostrar_vendedores(empresa arr[],int tam);
void total_ventas(empresa arr[],int tam);


int main(){
    int const TAM=3;
    empresa vendedores[TAM];
    ingresar_vendedores(vendedores,TAM);
    total_ventas(vendedores,TAM);
    mostrar_vendedores(vendedores,TAM);
    mayor_vendedor(vendedores, TAM);
}

void ingresar_vendedores(empresa arr[],int tam){

    for(int i=0;i<tam;i++){

        cout <<"Ingrese el codigo "<<endl;
        cin.getline(arr[i].codigo,5,'\n');
        cout<<"Ingresar el nombre"<<endl;
        cin.getline(arr[i].nombre,30,'\n');
        cout <<"Ingrese la venta del dia lunes: "<<endl;
        cin>>arr[i].v_dias.lunes;
        cout <<"Ingrese la venta del dia martes: "<<endl;
        cin>>arr[i].v_dias.martes;
        cout <<"Ingrese la venta del dia miercoles: "<<endl;
        cin>>arr[i].v_dias.miercoles;
        cout <<"Ingrese la venta del dia jueves: "<<endl;
        cin>>arr[i].v_dias.jueves;
        cout <<"Ingrese la venta del dia viernes: "<<endl;
        cin>>arr[i].v_dias.viernes;
        cin.ignore(); // cuando combino cadenas
            }
}

void mostrar_vendedores(empresa arr[],int tam){

    for(int i=0;i<tam;i++){
        cout<<"\nCODIGO: "<<arr[i].codigo<<endl;
        cout <<"NOMBRE: "<<arr[i].nombre<<endl;
        cout <<"Venta del dia Lunes : " <<arr[i].v_dias.lunes<<endl;
        cout <<"Venta del dia Martes : " <<arr[i].v_dias.martes<<endl;
        cout <<"Venta del dia Miercoles : " <<arr[i].v_dias.miercoles<<endl;
        cout <<"Venta del dia Jueves : " <<arr[i].v_dias.jueves<<endl;
        cout <<"Venta del dia viernes : " <<arr[i].v_dias.viernes<<endl;
        cout <<"ventas totales : "<< arr[i].total<<endl;

    }
}
void total_ventas(empresa arr[],int tam){
    for (int i= 0 ; i<tam;i++){
        arr[i].total=(arr[i].v_dias.lunes+arr[i].v_dias.martes+arr[i].v_dias.miercoles+arr[i].v_dias.jueves+arr[i].v_dias.viernes);
    }
}

void mayor_vendedor( empresa arr[], int tam){
    int valor, k=0;
    char dia[10];
    for (int i=0; i<tam;i++){

           if (valor <arr[i].v_dias.lunes ){
               valor=arr[i].v_dias.lunes;
               k=i;
               strcpy(dia,"Lunes");

           }
           if (valor <arr[i].v_dias.martes ){
               valor=arr[i].v_dias.martes;
               k=i;
               strcpy(dia,"Martes");

    }
    if (valor <arr[i].v_dias.miercoles ){
               valor=arr[i].v_dias.miercoles;
               k=i;
               strcpy(dia,"Miercoles");

    }
    if (valor <arr[i].v_dias.jueves ){
               valor=arr[i].v_dias.jueves;
               k=i;
               strcpy(dia,"Jueves");

    }
    if (valor <arr[i].v_dias.viernes ){
               valor=arr[i].v_dias.viernes;
               k=i;
               strcpy(dia,"Viernes");

    }

}
    cout <<"\nNombre :  "<< arr[k].nombre<<endl;
    cout <<"Valor :  "<< valor<<endl;
    cout <<"Dia que mas ventas tuvo : "<< dia<<endl;

}


/*
empresa mayor_vendedor( empresa arr[], int tam){
    int valor = 0;
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
    }
}*/
