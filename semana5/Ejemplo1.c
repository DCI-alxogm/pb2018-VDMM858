/* Este es el primer ejemplo de la semana 5
Creado por Daniel Mendoza el lunes 3 de septiembre*/

#include<stdio.h>

int main()
{	
	float C,K;
	float inicial,final,delta;
	int n=10,i,op=1,count=0;

	delta=(final-inicial)/n;
	op=1;
	
	while(op==1){
	count++;
	for(i=0<n;i++;){
		K=C+273.15;
		printf("Ingrese los el valor de la temperatura inicial\n");
		scanf("%f",&inicial);
		printf("Ingrese los el valor de la temperatura final\n");
		scanf("%f",&final);

		printf("%f %f\n",C,K);
		C=C+delta;	//	temp_C+=delta;

	   }
printf("Presiona 1 para ejecutar de nuevo el programa, presiona 2 para salir\n");
	scanf("%i",&op);
}
return 0;
}
