/* Este es el ejercicio 4 de la semana 9
Creado por Victor Daniel Mendoza Murillo*/

#include<stdio.h>
float cuadrado();
int main()
{
	float x2;
	x2=cuadrado();
	printf("%f",x2);
return 0;
}
float cuadrado()
{
	float a,b;
	printf("Introduce un numero:\n");
	scanf("%f",&a);
	b=a*a;
return b;
}
