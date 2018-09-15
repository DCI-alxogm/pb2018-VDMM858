#include<stdio.h>
#include<math.h>

int main ()
{
    FILE *funciones;
    funciones=fopen("funciones.txt","w");
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
		fprintf(funciones,"El exponencial de X es:%f\n",xp);
		fprintf(funciones,"El logaritmo de X es:%f\n",ln);
		fprintf(funciones,"El seno de X es:%f\n",seno);
		fprintf(funciones,"El coseno de X es:%f\n",coseno);
		fprintf(funciones,"La raiz cuadrada de X es:%f\n",raiz);
		}
		}else{fprintf(funciones,"su intervalo no es correcto\n");}
   fclose(funciones); 
return 0;
}
