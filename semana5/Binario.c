 /*Este programa te da la opción de convertir binario a decimal o viceversa
 Creado por Víctor Daniel Mendoza Murillo*/
 
#include<stdio.h>
#include<math.h>
int main()
{
	int N,bin,m,op;
	int dec=0,b=1;
	int n,bin2=0,p=1;

    printf("Presiona 1 para convertir binario a decimal, presiona 2 para decimal a binario\n");
    scanf("%i",&op);

    switch(op){
    case 1:

    printf("Introduce tu número binario \n");
    scanf("%d",&N);
    bin=N;
    
    while(N>0)
    {
        m=N % 10;
        dec=dec+m*b;
        N=N/10;
        b=b*2;
    }
    printf("Tu número binario a decimal es:%d\n",dec);
break;

case 2:
	printf("Ingrese el numero decimal:\n");
	scanf("%i",&n);
	
	while(n>0){
	bin=bin+(n%2)*p;
	n=(n/2);
	p=(p*10);
 }
 printf("Número en Binario:%i\n",bin);
    }
  return 0;
}
