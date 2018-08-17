
/* Este programa deberá imprimir 4 operaciones con variables de numeros enteros
*/

#include<stdio.h>
#include<math.h>

int main()
{

int a,b,c,d,e1,e2,e3,e4;

printf("Escribe un valor para a:\n");
scanf("%i",&a);
printf("Escribe un valor para b\n");
scanf("%i",&b);
printf("Escribe un valor para c\n");
scanf("%i",&c);
printf("Escribe un valor para d\n");
scanf("%i",&d);
e1=(a+b)*c/d;
e2=((a+b)*c)/d;
e3=(a+b)*c/d;
e4=a+(b*c)/d;
printf("\n el resultado de e=(a+b)*c/d es:%i",e1);
printf("\n el resultado de e=((a+b)*c)/d es:%i",e2);
printf("\n el resultado de e=(a+b)*c/d es:%i",e3);
printf("\n el resultado de e=a+(b*c)/d es: %i",e4);


return 0;
}

