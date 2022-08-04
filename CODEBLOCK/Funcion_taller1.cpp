#include<iostream>//cin y cout endl
#include<conio.h>
#include<stdlib.h>
#include<stdio.h>
#include<math.h>
using namespace std;
int main (){
    int i , termino;
    float x,w, acumulador;
    char salir;
    do{
            do {
                acumulador = 0;
                i= 0;
                cout <<" Ingresa el numero de terminos que debe tener la funcio "<<endl;
                cin>> termino;
                if  (termino < 1 || termino >20 ){
                        cout <<" Numero invalido "<<endl;
                }
                } while (termino < 0 || termino > 20);
                for (i = 1; i <= termino ; i++){
                        w = (24/(i^2));
                        acumulador = acumulador + w;
                }
        x = (1/2)*(sqrt(acumulador));
        cout <<" El Resultado de la exprecion con" << termino << "terminos es:" << x << endl;
        cout <<" Desea salir del programa 1= para salir o cualquier tecla para seguir en el programa "<<endl;
        cin>> salir ;
    }while (salir !=1 );
getch();
return 0;
}
