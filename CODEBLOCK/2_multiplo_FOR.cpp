#include<iostream> //cin y cout
#include<conio.h>
#include<stdlib.h>
#include<stdio.h>
#include<math.h>
using namespace std;
int main (){

    int cont =0;
    for (int i=1; i<=10000;i++){
        if(i%13==0) {
            cont++;
        }
    }
     cout<<"El numero de multiplo de 13 encontrado es:"<<cont<<endl;
getch();
return 0;
}
