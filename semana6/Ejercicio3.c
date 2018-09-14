#include<stdio.h>
#include<math.h>

int main ()
{
    FILE *fp;
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
		}else{printf("su intervalo no es correcto\n");}
    fp=fopen("func.txt","w");
    fputs("El resultado de las funciones evaluadas es:\t",fp);
    for(x=0;x<=i;x++){
    fprintf(fp,"exp=%f \t seno=%f \t cos=%f \t raiz=%f \t ln=%f \n",xp,seno,coseno,raiz,ln);
    } 
return 0;
}
