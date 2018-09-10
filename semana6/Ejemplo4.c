/* Este es el ejemplo 4 de la semana 6*/

#include<stdio.h>

int main(){

int i,x;
float numeros[x];

for (i=0;i<x;i++){
	scanf("%f",&numeros[i]);
	numeros[i]*=2; //Multiplica el número dado por 2.
	printf("%f\n",numeros[i]); //Imprime el valor del arreglo modificado
	}
return 0;
}
