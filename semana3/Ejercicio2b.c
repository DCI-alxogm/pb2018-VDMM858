/* Este programa convierte coordenadas cartesianas a polares y te indica el cuadrante en el que estan ubicados
Creado el 23 de Agosto de 2018*/

#include<stdio.h>
#include<math.h>

int main()
{
 float x,y,x1,y1;

	printf("Escribe tu coordenada X:\n");
	scanf("%f",&x);
	printf("Escribe tu coordenada Y:\n");
	scanf("%f",&y);

	x1=sqrt(pow(x,2)+pow(y,2));
	y1=atan(x/y);

	printf("X polar es: %f\n",x1);
	printf("Y polar es; %f\n",y1);
	
	if((x1>0)&&(y1>0)){
			printf("Tu coordenada se encuentran en el primer cuadrante\n");
	}
	if ((x1<0)&&(y1>0)){
			printf("Tu coordenada se encuentran en el segundo cuadrante\n");
	}
	if ((x1<0)&&(y1<0)){
			printf("Tu coordenada se encuentran en el tercer cuadrante\n");
	}
	if ((x1>0)&&(y1<0)){	
			printf("Tu coordenada se encuentran en el cuarto cuadrante\n");
	}
	return 0;
}
