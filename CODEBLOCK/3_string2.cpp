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
    string cad1="l",cad2;
    cout <<"Ingrese la cadena"<<endl;
    //cin.getline(cad2,50,'\n');
    getline(cin,cad2);//introducir cadena en un string
    //cin.ignore(256,'\n'); //limpia
    cout<<cad2<<endl;

    if(cad1.empty()==true){
        cout <<"cadena vacia"<<endl;
    }else {
    cout <<"cadena llena"<<endl;
    }
    getch();
    return 25;

}
