/* Este es el ejemplo 5 de la semana 6*/

#include<stdio.h>

int main()

	int i,j,n;
	printf("Dime el número de elementos para trabajar\n");
	scanf("%i",&n);
	float numeros[n]; //Esta no es la manera optima de hacer una reserva de memoria dinámica

	for(j=0;j<n,j++){
	scanf("%f",&numeros[j]);
	numeros[j]*=2;
	printf("%f\n",numeros[j]);
	}
return 0;
}
