#include<stdio.h>
#include<string.h>
#include<iostream>

void fun_strlen();
void fun_strcmp();
void fun_strcat();

int main(){
    int i,j,opc=0;
char frase1[60];
char frase2[60];
   do{
      printf("Menu: de manejo de cadenas y string\n\n");
      printf("1)Funcion STRLEN: Calcula el número de caracteres de la cadena apuntada\n");
      printf("2)Funcion STRCMP: Compara una cadena con otra, desde el punto de vista alfabético\n");
      printf("3)Funcion STRCAT: Convierte una cadena en una combinación de la primera cadena y la cadena2\n");
      printf("7)Salir\n");
      printf("7)Ingrese una opcion\n");
      scanf("%d",&opc);

      switch(opc)
      {
          case 1:
              fun_strlen();
              break;
         case 2:
              fun_strcmp();
              break;
         case 3:
              fun_strcat();
              break;
         case 7:
            return 0;
            break;
         default:
         printf("\n\n\n*Ha marcado un numero incorrecto*\n\n\n");
      }
     printf("\n\n\n");
    }while(opc>=1 || opc<=7 );

    return main();
}

  void fun_strlen(){
    char frase1[60],frase2[60];
    printf("\nPor favor ingrese la primera cadena\n");
    scanf("%s",&frase1);
    printf("La primera cadena de texto leida es:%s\n",frase1);
    printf("\nPor favor ingrese la segunda cadena\n");
    scanf("%s",&frase2);
    printf("la segunda cadena de texto leida es;%s\n",frase2);
    printf("\nLong de cadena1: %d y Long de cadena 2: %d\n",strlen(frase1), strlen(frase2));

  }

  void fun_strcmp(void){
      char frase1[60],frase2[60];
      printf("\nPor favor ingrese la primera cadena\n");
      scanf("%s",&frase1);
      printf("La primera cadena de texto leida es:%s\n",frase1);
      printf("\nPor favor ingrese la segunda cadena\n");
      scanf("%s\n",&frase2);
      printf("la segunda cadena de texto leida es;%s\n",frase2);
      if(strcmp(frase2,frase1)==0){
      printf("\nLas cadenas son iguales\n");
      }
      else printf("\nLas cadenas no son iguales\n");
     }

      void fun_strcat(){
    char frase1[60],frase2[60];
      printf("\nPor favor ingrese la primera cadena\n");
      scanf("\n%s",&frase1);
      printf("La primera cadena de texto leida es:%s\n",frase1);
      printf("\nPor favor ingrese la segunda cadena\n");
      scanf("\n%s",&frase2);
      printf("La segunda cadena de texto leida es:%s\n",frase2);
      strcat(frase1,frase2);
      printf("La nueva cadena1 es:%s",frase1);
      }
