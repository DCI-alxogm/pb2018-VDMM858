/* Este programa calcula los numeros primos en un intervalo específico menor a 100
Creado por Victor Daniel Mendoza Murillo*/

#include <stdio.h>
int main ()
{

char c[100];
int i,j,x;

printf("Introduzca el intervalo donde quieres calcular los números primos\n");
scanf("%i",&x); 



for(i=2;i<=x;i++)
	c[i]=1;

for(i=2;i*i<x;i++) 
	if(c[i]==1) 
		for(j=i;j<=(x/i);j++)
			c[i*j]=0;



for(i=0;i<x;i++)
	if(c[i]==1)
		printf("%i\t", i);
	
}

