/* Este programa evalua distintas funciones en un intervalo y espaciado definido por el usuario
Programa creado por Victor Daniel Mendoza Murillo*/

#include<stdio.h>
#include<math.h>

int main ()
{
	float x,xp,ln,seno,coseno,raiz;
	int in,fi,i,c;
	
	printf("Ingrese el intervalo inicial\n");
	scanf("%i",&in);
	printf("Ingrese el intervalo final\n");
	scanf("%i",&fi);
	printf("Ingrese el valor de X que desea calcular\n");
	scanf("%f",&x);
	if(in<fi){
		printf("Ingrese el numero de interacciones que desea realizar\n");
		scanf("%i",&i);
		x=in;
		for(c=i;c<=i;c++){
		
		xp=exp(x);
		ln=log(x);
		seno=sin(x);
		coseno=cos(x);
		raiz=sqrt(x);
		printf("El exponencial de X es:%f\n",xp);
		printf("El logaritmo de X es:%f\n",ln);
		printf("El seno de X es:%f\n",seno);
		printf("El coseno de X es:%f\n",coseno);
		printf("La raiz cuadrada de X es:%f\n",raiz);
		}
		}
return 0;
}

