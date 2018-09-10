/*Este es un programa que combina los 3 primeros ejemplos de la semana 6*/

#include<stdio.h>

int main(){

int i,x=10;
float numeros[x];

	for(i=0;i<x;i++){
		numeros[i]=0; //Asigna el valor 0 a cada uno de los elementos del arreglo
		}

	for(i=0;i<x;i++){
		scanf("%f",&numeros[i]); //Asigna el valor a partir de lo que proporciona el usuario 
		}
	
	for(i=0;i<x;i++){
		printf("%f\n",numeros[i]); //Imprime a la pantalla el valor del elemento i-esimo del arreglo 
		}

	return 0;
}
