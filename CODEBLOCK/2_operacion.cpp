#include<iostream>//cin y cout endl
#include<conio.h>
#include<stdlib.h>
#include<stdio.h>
#include<math.h>
using namespace std;
float operacion (int opcion, float numero1, float numero2);

int main (){

   int opcion,vnumero1,vnumero2;
   do {
		cout << " Ingrese la opcion " << endl;
		cout << " 1 Suma " << endl;
		cout << " 2 Resta  " << endl;
		cout << " 3 Multiplicacion " << endl;
		cout << " 4 Division" << endl;
		cout << " 5 Modulo" << endl;
		cin >> opcion;
	} while (!(opcion>=1 && opcion<=5));

	cout << "Ingrese el valor del nuemro 1" << endl;
	cin >> vnumero1;
	cout << "Ingrese el valor del numero 2" << endl;
	cin >> vnumero2;
	cout << "El valor es: " << operacion(opcion,vnumero1,vnumero2) << endl;

    system ("pause");
    getch();
    return 0;
}

float operacion (int opcion, float numero1, float numero2){
    float res, suma, resta, multiplicacion, division,modulo;
    switch(opcion){
    case 1:
        suma  = numero1 + numero2;
        return suma;
        break;
    case 2:
        resta  = numero1 - numero2;
        return resta;
        break;
    case 3:
        multiplicacion  = numero1 * numero2;
        return multiplicacion;
        break;
    case 4:
        division  = numero1 / numero2;
        return division;
        break;
    case 5:
        modulo = numero1 % numero2;
        return modulo;
        break;
}

}
