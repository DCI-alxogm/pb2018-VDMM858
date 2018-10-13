/*Ejercicio 5 de la semana 9, usa 4 funciones de cada tipo
Creado por Victor Daniel Mendoza Murillo*/
#include<stdio.h>

void calculo1();
float calculo2(float h);
void calculo3(float x);
float calculo4();

int main()
{
	int e;
	float x,x2;
	float a;
	float xx;
	
	printf("¿Como se calculará el programa? \t 1.- Sin argumentos de entrada ni salida \t 2.- Con argumentos de entrada y salida\t 3.- Con argumentos de entrada pero sin arugmentos de salida\t 4.- Con argumentos de salida pero sin argumentos de entrada\n");
	scanf("%i",&e);

	if(e==1)
	calculo1();
	return 1;


	if(e==2)
	
	
	printf("Introduce el número que se sumará a sí mismo: \n");
	scanf("%f",&x);
	x2=x+x;
	printf("La suma de %f es %f\n",x,x2);
	return 2;

	if(e==3)
	
	
	printf("Introduce el número que se sumará a sí mismo: \n");
	scanf("%f",&a);
	calculo3(a);
	return 3;


	if(e==4)

	xx=calculo4();
	
	printf("La suma de %f es %f\n",xx);
	return 4;

return 0;
}
void calculo1()
{
	float x,x2;
	printf("Introduce el número que se sumará a sí mismo: \n");
	scanf("%f",&x);
	x2=x+x;
	printf("La suma de %f es %f\n",x,x2);
}
float calculo2(float h)
{
	return calculo2(h);
}
void calculo3(float x)
{
	float x2;
	x2=x+x;
	printf("La suma de %f es %f\n",x,x2);
	
}
float calculo4()
{
	float x,x2;
	printf("Introduce el número que se sumará a sí mismo: \n");
	scanf("%f",&x);
	x2=x+x;
	return x2;
}
