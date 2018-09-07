/* Este programa transforma un número entero dado en binario a decimal
Creado por Victor Daniel Mendoza Murillo*/

#include<stdio.h>
#include<math.h>

int main()
{

 int n,bin=0,p=1;
 printf("Ingrese el numero decimal:\n");
 scanf("%i",&n);
 //Convertir numero a binario
 while(n>0){
  bin=bin+(n%2)*p;
  n=(n/2);
  p=(p*10);
 }
 printf("Número en Binario:%i\n",bin);
return 0;
}
