#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(int argc, char *argv[])
{
char morse[10][7];
char numeros[10];
char FraseMorse[200];
char FraseNormal[200];
int contador;
int encontrado;
int contadorfrasenormal=0;
char CopiaFraseMorse[200];
char *Puntero;
char Delimitador[5]=" ";
strcpy(morse[0],"-----"); // 0
numeros[0]='0';
strcpy(morse[1],".----"); // 1
numeros[1]='1';
strcpy(morse[2],"..---"); // 2
numeros[2]='2';
strcpy(morse[3],"...--"); // 3
numeros[3]='3';
strcpy(morse[4],"....-"); // 4
numeros[4]='4';
strcpy(morse[5],"....."); // 5
numeros[5]='5';
strcpy(morse[6],"-...."); // 6
numeros[6]='6';
strcpy(morse[7],"--..."); // 7
numeros[7]='7';
strcpy(morse[8],"---.."); // 8
numeros[8]='8';
strcpy(morse[9],"----."); // 9
numeros[9]='9';
printf("\nFrase en morse:");
gets(FraseMorse);
strcpy(CopiaFraseMorse,FraseMorse);
printf("\nFrase a analizar: %s",CopiaFraseMorse);
contadorfrasenormal = 0;
printf("\ndescomposicion de la cadena en trozos\n");
Puntero = strtok( CopiaFraseMorse, Delimitador);
while(Puntero!=NULL) {
printf( "\n%s", Puntero );
contador=0;
encontrado=0;
while(contador<48 && encontrado!=1) {
if (strcmp(Puntero,morse[contador++])==0) encontrado=1;
}
if (encontrado==1) {
FraseNormal[contadorfrasenormal++]=numeros[contador-1];
printf(" %c",numeros[contador-1]);
}
Puntero = strtok( NULL, Delimitador );
}
FraseNormal[contadorfrasenormal]='\0';
printf("\nLa frase traducida es %s\n",FraseNormal);
system("PAUSE");
return 0;
}
