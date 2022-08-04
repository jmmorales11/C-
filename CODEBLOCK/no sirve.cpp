// Este codigo ha sido generado por el modulo psexport 20180802-w32 de PSeInt.
// Es posible que el codigo generado no sea completamente correcto. Si encuentra
// errores por favor reportelos en el foro (http://pseint.sourceforge.net).

#include<iostream>
#include<cmath>
using namespace std;

int main() {
	float acumulador;
	int i;
	string salir;
	int termino;
	float w;
	float x;
	do {
		do {
			acumulador = 0;
			i = 0;
			cout << "Ingrese el numero de terminos que debe tener la sumatoria " << endl;
			cin >> termino;
			if (termino<1 || termino>20) {
				cout << "Numero Invalido" << endl;
			}
		} while (!(termino>0 || termino<20));
		for (i=1;i<=termino;i++) {
			w = (24/(pow(i,2)));
			acumulador = acumulador+w;
		}
		x = (1/2)*(sqrtf(acumulador));
		cout << "El resulatdode la exprecion con terminos es :" <<x<<  endl;

		cout << " Desea salir del Programa (S/N)" << endl;
		cin >> salir;
	} while (!(salir=="s" || salir=="S"));
	return 0;
}

