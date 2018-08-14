/* Esto es un ejemplo del comando switch */

#include<stdio.h>

int main()
{

	int opcion;

	printf(" Teclea una opción \n");
	printf("(1) para convertir temperaturas");
	printf("(2) para convertir coordenadas");

	scanf("%i",&opcion);

	switch(opcion)
	{
	case 1:
		printf("Esta es la opción 1");
		break;
	case 2:
		printf("Esta es la opción 2");
		break;
	default:
		printf("No es una opción válida");
		break;
	}
}

