#include<iostream>//cin y cout endl
#include<conio.h>
#include<stdlib.h>
#include<stdio.h>
#include<math.h>
using namespace std;

int suma(int vnumero);
int main (){
int numero,sumavalores;
	do {
		cout << "ingrese el valor del numero :" << endl;
		cin >> numero;
	} while (numero<=1);
	sumavalores = suma(numero);
	cout << "La suma de los valores es : " << sumavalores << endl;
    system ("pause");
    getch();
    return 0;
}

int suma(int vnumero) {
	int acum,i,res;
	for (i=1;i<=vnumero;i++) {
		cout << i << endl;
		acum = acum+i;
		res = acum;
	}
	return res;
}
