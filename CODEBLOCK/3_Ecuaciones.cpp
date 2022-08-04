//https://www.youtube.com/watch?v=8M7zmRbv4oc
#include <iostream>
using namespace std;
int main()
{
 int opcion,repetir=1;
 float matriz2x3[2][3],matriz3x4[3][4],x,y,z;
 do
 {
 cout<<"Este programa resuleve sistemas ecuaciones, de 2 y 3 incognitas"<<endl;
 cout<<"Para resolver un sistema de 2 incognitas Presiona 1"<<endl;
 cout<<"Para resolver un sistema de 3 incognitas Presiona 2"<<endl;
 cout<<"Opci\xA2n: ";
 cin>>opcion;
 while(opcion<1||opcion>2)
 {
  cout<<endl<<"Seleccione una opci\xA2n valida"<<endl;
  cout<<"Opci\xA2n: ";
  cin>>opcion;
 }
 system("cls");
 switch(opcion)
 {
  case 1:
   cout<<"Primera Ecuaci\xA2n"<<endl<<endl;
   cout<<"Ingrese el coeficiente de x: ";
   cin>>matriz2x3[0][0];
   cout<<endl;
   cout<<"Ingrese el coeficiente de y: ";
   cin>>matriz2x3[0][1];
   cout<<endl;
   cout<<"Ingrese el valor del termino independiente: ";
   cin>>matriz2x3[0][2];
   cout<<endl;
   cout<<"Segunda Ecuaci\xA2n"<<endl<<endl;
   cout<<"Ingrese el coeficiente de x: ";
   cin>>matriz2x3[1][0];
   cout<<endl;
   cout<<"Ingrese el coeficiente de y: ";
   cin>>matriz2x3[1][1];
   cout<<endl;
   cout<<"Ingrese el valor del termino independiente: ";
   cin>>matriz2x3[1][2];
   cout<<endl;
   //Resolviendo sistema con base en metodo de Gauss-Jordan
   matriz2x3[0][1]=matriz2x3[0][1]/matriz2x3[0][0];
   matriz2x3[0][2]=matriz2x3[0][2]/matriz2x3[0][0];
   matriz2x3[0][0]=matriz2x3[0][0]/matriz2x3[0][0];// Se hace 1
   //----------------------------------------------
   matriz2x3[1][1]=((-matriz2x3[1][0])*matriz2x3[0][1])+matriz2x3[1][1];
   matriz2x3[1][2]=((-matriz2x3[1][0])*matriz2x3[0][2])+matriz2x3[1][2];
   matriz2x3[1][0]=((-matriz2x3[1][0])*matriz2x3[0][0])+matriz2x3[1][0];// Se hace 0
   //-------------------------------------------------------------------
   matriz2x3[1][2]=matriz2x3[1][2]/matriz2x3[1][1];//Solucion variable y
   matriz2x3[1][1]=matriz2x3[1][1]/matriz2x3[1][1];
   //----------------------------------------------
   matriz2x3[0][2]=((-matriz2x3[0][1])*matriz2x3[1][2])+matriz2x3[0][2];//Solucion variable x
   matriz2x3[0][1]=((-matriz2x3[0][1])*matriz2x3[1][1])+matriz2x3[0][1];
   //-------------------------------------------------------------------
   x=matriz2x3[0][2];
   y=matriz2x3[1][2];
   cout<<"Soluci\xA2n: "<<endl;
   cout<<"\tx="<<x<<endl;
   cout<<"\ty="<<y<<endl;
   break;
  case 2:
   cout<<"Primera Ecuaci\xA2n"<<endl<<endl;
   cout<<"Ingrese el coeficiente de x: ";
   cin>>matriz3x4[0][0];
   cout<<endl;
   cout<<"Ingrese el coeficiente de y: ";
   cin>>matriz3x4[0][1];
   cout<<endl;
   cout<<"Ingrese el coeficiente de z: ";
   cin>>matriz3x4[0][2];
   cout<<endl;
   cout<<"Ingrese el valor del termino independiente: ";
   cin>>matriz3x4[0][3];
   cout<<endl;
   cout<<"Segunda Ecuaci\xA2n"<<endl<<endl;
   cout<<"Ingrese el coeficiente de x: ";
   cin>>matriz3x4[1][0];
   cout<<endl;
   cout<<"Ingrese el coeficiente de y: ";
   cin>>matriz3x4[1][1];
   cout<<endl;
   cout<<"Ingrese el coeficiente de z: ";
   cin>>matriz3x4[1][2];
   cout<<endl;
   cout<<"Ingrese el valor del termino independiente: ";
   cin>>matriz3x4[1][3];
   cout<<endl;
   cout<<"Tercera Ecuaci\xA2n"<<endl<<endl;
   cout<<"Ingrese el coeficiente de x: ";
   cin>>matriz3x4[2][0];
   cout<<endl;
   cout<<"Ingrese el coeficiente de y: ";
   cin>>matriz3x4[2][1];
   cout<<endl;
   cout<<"Ingrese el coeficiente de z: ";
   cin>>matriz3x4[2][2];
   cout<<endl;
   cout<<"Ingrese el valor del termino independiente: ";
   cin>>matriz3x4[2][3];
   cout<<endl;
   //Resolviendo sistema con base en metodo de Gauss-Jordan
   matriz3x4[0][1]=matriz3x4[0][1]/matriz3x4[0][0];
   matriz3x4[0][2]=matriz3x4[0][2]/matriz3x4[0][0];
   matriz3x4[0][3]=matriz3x4[0][3]/matriz3x4[0][0];
   matriz3x4[0][0]=matriz3x4[0][0]/matriz3x4[0][0];// Se hace 1
   //----------------------------------------------
   matriz3x4[1][1]=((-matriz3x4[1][0])*matriz3x4[0][1])+matriz3x4[1][1];
   matriz3x4[1][2]=((-matriz3x4[1][0])*matriz3x4[0][2])+matriz3x4[1][2];
   matriz3x4[1][3]=((-matriz3x4[1][0])*matriz3x4[0][3])+matriz3x4[1][3];
   matriz3x4[1][0]=((-matriz3x4[1][0])*matriz3x4[0][0])+matriz3x4[1][0];// Se hace 0
   matriz3x4[2][1]=((-matriz3x4[2][0])*matriz3x4[0][1])+matriz3x4[2][1];
   matriz3x4[2][2]=((-matriz3x4[2][0])*matriz3x4[0][2])+matriz3x4[2][2];
   matriz3x4[2][3]=((-matriz3x4[2][0])*matriz3x4[0][3])+matriz3x4[2][3];
   matriz3x4[2][0]=((-matriz3x4[2][0])*matriz3x4[0][0])+matriz3x4[2][0];// Se hace 0
   //-------------------------------------------------------------------
   matriz3x4[1][2]=matriz3x4[1][2]/matriz3x4[1][1];
   matriz3x4[1][3]=matriz3x4[1][3]/matriz3x4[1][1];
   matriz3x4[1][1]=matriz3x4[1][1]/matriz3x4[1][1];// Se hace 1
   //----------------------------------------------
   matriz3x4[0][2]=((-matriz3x4[0][1])*matriz3x4[1][2])+matriz3x4[0][2];
   matriz3x4[0][3]=((-matriz3x4[0][1])*matriz3x4[1][3])+matriz3x4[0][3];
   matriz3x4[0][1]=((-matriz3x4[0][1])*matriz3x4[1][1])+matriz3x4[0][1];// Se hace 0
   matriz3x4[2][2]=((-matriz3x4[2][1])*matriz3x4[1][2])+matriz3x4[2][2];
   matriz3x4[2][3]=((-matriz3x4[2][1])*matriz3x4[1][3])+matriz3x4[2][3];
   matriz3x4[2][1]=((-matriz3x4[2][1])*matriz3x4[1][1])+matriz3x4[2][1];// Se hace 0
   //-------------------------------------------------------------------
   matriz3x4[2][3]=matriz3x4[2][3]/matriz3x4[2][2];//Solucion variable z
   matriz3x4[2][2]=matriz3x4[2][2]/matriz3x4[2][2];
   //-------------------------------------------------------------------
   matriz3x4[0][3]=((-matriz3x4[0][2])*matriz3x4[2][3])+matriz3x4[0][3];//Solucion variable x
   matriz3x4[0][2]=((-matriz3x4[0][2])*matriz3x4[2][2])+matriz3x4[0][2];
   matriz3x4[1][3]=((-matriz3x4[1][2])*matriz3x4[2][3])+matriz3x4[1][3];//Solucion variable y
   matriz3x4[1][2]=((-matriz3x4[1][2])*matriz3x4[2][2])+matriz3x4[1][2];
   //-------------------------------------------------------------------
   x=matriz3x4[0][3];
   y=matriz3x4[1][3];
   z=matriz3x4[2][3];
   cout<<"Soluci\xA2n: "<<endl;
   cout<<"\tx="<<x<<endl;
   cout<<"\ty="<<y<<endl;
   cout<<"\tz="<<z<<endl;
   break;
 }
 cout<<"Para realizar otro calculo presione 1, para salir presione 0"<<endl;
 cout<<"Opci\xA2n: ";
 cin>>repetir;
 while (repetir<0||repetir>1)
 {
  cout<<endl<<"Ingrese una opci\xA2n valida"<<endl;
  cout<<"Opci\xA2n: ";
  cin>>repetir;
 }
 system("cls");
 }while(repetir==1);
}
