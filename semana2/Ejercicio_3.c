
/* Este programa deberá imprimir 4 operaciones cuyas variables pueden contener cualquier número real
*/

#include<stdio.h>
#include<math.h>

int main()
{

float a,b,c,d,e1,e2,e3,e4;

printf("Escribe un valor para a:\n");
scanf("%f",&a);
printf("Escribe un valor para b\n");
scanf("%f",&b);
printf("Escribe un valor para c\n");
scanf("%f",&c);
printf("Escribe un valor para d\n");
scanf("%f",&d);
e1=(a+b)*c/d;
e2=((a+b)*c)/d;
e3=(a+b)*c/d;
e4=a+(b*c)/d;
printf("\n el resultado de e=(a+b)*c/d es:%f",e1);
printf("\n el resultado de e=((a+b)*c)/d es:%f",e2);
printf("\n el resultado de e=(a+b)*c/d es:%f",e3);
printf("\n el resultado de e=a+(b*c)/d es: %f",e4);


return 0;
}

