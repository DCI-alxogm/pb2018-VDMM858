/* Este es el septimo ejemplo de la semana 8 del curso
hecho por Victor Daniel Mendoza Murillo*/

#include<stdio.h>
#include<stdlib.h>
int main(){
	int i, sum=0,*num;
	
	printf("Introduce 6 numeros enteros:\n");
	num =(int*) malloc(num*sizeof(int));
	
	for(i=0; i<6; i++){
		//(num+1) es equivalente a &num[i]
		scanf("%d", &num[i]);
		
		//*(num+i) es equivalente a num[i]
		sum += num[i];
	}
	printf("Suma=%d", sum);
	return 0;
}
