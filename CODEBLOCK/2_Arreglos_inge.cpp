//nombre  TA_arreglo_funciones_app_nombre_app_nombre.rar
//asunto: Taller arreglo funciones
#include<iostream>
#include<conio.h>
#define TAM 10
void inicializar_arreglo(int arreglo[],int tam,int valor);
void mostrar_arreglo(int arreglo[],int tam);
void ingresar_datos(int arreglo[],int tam);
float promedio_notas(int arreglo[],int tam);
//int valor_minimo(int arreglo[],int tam);
//int valor_maximo(int arreglo[],int tam);
void calcular_max_y_min(int arreglo[],int tam,int *pmax,int *pmin);
void llenar_datos(int arreglo[], int tam, int vinf, int vsup);
int generar_aleatorias(int linf ,int lsup);
int contar_nota(int arreglo );
using namespace std;
int main(){
    int notas[TAM],nmax,nmin;
    float promedio;
    inicializar_arreglo(notas,TAM,1);
    //mostrar_arreglo(notas,TAM);
    ingresar_datos(notas,TAM);
    mostrar_arreglo(notas,TAM);
    promedio = promedio_notas(notas,TAM);
    calcular_max_y_min(notas,TAM,&nmax,&nmin);
    cout<<"La nota maxima es: "<<nmax<<endl;
    cout<<"La nota minima es: "<<nmin<<endl;
    cout<<"El promedio es: "<<promedio<<endl;
    getch();
    return 07;
}
void inicializar_arreglo(int arreglo[],int tam,int valor){
    for(int i=0;i<tam;i++){
        arreglo[i]=valor;
    }
}
void mostrar_arreglo(int arreglo[],int tam){
    for(int i=0;i<tam;i++){
        cout<<arreglo[i]<<endl;
    }
}
void ingresar_datos(int arreglo[],int tam){
    for(int i=0;i<tam;i++){
        cout<<"Ingrese el valor "<<i+1<<": "<<endl;
        cin>>arreglo[i];
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

//int generar_aleatorio(int linf,int lsup){
  //  int numero=0;
    //numero = linf + rand() % (lsup+1 - linf);
    //return numero;
//}

//void llenar_datos(int arreglo[],int tam,int vinf,int vsup){
  //  for(int i=0;i<tam;i++){
     //   arreglo[i]=generar_aleatorio(vinf,vsup);
    //}
//}
int generar_aleatorio(int linf,int lsup){ int numero=0; numero = linf + rand() % (lsup+1 - linf); return numero; } void llenar_datos(int arreglo[],int tam,int vinf,int vsup){ for(int i=0;i<tam;i++){ arreglo[i]=generar_aleatorio(vinf,vsup); } }
