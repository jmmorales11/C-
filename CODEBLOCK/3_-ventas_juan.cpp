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

empresa mayor_vendedor(empresa arr[], int tam);
void ingresar_vendedores(empresa arr[],int tam);
void mostrar_vendedores(empresa arr[],int tam);
void total_ventas(empresa arr[],int tam);


int main(){
    int const TAM=2;
    empresa vendedores[TAM];
    ingresar_vendedores(vendedores,TAM);
    total_ventas(vendedores,TAM);
    mostrar_vendedores(vendedores,TAM);
    cout <<"\nLa persona con mayor venta es :  "<<endl;
    mayor_vendedor(vendedores, TAM);
}

void ingresar_vendedores(empresa arr[],int tam){

    for(int i=0;i<tam;i++){

        cout <<"\nIngrese el codigo "<<i<<":"<<endl;
        cin.getline(arr[i].codigo,5,'\n');
        cout<<"Ingresar el nombre "<<i<<":"<<endl;
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
        cout <<"Ventas totales : \n"<< arr[i].total<<endl;

    }
}
void total_ventas(empresa arr[],int tam){
    for (int i= 0 ; i<tam;i++){
        arr[i].total=(arr[i].v_dias.lunes+arr[i].v_dias.martes+arr[i].v_dias.miercoles+arr[i].v_dias.jueves+arr[i].v_dias.viernes);
    }
}

empresa mayor_vendedor( empresa arr[], int tam){
    int a=0,b=0;

    for (int i=0; i<tam;i++){
        if  (a < arr[i].v_dias.lunes) {
             a = arr[i].v_dias.lunes;
             b=i;}
        if  (a < arr[i].v_dias.martes) {
             a = arr[i].v_dias.martes;
             b=i;}
        if  (a < arr[i].v_dias.miercoles) {
             a = arr[i].v_dias.miercoles;
             b=i;}
        if  (a < arr[i].v_dias.jueves) {
             a = arr[i].v_dias.jueves;
             b=i;}
        if  (a < arr[i].v_dias.viernes) {
             a = arr[i].v_dias.viernes;
             b=i;}

        }

    cout<< "Nombre: "<<arr[b].nombre<<endl;
    cout<< "El valor mayor es: "<<a<<endl;

}
