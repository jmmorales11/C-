#include<iostream>//cin y cout endl
#include<conio.h>
#include<stdlib.h>
#include<stdio.h>
#include<math.h>
using namespace std;

float pago_trabajadores ( int opcion2, int a_laborados_trabajador, int opcion1, int horas);
float bonificacion ( int opcion2, int a_laborados);
float pago ( int opcion1, int horas );

int main (){
    int opcion, horas_trabajadas, a_laborados;
    float pago_por_horas, bonificacion_a_trabajador, pago_total_trabajador;
    do {
        cout <<" Ingrese el tipo de trabajador "<<endl;
        cout <<" 1 Tiemplo completo "<<endl;
        cout <<" 2 Tiemplo parcial "<<endl;
        cin>> opcion;
        if (opcion <= 1 & opcion >= 2){
            cout <<" Numero Invalido "<<endl;
        }
    } while (!( opcion >= 1 & opcion <= 2 ));

    cout <<" Ingrese horas trabajadas  "<<endl;
    cin>> horas_trabajadas;
    cout <<" Ingrese años laborados" << endl;
    cin>> a_laborados;
    pago_por_horas = pago ( opcion, horas_trabajadas);
    bonificacion_a_trabajador = bonificacion ( opcion , a_laborados );
	pago_total_trabajador =  pago_trabajadores ( opcion , a_laborados, opcion, horas_trabajadas );
    cout <<" Ingrese años laborados : " << pago_por_horas<< endl;
    cout <<" Bonificacion por años  : " << bonificacion_a_trabajador<< endl;
    cout <<" Pago total del trabajador es: " << pago_total_trabajador << endl;

getch();
return 0;
}

float pago ( int opcion1, int horas ){
    if (opcion1 == 1){
        return 1.50 * horas;
    } else{
         if (opcion1 == 2){
        return 0.75 * horas;
    }
    }
}

float bonificacion ( int opcion2, int a_laborados){
    if ( opcion2== 1){
        if ( a_laborados >= 1 & a_laborados <= 3 ){
            return 1000;
        }
        if ( a_laborados >= 4 & a_laborados <= 7 ){
            return 2000;
        }
        if ( a_laborados >= 8){
            return 3000;
        }
    }
    if ( opcion2 == 2 ){
        if ( a_laborados >= 1 & a_laborados <= 3){
            return 500;
        }
        if (a_laborados >= 4 & a_laborados <= 7){
            return 1000;
        }
        if ( a_laborados >= 8){
            return 1500;
        }
    }
}

float pago_trabajadores ( int opcion2, int a_laborados_trabajador, int opcion1, int horas){
    return bonificacion ( opcion2, a_laborados_trabajador ) + pago ( opcion1, horas  );
}

