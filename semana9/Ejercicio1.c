/* Este es el primer ejercicio de la semana 9, encuentra el n�mero mayor en una lista dada en un archivo de texto
Creado por V�ctor Daniel Mendoza Murillo*/
#include<stdio.h>
#include<stdlib.h>
int main()
{
FILE *Datos;
int N=65,j;
float x=0,y,z;
float *ptr=(float*)malloc(x*sizeof(float));

printf("A continuaci�n se leera tu archivo de texto para saber cual es el n�mero mayor\n");
Datos=fopen("num_maximo.txt","r");
for (j=0;j<N;j++){ 
	fscanf(Datos,"%f\n",&ptr[j]);

if (j==1)
{
	x=ptr[j-1];
	y=ptr[j];
if(y<=x)
	z=x;
else 
	z=y;
}
if(j>1) 
	y=ptr[j];
if(z<y)
	z=y;
else
	z=z;
}
fclose(Datos);

printf("El n�mero mayor en la lista es: %f\n",z);
free(ptr);
return 0;
}
