#include<iostream>
#include<conio.h>
#include<math.h>
using namespace std;

int main(){
    int i,x, opcion;
    float b,c,k;
    do{
        c=0;
        i=0;
        do{
        cout<<" ingrece el numero de terninos" << endl;
        cin>>i;
        if(i<0 || i>20){
        cout<<" el valor de ternumios ingresado es incorrecto" <<endl;
        }
    }while(i>20 | i<1);
        for (x=1;x<=i;x++){
        b= 24/(pow(x,2));
        c =c+b;
        }
        k = (0.5)*(sqrtf(c));
        cout << " la solucion es " << k << endl;
		cout << "" << endl;
		cout << "Desea realizar otro calculo coloque el numero que desee" << endl;
		cout << "1= SI" << endl;
		cout << "2= NO" << endl;
		cin >> opcion;
    } while ((opcion==2));
	return 0;
}
