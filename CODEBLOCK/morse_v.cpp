#include<iostream>
#include<conio.h>
#include<stdlib.h>
#include<string.h>

void insertar(char cadena[]);
void morse(char cadena[]);
using namespace std;
void menu(){
   cout<<"\n";
     cout<<"\t============ CODIGO MORSE =============\n\n";
   cout<<"\t         -------------------\n";
   cout<<"\t        |1=.---- |  6=-.... |\n";
   cout<<"\t        |2=..--- |  7=--... |\n";
   cout<<"\t        |3=...-- |  8=---.. |\n";
   cout<<"\t        |4=....- |  9=..-.  |\n";
   cout<<"\t        |5=..... |  0=----. |\n";
   cout<<"\t         -------------------\n";
}


int main()
{
   char cadena[50];

   menu();
   insertar(cadena);
   morse(cadena);

   cin.get();
   return 0;
}

void insertar(char cadena[])
{
cout<<"Ingresa los numeros que desea trasnfromar a morse: \n";
cin.getline(cadena,50);

}

void morse(char cadena[]){
   cout<<"Los numeros escritos en codigo morse es: \n";

   for(int i = 0; cadena[i] != 0;++i)
   {
       cout<<"  ";
       switch (cadena[i])
       {
           case 48:
               cout<< "-----";
               break;
                   break;

           case 49:
               cout<< ".----";
               break;

           case 50:
               cout<< "..---";
               break;
                   break;

           case 51:
               cout<< "...--";
               break;

           case 52:
               cout<< "....-";
               break;
                   break;

           case 53:
               cout<< ".....";
               break;

           case 54:
               cout<< "-....";
               break;
                   break;

           case 55:
               cout<< "--...";
               break;

           case 56:
               cout<< "---..";
               break;
                   break;

           case 57:
               cout<< "----.";
               break;

            default:
               cout<<" ";
               break;
    getch ();

   system;
   }
   }
 }
