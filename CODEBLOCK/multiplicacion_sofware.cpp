#include<iostream>//cin y cout endl
#include<conio.h>
#include<stdlib.h>
#include<stdio.h>
#include<math.h>
using namespace std;
int main (){
    int product, multiplicand,  multiplier;

        cout <<"Enter the value of the multiplicand"<<endl;
        cin>> multiplicand;
        cout <<"Enter the value of the multiplier"<<endl;
        cin>> multiplier;
        product = multiplicand * multiplier;
        cout <<"la multiplicacion " << multiplicand << " * " << multiplier << " es: "<< product <<endl;

getch();
return 0;
}
