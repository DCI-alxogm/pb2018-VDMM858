/*Este es el primer ejemplo de la semana 9 del curso
Hecho por Victor Daniel Mendoza Murillo*/

#include<stdio.h>

int main(){
	void cuadrado();
	return 0;
}

void cuadrado(){
	float x,x2;
	printf("Introduce un numero:\n");
	scanf("%f",&x);
	x2=x*x;
	printf("El cuadrado de %f es: %f\n",x,x2);
}
