#include<iostream>//cin y cout endl
#include<conio.h>
#include<stdlib.h>
#include<stdio.h>
#include<math.h>
using namespace std;
float calcular_promedio ( float n1, float  n2, float  n3);
int valor_maximo (int n1, int n2, int n3);
int main (){
    int num1, num2, num3, vmax;
    float promedio ;

        cout <<" ingrese el num 1"<<endl;
        cin>>num1 ;
        cout <<" ingrese el num 2"<<endl;
        cin>>num2 ;
        cout <<" ingrese el num 3"<<endl;
        cin>>num3 ;
        vmax = valor_maximo(num1,num2,num3);
        promedio = calcular_promedio(num1,num2,num3);
        cout <<" El valor max es:"<<vmax<<endl;
         cout <<" El valor promedio es:"<<promedio <<endl;
getch();
return 0;
}

int valor_maximo(int n1, int n2, int n3){
    if (n1>= n2 && n1>= n3){
        return n1;
    }else if (n1>=n2 && n1>=n3){
        return n2;
    }else{
        return n3;
    }
}


float calcular_promedio(float n1, float  n2, float  n3){
    return (n1+n2+n3)/3;
}
