//plantilla scanf y printf
#include<iostream>
#include<conio.h>
#include<stdio.h>
#include<string.h>

void fun_strlen(char*frase1,char*frase2);
void fun_strcmp(void);
void fun_strcat(char*frase1,char*Frase2);
void fun_strcpy(void);
void fun_strstr(void);
void fun_strchr();

int main(){
int opc=0;
char frase1[60],frase2[60];

   do{
      printf("Menu: de manejo de cadenas y string\n\n");
      printf("(1)Funcion STRLEN: Calcula el número de caracteres de la cadena apuntada\n");
      printf("(2)Funcion STRCMP: Compara una cadena con otra, desde el punto de vista alfabetico\n");
      printf("(3)Funcion STRCAT: Convierte una cadena en una combinacion de la primera cadena y la segunda cadena\n");
      printf("(4)Funcion STCPY: Copia el contenido de una cadena en otra cadena\n");
      printf("(5)Funcion STRSTR: Analiza una cadena en busca de la aparicion de una subcadena dada\n");
      printf("(6)Funcion STRCHR: Analiza una cadena en busca de la primera aparicion de un caracter determinado\n");
      printf("(7)Salir\n");
      printf("\nIngrese una opcion\n");
      scanf("%d",&opc);

      switch(opc)
      {
          case 1:

              printf("\nEsta funcion cuenta el numero de caracteres de la cadena\n");
              printf("\nPor favor ingrese la primera cadena\n");
              scanf("%s",frase1);
              printf("La primera cadena de texto leida es:%s\n",frase1);
              printf("\nPor favor ingrese la segunda cadena\n");
              scanf("%s",frase2);
              printf("la segunda cadena de texto leida es;%s\n",frase2);
              fun_strlen(frase1,frase2);
              printf("Gracias por usar esta funcion\n");
              break;
         case 2:
              fun_strcmp();
              printf("Gracias por usar esta funcion\n");
              break;
         case 3:

              printf("\nEsta funcion combina las dos cadenas ingresadas\n");
              printf("\nPor favor ingrese la primera cadena\n");
              scanf("%s",frase1);
              printf("La primera cadena de texto leida es:%s\n",frase1);
              printf("\nPor favor ingrese la segunda cadena\n");
              scanf("%s",frase2);
              printf("la segunda cadena de texto leida es:%s\n",frase2);
              fun_strcat(frase1,frase2);
              printf("Gracias por usar esta funcion\n");
              break;
         case 4:
                 fun_strcpy();
                 printf("Gracias por usar esta funcion\n");
                 break;
          case 5:
                 fun_strstr();
                 printf("Gracias por usar esta funcion\n");
                 break;
          case 6:
              fun_strchr();

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

  void fun_strlen(char*frase1,char*frase2){
        printf("\nLong de cadena1: %d y Long de cadena 2: %d\n",strlen(frase1), strlen(frase2));
        return;
  }

  void fun_strcmp(){
      char frase1[60],frase2[60];
      printf("\nEsta funcion hace una comparacion alfabetica entre las dos frases ingresadas\n");
      printf("\nPor favor ingrese la primera cadena\n");
      scanf("%s",frase1);
      printf("La primera cadena de texto leida es:%s\n",frase1);
      printf("\nPor favor ingrese la segunda cadena\n");
      scanf("%s",frase2);
      printf("la segunda cadena de texto leida es;%s\n",frase2);
      if(strcmp(frase2,frase1)==0){
      printf("\nLas cadenas son iguales\n");
      }else{ printf("\nLas cadenas no son iguales\n");
     }
     return;
  }
    void fun_strcat(char*frase1,char*frase2){
      strcat(frase1,frase2);
      printf("La nueva cadena1 es:%s\n",frase1);
      return;
  }
    void fun_strcpy(void){
      char frase1[60],frase2[60];
      printf("\nEsta funcion copia el contenido de la segunda cadena en la primera cadena\n");
      printf("\nIngrese la primera frase\n");
      scanf("%s",frase1);
      printf("\n");
      printf("\nIngrese la segunda cadena\n");
      scanf("%s",frase2);
      strcpy(frase1,frase2);
      printf("frase copiada:%s\n",frase1);
      printf("\n");
      return;
  }

    void fun_strstr(void){
      char frase1[60],frase2[60],palabra[60];
      printf("\nEsta funcion busca una palabra dentro de otra palabra\n");
      printf("\nIngrese la palabra\n");
      scanf("%s",palabra);
      printf("\nEl programa va a busca la plabra:%s\n",palabra);
      printf("\nIngrese la primera frase\n");
      scanf("%s",frase1);
      printf("La primera cadena de texto leida es:%s\n",frase1);
          if(strstr(frase1,palabra)){
      printf("La cadena de ingresada si contiene la palabra:%s\n",palabra);
      }
      else{
      printf("La cadena de ingresada no contiene la palabra:%s\n",palabra);
      }
      return;
  }
void fun_strchr(){
    char frase1[60];
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
