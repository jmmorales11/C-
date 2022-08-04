#include<iostream>
#include<conio.h>
#include<ctime>
#define TAM 5
void inicializar_arreglo(float arreglo[],int tam,int valor);
void mostrar_arreglo(float arreglo[],int tam);
void ingresar_datos(float arreglo[],int tam);
float promedio_notas(float arreglo[],int tam);
//int valor_minimo(int arreglo[],int tam);
//int valor_maximo(int arreglo[],int tam);
void calcular_max_y_min(float arreglo[],int tam,float *pmax,float *pmin);
int generar_aleatorio(int linf, int lsup);
void llenar_datos(float arreglo[], int tam, int vinf, int vsup);
void valor_repetido (float arrglo[], int tam);
void cuenta( float arreglo[], int tam , float n);
void elimina(float arreglo[],int tam, float n );
void promedio_mayor_menor(float arreglo[],int tam);
void mayor_menor( float arreglo[], int tam, float promedio);
using namespace std;
int main(){
    system("cls");
    float notas[TAM], promedio, nmax,nmin, mayores, menores;
    int digito;
    cout<<"Seleccione la opccion deseada:"<<endl;
    cout<<"[1] Promedio"<<endl;
    cout<<"[2] nota maxima y minima"<<endl;
    cout<<"[3] Notas Sobre y bajo el promedio"<<endl;
    cout<<"[4] Las notas repetidas"<<endl;
    cout<<"[5] Mostrar todos "<<endl;
    cout<<"[6] Salir"<<endl;
    cin>>digito;
    switch(digito){
        case 1:
            inicializar_arreglo(notas,TAM,1);
            ingresar_datos(notas,TAM);
            mostrar_arreglo(notas,TAM);
            promedio = promedio_notas(notas,TAM);
            cout<<"\n \n El promedio es: "<<promedio<<endl;
            break;
        case 2:
            inicializar_arreglo(notas,TAM,1);
            ingresar_datos(notas,TAM);
            mostrar_arreglo(notas,TAM);
            calcular_max_y_min(notas,TAM,&nmax,&nmin);
            cout<<"\nLa nota maxima es: "<<nmax<<endl;
            cout<<"La nota minima es: "<<nmin<<endl;
            break;
        case 3:
            inicializar_arreglo(notas,TAM,1);
            ingresar_datos(notas,TAM);
            mostrar_arreglo(notas,TAM);
            promedio = promedio_notas(notas,TAM);
            cout<<"\n \n El promedio es: "<<promedio<<endl;
            mayor_menor( notas, TAM, promedio);

            break;
        case 4:
            inicializar_arreglo(notas,TAM,1);
            ingresar_datos(notas,TAM);
            mostrar_arreglo(notas,TAM);
            cout<<endl;
            valor_repetido (notas, TAM);

            break;
        case 5:
            inicializar_arreglo(notas,TAM,1);
            ingresar_datos(notas,TAM);
            //llenar_datos(notas, TAM,0,100);
            mostrar_arreglo(notas,TAM);
            promedio = promedio_notas(notas,TAM);
            calcular_max_y_min(notas,TAM,&nmax,&nmin);
            cout<<"\nLa nota maxima es: "<<nmax<<endl;
            cout<<"La nota minima es: "<<nmin<<endl;
            cout<<"El promedio es: "<<promedio<<endl;
            mayor_menor( notas, TAM, promedio);
            cout<<endl;
            valor_repetido (notas, TAM);
            break;
        case 6 :
            cout<< "Gracias" <<endl;
            return 0;
            break;
        default:
            cout<<"Numero no valido " << endl;
    }
    getch();
    return main();
}

void inicializar_arreglo(float arreglo[],int tam,int valor){
    for(int i=0;i<tam;i++){
        arreglo[i]=valor;
    }
}
void mostrar_arreglo(float arreglo[],int tam){
    for(int i=0;i<tam;i++){
        cout<<" [";
        cout<<arreglo[i]<<"";
        cout<<"]  ";
    }
}
void ingresar_datos(float arreglo[],int tam){
    for( int i=0;i<tam;i++){
            cout<<"Ingrese el valor "<<i+1<<": "<<endl;
            cin>>arreglo[i];
    }

}
float promedio_notas(float arreglo[],int tam){
    float resultado=0;
    for(int i=0;i<tam;i++){
        resultado = resultado+arreglo[i];
    }
    return resultado/tam;
}

void calcular_max_y_min(float arreglo[],int tam,float *pmax,float *pmin){
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

int generar_aleatorio(int linf,int lsup){
    int numero=0;
    numero = linf + rand() % (lsup+1 - linf);
    return numero;
}

void llenar_datos(float arreglo[],int tam,int vinf,int vsup){
    for(int i=0;i<tam;i++){
        arreglo[i]=generar_aleatorio(vinf,vsup);
    }
}
void valor_repetido (float arreglo[], int tam){
    float n ;
     for(int i=0;i<tam;i++){
            n= arreglo[i];
     if(n !=0){
        cuenta(arreglo, tam,n);
        elimina(arreglo,tam,n);
    }
    }
}
void cuenta( float arreglo[], int tam , float n){
    float x=0;
    float l;
    for(int i=0;i<tam;i++){
        if ( n== arreglo[i]){
            x++;
        l= arreglo[i];
        }
    }
    cout<<"El numero   "<<l<<" se repite "<<x<< "  veces "<<endl;

}
void elimina(float arreglo[],int tam, float n ){
    for(int i=0; i<tam;i++){
        if(n== arreglo[i]){
            arreglo[i]=0;
        }
    }
}
void calcular_numero(float arreglo[],int tam,float *pmax,float *pmin){
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
void mayor_menor( float arreglo[], int tam, float promedio){
    float mayor[tam], menor[tam];
    int i,j=0,k=0;

    for (i= 0; i< tam; i++ ){
            if( arreglo[i]>= promedio){
                mayor[j++]= arreglo[i];

            }else{
                menor[k++]=arreglo[i];
            }
    }
    cout<< " \nElementos mayores del promedio" ;
    mostrar_arreglo( mayor, j);
    cout<< " \nElementos menores del promedio" ;
    mostrar_arreglo( menor, k);
}

