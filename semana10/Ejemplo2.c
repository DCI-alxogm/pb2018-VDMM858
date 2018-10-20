/* Este es el segundo ejemplo de la semana 10
Creado por Víctor Daniel Mendoza Murillo*/
#include<stdio.h>

int main(int argc, char *argv[]){
	printf("El programa que estas ejecutando es %s\n",argv[0]);
	char *nombre_archivo;
	FILE *fp;
	if(argc==2){
	nombre_archivo=argv[1];
	printf("El nombre del archivo a abrir es : %s\n",nombre_archivo);
	fp=fopen(nombre_archivo,"w+");
		//Aqui se introduce lo que quieras poner
	fclose(fp);
	}
	else if(argc>2){
	printf("Más argumentos de los necesarios\n");
	}
	else{
	printf("Se requiere de al menos 1 argumento\n");
	}
	return 0;
	}

