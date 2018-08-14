/* Este es un ejemplo de if-else donde imprime si el numero es par o impar */

#include<stdio.h>

int main()
{
	int a;
	printf(" Introduce un número \n");
	scanf("%i",&a);
	if(a%2==0){
	printf(" a=%i es par\n",a);
	}else{
	printf(" a=%i es impar\n",a);
}
return 0;
}
