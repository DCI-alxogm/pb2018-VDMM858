/* Este programa te da a escoger entre conversión de temperaturas o conversión de coordenadas
Creado el 23 de Agosto de 2018*/

#include<stdio.h>

int main()
{

	int opcion;
	float C,K,F,C1;
	float x,y,z,r,o,p,o1,p1;
	float x1,y1,z1,R,O,P;

	printf(" Teclea una opción \n");
	printf("(1) para convertir temperaturas");
	printf("(2) para convertir coordenadas");

	scanf("%i",&opcion);

	switch(opcion)
	{
	case 1:
		printf("Esta es la opción 1");

		printf("Ingresa la temperatura en °C:\n");
		scanf("%f",&C);

		K=C+273.15;
		F=(9*C)/5+32;
		C1=(F-32)/1.8;

		printf("\n Su valor en K es:%f",K);
		printf("\n Su valor en °F es:%f",F);
		printf("\n Su valor de °F a °C es:%f",C1);

		break;

	case 2:
		printf("Esta es la opción 2");
		printf("Ingrese una coordenada X:\n");
		scanf("%f",&x);
		printf("Ingrese una coordenada Y:\n");
		scanf("%f",&y);
		printf("Ingrese una coordenada Z:\n");
		scanf("%f",&z);

		r=sqrt((x*x)+(y*y)+(z*z));
		o=acos(z/r);
		p=atan(y/x);
		o1=o*57.296;
		p1=p*57.296;

		printf("\n El valor para r es:%f",r);
		printf("\n El valor para θ en grados es:%f",o1);
		printf("\n El valor para φ en grados es:%f",p1);

		x1=r*sin(o1)*cos(p1);
		y1=r*sin(o1)*sin(p1);
		z1=r*cos(o1);

		printf("\n El valor de X es:%f",x1);
		printf("\n El valor de Y es:%f",y1);
		printf("\n El valor de Z es:%f",z1);
		break;

	default:
		printf("No es una opción válida");
		break;
	}
}

