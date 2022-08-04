#include <iostream>

using namespace std;

void mostrar_letras(char[], int);
void insertar_letra(char[], int, char);
void ordenar_letras(char[], int);

int main()
{
	int n, counter = 0, pos;

	cout << "Ingrese el n numeros de letras del abecedario a almacenar: "; cin >> n;
	char abcedario[n], letra;

	for (char i = 'a'; i < 'z'; i++)
	{
		abcedario[counter] = i;
		counter++;
		if (counter == n)
			break;
	}

	mostrar_letras(abcedario, n);

	cout << "Ingrese la letra a insertar: "; cin >> letra;
	cout << "Ingrese la posicion a insertar: "; cin >> pos;
	insertar_letra(abcedario, pos, letra);
	mostrar_letras(abcedario, n);

	ordenar_letras(abcedario, n);


	return 0;
}

void mostrar_letras(char abcedario[], int n)
{
	for (int i = 0; i < n; i++)
		cout << abcedario[i] << endl;
}

void insertar_letra(char abcedario[], int pos, char letra)
{
	abcedario[pos - 1] = letra;
}

void ordenar_letras(char abcedario[], int n)
{
	char aux = abcedario[0];

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < i; j++)
		{
			if (abcedario[i] > abcedario[j] )
			{
				aux = abcedario[i] ;
				abcedario[i]  = abcedario[j] ;
				abcedario[j]  = aux;
			}

		}
	}

	mostrar_letras(abcedario, n);
}

