#include<iostream>
#include<conio.h>
#include<fstream>
#include<string.h>

using namespace std;
void lectura();
int main(){
    char *nombres;
    char palabra[15];
    lectura();

    getch();
    return main();
}

void lectura(){
     ifstream archivo;
    string texto;
    char lista[50];

    archivo.open("nombres.txt",ios::in);//lectura el archivo
    if (archivo.fail()){
        cout <<"No existe el archivo"<<endl;
        exit(1);
    }
    while (!archivo.eof()){ //mientras  no sea el final  del archivo
            getline(archivo,texto);
            strcpy(lista,texto.c_str());
            cout<<texto<<endl;
    }
    archivo.close();


}

