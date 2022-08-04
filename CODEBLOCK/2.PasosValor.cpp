#include<iostream>//cin y cout endl
#include<conio.h>
#include<stdlib.h>
#include<stdio.h>
#include<math.h>
using namespace std;
int triplicar (int num);
int main (){
    int var1 = 0;
    cout <<"Ingrese un valor  "<<endl;
    cin>> var1;
    cout << "El valor triplicado es :"  <<triplicar(var1)<<endl;

getch();
return 0;
}

int triplicar (int num){
    return num*3;
}
