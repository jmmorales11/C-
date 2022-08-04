#include<iostream>//cin y cout endl
#include<conio.h>
#include<stdlib.h>
#include<stdio.h>
#include<math.h>
#include<ctime>
#include<time.h>
#include <stdlib.h>
#include<string.h>

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
//juan={"Juan","Arcentales","f.programacion", 14.5,16.8,17.9,15.5},maria;//inicializar

int main (){
    estudiantes juan;//={"Juan","Arcentales","F.programcaion",14.5,16.8,17.9,15.5}; //Inicializar 2forma

    cout <<juan.nota_p1<<endl;
    cout <<sizeof(juan)<<endl;
    cout<<"Ingresar el nombre"<<endl;
    cin.getline(juan.nombre,30,'\n');
    cout<<"Ingresar el apellido"<<endl;
    cin.getline(juan.apellido,30,'\n');
    cout<<"Ingresar la materia"<<endl;
    cin.getline(juan.materia,20,'\n');
    cout<<"Ingrese el anio de ingreso"<<endl;
    cin>>juan.fecha_ing.anio;
    cout<<"Ingrese el mes de ingreso"<<endl;
    cin>>juan.fecha_ing.mes;
    cout<<"Ingrese el dia de ingreso"<<endl;
    cin>>juan.fecha_ing.dia;
    cout<<"Ingresar la nota p1"<<endl;
    cin>>juan.nota_p1;
    cout<<"Ingresar la nota p2"<<endl;
    cin>>juan.nota_p2;
    cout<<"Ingresar la nota p3"<<endl;
    cin>>juan.nota_p3;
    juan.promedio=(juan.nota_p1+juan.nota_p2+juan.nota_p3)/3;
    cout <<"Nombre :  "<<juan.nombre<<endl;
    cout<<"Apellido:  "<<juan.apellido<<endl;
    cout<<"Materia:  "<<juan.materia<<endl;
    cout <<"Fecha de ingreso  :  "<<juan.fecha_ing.dia<<"/"<<juan.fecha_ing.mes<<"/"<<juan.fecha_ing.anio<<"/"<<endl;
    cout <<"Promedio:  "<<juan.promedio<<endl;

    cin.getline(juan.nombre,30,'\n');
    //cout<<juan.nombre<<endl;


    getch();
    return 25;

}
