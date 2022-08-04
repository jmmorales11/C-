//plantilla cin y cout
#include<iostream>
#include<conio.h>
using namespace std;
//1. prototipos de funciones
float prome (int num1, int num2, int num3);
int valor_maximo (int num1, int num2, int num3);
int valor_minimo (int num1, int num2, int num3);

int main (){
    int n1,n2,n3,vmax,vmin;
    float promedio;
    cout << "Ingrese el primero termino"<<endl;
    cin>>n1;
    cout << "Ingrese el segundo termino"<<endl;
    cin>>n2;
    cout << "Ingrese el tercer termino"<<endl;
    cin>>n3;
    //LLamda a la funcion
    vmax = valor_maximo(n1,n2,n3);
    promedio = prome(n1,n2,n3);
    vmin = valor_minimo (n1,n2,n3);
    //resultados
    cout<<"El valor maximo es: "<<vmax<<endl;
    cout<<"El promedio es: "<<promedio<<endl;
    cout<<"El valor minimo es: "<<vmin<<endl;
    getch ();
    return 0;
}
int valor_maximo (int num1, int num2, int num3){
        if (num1>=num2 && num1>=num3){
        return num1;
    }else if (num2>=num1 && num2>=num3){
                return num2;
            }else if (num3>=num1 && num3>=num2){
                    return num3;
            }
}
float prome (int num1, int num2, int num3){
    return (num1+num2+num3)/3;
}
int valor_minimo (int num1, int num2, int num3){
     if (num1<=num2 && num1<=num3){
             return num1;
     }else if (num2<=num1 && num2<=num3){
             return num2;
        }else if (num3<=num1 && num3<=num2){
                    return num3;
        }
}
