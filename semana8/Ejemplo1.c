/*Este es el primer ejemplo de la semana 8 del curso
Creado por Victor Daniel Mendoza Murillo*/

#include <stdio.h>
int main (){
	int var=20; //aquí se declara la variable y su valor 
	int *ip; //aquí se declara la variable del apuntador 
	ip=&var; //aquí se asgina la dirección de la variable (var) al apuntador 
	printf("La dirección de la variable var es: %x\n",(int)&var);
	printf("Dirección guardada en el apuntador ip: %x\n",(int)ip);
	printf("El valor de *ip:%i\n",*ip);
return 0;
}
