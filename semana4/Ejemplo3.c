/* Este es el ejemplo 3, lo subo 1 semana tarde*/

#include<stdio.h>

int main()
{
	float temp_C,temp_K;
	float inicial=100,final=200,delta;
	int n=10;
	char op[2];

	op[0]='s';
	delta=(final-inicial)/n;
	while(op[0]=='s'){
		temp_K=0;
		temp_C=inicial;

	while(temp_C<=final){
		temp_K=temp_C+273.15;
		printf("%f %f\n",temp_C,temp_K);
		temp_C=temp_C+delta;	//	temp_C+=delta;

	}
	
		printf("¿Deseas hacer otr operación? Presiona 1 para si, Presiona 2 para no\n");
		scanf("%s",&op);
	}
	return 0;
}
	
