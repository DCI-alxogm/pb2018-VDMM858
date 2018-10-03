/* Este es el segundo ejemplo de la semana 8
Creado por Victor Daniel Mendoza Murillo */

#include <stdio.h>
int main(){
	int MAX=3;
	int var[]={10,100,200};
	int i,*ptr;
	//Se asigna la direeción al arreglo del apuntador
	ptr = &var;
	
	for(i=0;i<MAX;i++){
		printf("La dirección de la variable var[%d]=%x\n",i,ptr); //para la dirección del apuntador no se usa *
		printf("Valor de la variable var[%d]=%d\n",i,*ptr); //para los valores de un apuntador se usa *

	//con esto nos vemos a la siguiente posición en el apuntador (cada 4 bytes)
		ptr++;
	}
return 0;
}
