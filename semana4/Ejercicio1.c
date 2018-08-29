/* Este programa te da a escoger entre conversión de temperaturas o conversión de coordenadas, pero nos da la opción de realizar otra operación
Creado el 29 de Agosto de 2018*/

#include<stdio.h>
#include<math.h>

int main()
{

	int op=1;
	int opcion;
	float C,K,F,C1;
	float x,y,z,r,o,p,o1,p1;
	float x1,y1,z1,R,O,P;
	
	op=1;
	while(op==1){

	printf(" ¿Qué desea convertir? \n");
	printf("(1) para convertir temperaturas\n");
	printf("(2) para convertir coordenadas\n");

	scanf("%i",&opcion);
	
	switch(opcion)
	{
	case 1:
		printf("Esta es la opción 1\n");

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
		printf("Esta es la opción 2\n");
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
		printf("No es una opción válida\n");
		break;
		}

	printf("Presiona 1 para realizar otra conversión,presiona cualquier otra tecla para salir\n");
	scanf("%i",&op);
	}
	return 0;
}
