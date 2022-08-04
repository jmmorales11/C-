#include<iostream>
#include<conio.h>
#define TAM 5
using namespace std;

void inicializar_arreglo(int arreglo[],int tam,int valor);
void mostrar_arreglo(int arreglo[],int tam);
void ingresar_datos(int arreglo[],int tam);
float promedio_notas(int arreglo[],int tam);
void calcular_max_y_min(int arreglo[],int tam,int *pmax,int *pmin);
void sup_inf_media ( float arreglo[], int tam, int *sup_prom, int *inf_prom );
void notas_repetidas(int arreglo[],int tam);

int main(){
    float notas[TAM], promedio, nmax,nmin, mayores, menores;
    int
    inicializar_arreglo(notas,TAM,1);

    cout<<"Seleccione la opccion deseada:"<<endl;
    cout<<"[1] Promedio"<<endl;
    cout<<"[2] nota maxima y minima"<<endl;
    cout<<"[3] Notas Sobre y bajo el promedio"<<endl;
    cout<<"[4] Las notas repetidas"<<endl;
    cin>>selec;
     if (selec == 1){
         ingresar_datos(notas,TAM);
         mostrar_arreglo(notas,TAM);
         promedio = promedio_notas(notas,TAM);
         cout<<"El promedio es: "<<promedio<<endl;}
    else if (selec == 2){
        ingresar_datos(notas,TAM);
        mostrar_arreglo(notas,TAM);
        calcular_max_y_min(notas,TAM,&nmax,&nmin);
        cout<<"La nota maxima es: "<<nmax<<endl;
        cout<<"La nota minima es: "<<nmin<<endl;}
    else if (selec == 3){
        ingresar_datos(notas,TAM);
        mostrar_arreglo(notas,TAM);
                       }


    if (selec<1 || selec>4){
        cout<<"El numero es incorrecto"<<endl;
}

    getch();
    return 0;
}

void inicializar_arreglo(int arreglo[],int tam,int valor){
    for(int i=0;i<tam;i++){
        arreglo[i]=valor;
    }
}

void mostrar_arreglo(int arreglo[],int tam){
    for(int i=0;i<tam;i++){
        cout<<"Nota "<<i+1<<": "<<arreglo[i]<<endl;
    }
}

void ingresar_datos(int arreglo[],int tam){
    for(int i=0;i<tam;i++){
        cout<<"Ingrese la nota "<<i+1<<": "<<endl;
        cin>>arreglo[i];
        if (arreglo[i]>20)
        cout<<"Solo se permite valores dentro de 20 "<<endl;
    }
}

float promedio_notas(int arreglo[],int tam){
    float resultado=0;
    for(int i=0;i<tam;i++){
        resultado = resultado+arreglo[i];
    }
    return resultado/tam;
}

void calcular_max_y_min(int arreglo[],int tam,int *pmax,int *pmin){
    *pmax=0;
    *pmin=100;
    for(int i=0;i<tam;i++){
        if(arreglo[i]<*pmin){
            *pmin=arreglo[i];
        }
        if(arreglo[i]>*pmax){
            *pmax=arreglo[i];
        }
    }
}

void notas_repetidas(int arreglo[],int tam){
    for(int i=0;i<tam;i++)
{

        if (arreglo[i] == i++)
        {
            cout << "se encontro en la posicion " << arreglo << endl;
            i++;

    }
}
}
