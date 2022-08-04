#include<iostream>//cin y cout endl
#include<conio.h>
#include<stdlib.h>
#include<stdio.h>
#include<math.h>
using namespace std;


int main (){
   /* int num1 = 45, *p_num1;
    int num2 = 50;
    p_num1= &num1;
    cout <<" Contenido de num1:  "<<num1<<endl;
    cout <<"Direccion de memoria de num1;   "<<&num1<<endl;
    cout <<" Contenido de p_num1:  "<<p_num1<<endl;
    cout <<"Direccion de memoria de p_num1 ;   "<<&p_num1<<endl;

*/
int num1 = 45, num2=50,res, *p_num1, *p_num2;
    p_num1= &num1;
    p_num2= &num2;
    cout <<" Contenido de num1:  "<<num1<<endl;
    cout <<"Direccion de memoria de num1;   "<<&num1<<endl;
    cout <<" Contenido de num2:  "<<num2<<endl;
    cout <<"Direccion de memoria de num2;   "<<&num2<<endl;
    cout <<" Contenido de p_num1:  "<<p_num1<<endl;
    cout <<"Direccion de memoria de p_num1 ;   "<<&p_num1<<endl;
    cout <<" Contenido de p_num2:  "<<p_num2<<endl;
    cout <<"Direccion de memoria de p_num2 ;   "<<&p_num2<<endl;
    res= *p_num1;// res=num1;
    cout <<" Contenido de res:  "<<res<<endl;

    getch();
    return 0;
return 0;
}

