//Utiliza punteros c++ y c

/* #include<iostream>//cin y cout endl
#include<conio.h>
#include<stdlib.h>
#include<stdio.h>
#include<math.h>
using namespace std;
void cambiar(int * , int *);
void cambiar(int * , int *);
int main (){
    int num1=45, num2= 50;
    cout <<"valor innicial de num1: "<<num1<<endl;
    cout <<"valor innicial de num2: "<<num2<<endl;
   // cambiar(&num1, &num2);
   intercambiar(&num1,&num2);
    cout<< "valor de num1 despues de utilizar puntero :  "<<num1<<endl;
    cout<< "valor de num2 despues de utilizar puntero :  "<<num2<<endl;

    system ("pause");
    getch();
    return 0;
return 0;
}


void cambiar(int *valor1 , int *valor2){

    *valor1 = 100;
    *valor2= 200;

}

void intercambiar (int *p_v1, int *p_v2){
    int aux = 0;
    aux= *p_v1;
    *p_v1 = *p_v2;
    *p_v2= aux;

}
*/
#include<iostream>
#include<conio.h>
using namespace std;

void cambiar(int *,int *);
void intercambiar(int *,int *);

int main(){
    int num1=45,num2=50,res;
    cout<<"Valor inicial de num1: "<<num1<<endl;
    cout<<"Valor inicial de num2: "<<num2<<endl;
    //cambiar(&num1,&num2);
    intercambiar(&num1,&num2);
    cout<<"Valor de num1 despues de llamar a la funcion: "<<num1<<endl;
    cout<<"Valor de num2 despues de llamar a la funcion: "<<num2<<endl;
    getch();
    return 0;
}
void cambiar(int *valor1, int *valor2)
{
    *valor1=100;
    *valor2=200;
}
void intercambiar(int *p_v1,int *p_v2){
    int aux=0;
    aux=*p_v1;
    *p_v1=*p_v2;
    *p_v2=aux;
}
