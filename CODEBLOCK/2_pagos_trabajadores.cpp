#include<iostream>//cin y cout endl
#include<conio.h>
#include<stdlib.h>
#include<stdio.h>
#include<math.h>
using namespace std;

int pago_total (int opcion , int a_de_trabajo, int horas  );
int bonificacion (int opcion, int a_de_trabajo);
float pago (int opcion, float horas);
int main (){
    int a, horas_trabajadas ;
    float pago_trabajadores, bono_anual, a_trabajados, total_pago;
    do{
    cout <<" Ingrese el tipo de empleado "<<endl;
    cout <<"1  Empleado de Tiempo completo "<<endl;
    cout <<"2  Empleado de Tiempo Parcial  "<<endl;
    cin >> a ;
    if (a > 2){
        cout <<" Numero invalida"<< endl;
    }

    }while (!( a > 0 & a < 3));
    cout << " Horas trabajadas" <<endl;
    cin >> horas_trabajadas ;
    cout <<" Años trabajados "<<endl;
    cin >> a_trabajados;
    bono_anual = bonificacion( a, a_trabajados);
    pago_trabajadores = pago(a, horas_trabajadas);
    total_pago = bonificacion (a, a_trabajados)+ pago (a, horas_trabajadas);
    cout <<"El pago por hora es : "<< pago_trabajadores<<endl;
    cout <<"El monto anual es: "<< bono_anual <<endl;
    cout <<"El pago total es: "<< total_pago <<endl;

getch();
return 0;
}

int bonificacion (int opcion, int a_de_trabajo){
    if (opcion = 1){
            if ( a_de_trabajo >= 1 & a_de_trabajo <= 3){
                return 1000;
            }if (a_de_trabajo >= 4 & a_de_trabajo <= 10){
                return 2000;
            } if ( a_de_trabajo >=11){
                return 3000;
            }

    }else {
         if (a_de_trabajo >= 1 & a_de_trabajo <= 3 ){
                return 500;
         } if ( a_de_trabajo >= 4 & a_de_trabajo <= 10){
             return 1000;
         } if ( a_de_trabajo >=11 ){
             return 1500;
         }

           }
}

float pago (int opcion, float horas){
    if (opcion = 1){
        return 1.66 * horas;
    }else {
        return 0.83 * horas;
    }
}

int pago_total (int opcion , int a_de_trabajo, int horas  ){
    return bonificacion( opcion, a_de_trabajo)+ pago (opcion, horas);
}
