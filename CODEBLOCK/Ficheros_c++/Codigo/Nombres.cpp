#include<iostream>
#include<conio.h>
#include<fstream>
#include<string.h>
using namespace std;

int main(){
    ifstream archivo;
    string texto;
    char lista[50];
    char *nombres;
    char palabra[15];
    int cont;
    archivo.open("nombres.txt",ios::in);//lectura el archivo
    while (!archivo.eof()){ //mientras  no sea el final  del archivo
            getline(archivo,texto);
            strcpy(lista,texto.c_str());
            cout<<texto<<endl;
            cout<<lista<<endl;
    }
    cout<<"Ingrese el Nombre que desea buscar:  "<< endl;
    cin>> palabra;

    while (nombres != NULL){
            nombres= strtok(lista,"\n");
        if (strcmp(nombres, palabra)==0){
            cont++;
        }
        nombres= strtok( NULL, " ");
    }
    cout << "La palabra "<<palabra<<" Se repite :  "<< cont<<endl;
    archivo.close();
    getch();
    return main();
}
