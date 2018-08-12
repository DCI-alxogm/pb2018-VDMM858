/* Este programa convierte unidades de temperatura.
Creado el 20 de Agosto de 2018 */

#include<stdio.h>
#include<math.h>

int main()
{

float C,K,F,C1;


printf("Ingresa la temperatura en °C:\n");
scanf("%f",&C);

K=C+273.15;
F=(9*C)/5+32;
C1=(F-32)/1.8;

printf("\n Su valor en K es:%f",K);
printf("\n Su valor en °F es:%f",F);
printf("\n Su valor de °F a °C es:%f",C1);

return 0;
}
