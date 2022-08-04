#include<iostream>//cin y cout endl
#include<conio.h>
#include<stdlib.h>
#include<stdio.h>
#include<math.h>
#include<ctime>
#include<time.h>
#include <stdlib.h>
#include<string.h>

using namespace std;

int main (){
    string cad1="Hola", cad2="python";
    char cad3[59];
    //cad1.swap(cad2);//intercambia cadena
    //cout<<cad1<<endl;
    //cout<<cad2<<endl;
    strcpy(cad3,cad1.c_str()); //caddena.c_str = trasforma el string a cadena tipo char
    cout<<cad3<<endl;
    cout <<cad1[2]<<endl;
    cout << cad1.at(2)<<endl;
    getch ();
    return 25;

}
