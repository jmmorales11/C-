#include<iostream> // pausa del programa
#include<stdlib.h>
#include<stdio.h>
#include<conio.h>
#include<math.h>
using namespace std;
int bon(int num_a,int tipo);
int  pago_por_hora (int tipo, int horas);

int main (){
    int i, opcion, pago, a ,bono;
    do{
        cout<<"Elija el tipo trabajador"<<endl;
        cout<<"1.- Tiempo completo"<<endl;
        cout<<"2.- Tiempo parcial"<<endl;
        cin>>opcion;
        if ( opcion< 1 || opcion > 2){
            cout<<"Valor ingresado incorrecto"<<endl;
        }

    }while ( opcion< 1 | opcion > 2);
    do{
       cout<<"Introduca la cantidad de horas trabajadas"<<endl;
        cin>>i;
        if ( i< 0 ){
            cout<<"Valor ingresado incorrecto"<<endl;
        }
    }while ( i<0);
    do{
       cout<<"Introduca la cantidad de años que a trabajado"<<endl;
        cin>>a;
        if ( a< 0 ){
            cout<<"Valor ingresado incorrecto"<<endl;
        }
    }while( a<0);
    pago=pago_por_hora(opcion,i);
	bono=bon(a,opcion);
	cout<<"El valor a pagar por horas es"<<pago<<endl;
	cout<<"El valor del bono es"<<bono<<endl;
	cout<<"El valor total a pagar es"<<bono+pago<<endl;

return 07;
}

int bon(int num_a,int tipo){
   if (tipo==1) {
        if (num_a>=1 & num_a<=5) {
            return 100;
        }if (num_a>=6 & num_a<=10) {
            return 200;
        }if (num_a>=11 ) {
            return 300;
        }
    }else{
        if (num_a>=1 && num_a<=5) {
            return 50;
            }if (num_a>=6 && num_a<=10) {
            return 100;
            }if (num_a>=11 ) {
            return 150;
            }
    }
}

int pago_por_hora(int tipo, int horas){

    if (tipo==1) {
        return  horas*25;
    }else{
        return  horas*20;
    }
}
