#include<iostream>//cin y cout endl
#include<conio.h>
#include<stdlib.h>
#include<stdio.h>
#include<math.h>
using namespace std;
int triplicar (int num);
int main (){
    int var1 = 0, res=0, res1;
    cout <<"Ingrese un valor  "<<endl;
    cin>> var1;
    res= triplicar(var1);
    res1= triplicar(var1);
    cout << "El valor triplicado es :"  <<res<<endl;
    cout << "El valor triplicado es :"  <<res1<<endl;

getch();
return 0;
}

int triplicar (int num){

    return num*3;
}
