#include<iostream>
#include<conio.h>

using namespace std;
struct fecha{
    int anio;
    int mes;
    int dia;
};

struct estudiantes{
    char nombre[30];
    char apellido[30];
    char materia[20];
    fecha fecha_ing;
    float nota_p1;
    float nota_p2;
    float nota_p3;
    float promedio;
};

void ingresar_estudiante(estudiantes arr[],int tam);
void mostrar_estudiantes(estudiantes arr[],int tam);


int main(){
    int const TAM =2;
    estudiantes e_fprog[TAM];
    ingresar_estudiante(e_fprog,TAM);
    mostrar_estudiantes(e_fprog,TAM);
    getch();
    return 0;
}

void ingresar_estudiante(estudiantes arr[],int tam){
    for(int i=0;i<tam;i++){
        cout<<"Ingresar el nombre"<<endl;
        cin.getline(arr[i].nombre,30,'\n');
        cout<<"Ingresar el apellido"<<endl;
        cin.getline(arr[i].apellido,30,'\n');
        cout<<"Ingresar Materia"<<endl;
        cin.getline(arr[i].materia,20,'\n');
        cout<<"Ingrese el anio de ingreso: "<<endl;
        cin>>arr[i].fecha_ing.anio;
        cout<<"Ingrese el mes de ingreso: "<<endl;
        cin>>arr[i].fecha_ing.mes;
        cout<<"Ingrese el dia de ingreso: "<<endl;
        cin>>arr[i].fecha_ing.dia;
        cout<<"Ingresar Nota p1"<<endl;
        cin>>arr[i].nota_p1;
        cout<<"Ingresar Nota p2"<<endl;
        cin>>arr[i].nota_p2;
        cout<<"Ingresar Nota p3"<<endl;
        cin>>arr[i].nota_p3;
        cin.ignore();
        arr[i].promedio=(arr[i].nota_p1+arr[i].nota_p2+arr[i].nota_p3)/3;
    }
}

void mostrar_estudiantes(estudiantes arr[],int tam){
    for(int i=0;i<tam;i++){
        cout<<"          Nombre: "<<arr[i].nombre<<endl;
        cout<<"        Apellido: "<<arr[i].apellido<<endl;
        cout<<"         Materia: "<<arr[i].materia<<endl;
        cout<<"Fecha de Ingreso: "<<arr[i].fecha_ing.dia<<"/"<<arr[i].fecha_ing.mes<<"/"<<arr[i].fecha_ing.anio<<endl;
        cout<<"        Promedio: "<<arr[i].promedio<<endl;
    }
}
