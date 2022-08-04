//plantilla scanf y printf
#include<iostream>
#include<conio.h>
#include<stdio.h>
#include<string.h>
#define NULL
using namespace std;

void fun_strchr();
int main(){
    fun_strchr();
    getch();
        return 0;
}

void fun_strchr(){
    char frase1[60],frase2[60],*res;
    char letra;
    int cont=0;
    printf("Esta funcion busca una letra dentro de otra palabra\n");
    printf("Ingrese la letra a buscar\n");
    scanf("%c",&letra);
    printf("\n");
    printf("la letra es %c",letra);
    printf("\nIngrese la frase\n");
    scanf("%s",frase1);
    printf("La cadena de texto leida es:%s",frase1);
    if( strchr(frase1,letra) ){
      printf("\nla frase ingresada si contiene la letra:%c\n",letra);
    }else{
      printf("\nla frase ingresada no contiene la letra:%c\n",letra);
    }
      printf("\n");
}
