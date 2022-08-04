#include <string.h>
#include <stdio.h>
#include<iostream>
int main(void)
{
   char destination[25]="hola";
   char *blank = "      .hola", *c = "C++", *Borland = "Borland";

   //strcpy(destination, Borland);
   strcat(destination, blank);
   //strcat(destination, c);

   printf("%s\n", destination);
   strlen(destination);
   printf ("%d",destination);
   return 0;
}
