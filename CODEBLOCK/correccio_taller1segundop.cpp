#include<iostream>//cin y cout endl
#include<conio.h>
#include<stdio.h>
#include<math.h>
using namespace std;

int main() {
    int i, termino ;
	float acumulador,w,x;
	string salir;
	do {
            acumulador = 0;
			i = 0;
		do {
			cout << "Ingrese el numero de terminos que debe tener la sumatoria " << endl;
			cin >> termino;
			if (termino<1 | termino>20) {
				cout << "Numero Invalido" << endl;
			}
		} while (!(termino>0 | termino<20));
		for (i=1;i<=termino;i++) {
			w = 24/(pow(i,2));
			acumulador = acumulador + w;
		}
		x = (0.5)*(sqrt(acumulador));
		cout << "El resultado de la exprecion con "<<termino <<" terminos es :" <<  endl;
		cout << x <<endl;
		cout << " Desea salir del Programa (S/N)" << endl;
		cin >> salir;
	} while (!(salir=="s" | salir=="S"));
	return 0;
}

