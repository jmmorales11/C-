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

int main (){
    //string para un objeto
    string nombre="Jeimy Marley", nombre1, apellido=" Sosa", apellido1;
    cout<<nombre<<endl;
    nombre1=nombre; //vale para copiarla cadena podemos comparrar
    cout <<nombre1<<endl;
    nombre1= "YO";
    nombre+=apellido;//puedo unir cadenas
    cout<<nombre<<endl;
    if(nombre==nombre1){
        cout <<"La cadenas son iguales"<<endl;

    }   else {
        cout <<"Las cadenas no son iguales "<<endl;
    }

    //extrae una subcadena
    apellido1=nombre.substr(6,6);
    cout<<apellido1<<endl;
    cout<<apellido1.size()<<endl;
    cout<<apellido1.length()<<endl;
    apellido1.resize(9); //Amplia o acorta la cadena
    apellido[7]='*';
    cout <<apellido1<<endl;
    cout<<apellido1.size()<<endl;

    getch();
    return 25;

}
