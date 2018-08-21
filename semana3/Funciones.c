/* Este programa recibe una variable y evalua 3 funciones
Creado el 20 de Agosto de 2018 */

#include<stdio.h>
#include<math.h>

int main()
{

float x,y1,y2,y3;

printf("Ingresa el valor de la variable X:\n");
scanf("%f",&x);
y1=exp(-x);
y2=cos(x)+2*tan(x/2);
y3=log(x)+3*pow(x,2);

printf("\n El valor de la función y=exp(-x) es:%f",y1);
printf("\n El valor de la función y=cos(x)+2tan(x/2) es:%f",y2);
printf("\n El valor de la función y=ln(x)+3x^2 es:%f",y3);

return 0;
}
