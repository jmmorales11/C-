#include <iostream>
using namespace std;
int main()
{
 float matriz2x3[2][3],matriz3x4[3][4],x,y,z;

 system("cls");

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


 system("cls");

}


