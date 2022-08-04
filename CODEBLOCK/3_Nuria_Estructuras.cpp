//El proposito del programa es leer un  arreglo de numeros enteros con 10 espacios de memoria de
// y mostrar el mismo arreglo

#include <stdio.h>
#include <stdlib.h>
int main()
{
   FILE *fichero;
   char nombre[11] = "datos5.txt";
   int dinero[10] = { 23, 12, 45, 345, 512, 345, 654, 287, 567, 124 };
   int leer[10], i;


   printf( "Fichero: %s -> ", nombre );
   if ((fichero=fopen(nombre,"w+"))==NULL)   // fopen abre un archivo de texto, el tipo es w+, el cual sirve para lectura y escritura, si existe un archvo con ese mobre, sera eliminado y creado uno nuevo.
           {  puts("No se puede abrir el archivo : datos5.txt \n");
              exit (1);
           }
   else
   {
       printf( "\nEscribiendo cantidades:\n\n" );
       for( i=0; i<10; i++ )
           printf( "%d\t", dinero[i] );

       fwrite( dinero, sizeof(unsigned int), 10, fichero ); // fwrite permite la escritura los datos en un archivo binario abierto.

       printf( "\nLeyendo los datos del fichero \"%s\":\n", nombre );
       rewind( fichero );

       fread( leer, sizeof(unsigned int), 10, fichero ); // fread permite la lectura de los datos guardados en un archivo binario.

       for( i=0; i<10; i++ )
       printf( "%d\t", leer[i] );

       if( !fclose(fichero) ) // fclose cierra manualmente al archivo abierto
         printf( "\nFichero cerrado\n" );
       else
         {
            printf( "\nError: fichero NO CERRADO\n" );
            return 1;
         }
       return 0;
   }
}
