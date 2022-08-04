//El proposito del programa es mostrar en un formulario datos preestablecidos

#include <stdio.h>
#include <string.h>

struct formulario {
  char nombres[200];
  char apellidos[200];
  char edad[3];
};

int main(){

  struct formulario persona;


  FILE *salida;

  strcpy(persona.nombres,"Miguel Adrian"); // La funcion strcpy copia el contenido de una cadena en otra cadena
  strcpy(persona.apellidos, "Gonzalez Gabela");
  strcpy(persona.edad, "20");



  salida = fopen("./datos_8280.txt", "wb"); // Se abre un archivo de tipo "wb" abre un archivo binario para la escritura y lectura.


  if(salida == NULL) { printf("No se pudo abrir el archivo... \n");
                       return -1;
                     }


  fwrite(&persona, sizeof(struct formulario), 1, salida);  // fwrite permite la escritura los datos en un archivo binario abierto.


  salida = fopen("./datos_8280.txt", "rb");


  if(salida == NULL) { printf("No se pudo abrir el archivo... \n");
                       return -1;
                     }

  fread(&persona, sizeof(struct formulario), 1, salida); // fread permite la lectura de los datos guardados en un archivo binario.

  printf("\n%s",persona.nombres);
  printf("\n%s",persona.apellidos);
  printf("\n%s",persona.edad);

  fclose(salida);  // fclose cierra manualmente al archivo abierto

  return(0);
}
