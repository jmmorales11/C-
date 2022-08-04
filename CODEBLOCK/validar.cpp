#include<iostream>//cin y cout endl
#include<conio.h>
#include<stdlib.h>
#include<stdio.h>
#include<math.h>
using namespace std;
float calcular_promedio ( float n1, float  n2, float  n3);
int valor_maximo (int n1, int n2, int n3);
int valor_minimo (int n1, int n2, int n3);
int main (){
    int num1, num2, num3, vmax, vmin;
    float promedio ;

       	do {
		cout << " Ingrese el numero 1" << endl;
		cin >> num1;
		if (num1<=0 || num1>=100) {
			cout << "el numero no valido" << endl;
		}
	} while (!(num1>0 && num1<100));
	do {
		cout << " Ingrese el numero 2" << endl;
		cin >> num2;
		if (num2<=0 || num2>=100) {
			cout << "el numero no es valido" << endl;
		}
	} while (!(num2>0 && num2<100));
	do {
		cout << " Ingrese el numero 3" << endl;
		cin >> num3;
		if (num3<=0 || num3>=100) {
			cout << "el numero no es valido" << endl;
		}
	} while (!(num3>0 && num3<100));
        vmax = valor_maximo(num1,num2,num3);
        promedio = calcular_promedio(num1,num2,num3);
        vmin = valor_minimo(num1,num2,num3);
        cout <<" El valor max es:"<<vmax<<endl;
        cout <<" El valor min es:"<<vmin<<endl;
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

int valor_minimo(int n1, int n2, int n3){
    if (n1<= n2 && n1<= n3){
        return n1;
    }else if (n1<=n2 && n1<=n3){
        return n2;
    }else{
        return n3;
    }
}
float calcular_promedio(float n1, float  n2, float  n3){
    return (n1+n2+n3)/3;
}
