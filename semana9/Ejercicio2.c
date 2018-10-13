/* Este es el segundo ejercicio de la semana 9, calcula el promedio de numeros dados en un archivo
Creado por Víctor Daniel Mendoza Murillo*/
#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main()
{
FILE *Datos;
int j,N=0;
float s=0;
float*ptr=(float*)malloc(N*sizeof(float));

printf("¿Cuantos datos hay en tu archivo?\n");
scanf("%i",&N);
Datos=fopen("promedio.txt","r");
for (j=0;j<N;j++)
{
	fscanf(Datos,"%f\n",&ptr[j]);
	s=s+ptr[j];
}
fclose(Datos);
s=s/N;
printf("El promedio es: %f\n",s);
free(ptr);
return 0;
}
