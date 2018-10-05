/* Este es el tercer ejemplo de la semana 8 del curso 
Creado por Víctor Daniel Mendoza Murillo*/

#include<stdio.h>
#include<stdlib.h>
int main(){
	int num, i, *ptr, sum=0;
	ptr=(int*) malloc(num*sizeof(int)); //con esto se reserva la memoria usando malloc
	
	printf("Introduce el número de elementos\n");
	scanf("%d",&num);
	
	if(ptr==NULL)
	{
		printf("Error! memoria no reservada.\n");
		exit(0);	
	}
	printf("Introduce los elementos del arreglo:\n");
	for(i=0; i<num; i++)
	{
		scanf("%d", ptr+i);
		sum+=*(ptr+i);
	}
	printf("Sum=%d", sum);
	free(ptr);
	return 0;
}
