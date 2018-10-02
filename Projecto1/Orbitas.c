/* Este es el primer proyecto del curso. Calcula la órbita de los planetas en torno al sol
Creado por Víctor Daniel Mendoza Murillo*/

#include<stdio.h> //Librería base
#include<math.h> //Se usa para opraciones matemáticas

int main(){ //

	FILE *Datos; //Se declara archivo para datos
	FILE *Resultados;//Se declara archivo para resultados


	Datos=fopen("Datos_Orbitas.txt","r");//Se abre el archivo con los datos
	double xo,yo,zo,vx,vy,vz,r,h; //variables tipo doble
	float t,T,G,j;//variables tipo flotante
	char planetas[20];//arreglo para string
	int i;//variable entera

	for(i=0; i<=8; i++){ //se inicia for para ir almacenando los datos (en este caso 9 veces)
		fscanf(Datos,"%s",&planetas[i]);//escanea los nombres de los planetas
		fscanf(Datos,"%lf %lf %lf %lf %lf %lf", &xo,&yo,&zo,&vx,&vy,&vz);//escanea posiciones y velocidades de los planetas
		fscanf(Datos,"%f %f %lf",&t,&T,&h);//escanea el tiempo y el parámetro de tiempo que se irá sumando 
		
		Resultados=fopen(planetas,"w");//se abre el archivo para los resultados
		for(j=t;j<=T+h;j+=h){//se inicia el for con el cúal se aplica el método de Euler para el calculo de la orbita en determinado tiempo
		G=4*pow(3.14159265359,2);//calcula el valor de G 
			
			//con estas formulas se calculas las nuevas posiciónes conforme pase el tiempo
			xo=xo+vx*h; 
			yo=yo+vy*h; 
			zo=zo+vz*h;

			r=sqrt(pow(xo,2)+pow(yo,2)+pow(zo,2));//calcula la distancia entre el planeta y la estrella (en este caso el sol)

			//con estas formulas se calculan las nuevas velocidades
			vx=vx-h*((G*xo)/pow(r,3));
			vy=vy-h*((G*yo)/pow(r,3));
			vz=vz-h*((G*zo)/pow(r,3));	

		
		fprintf(Resultados, "\n %f \t %lf \t %lf \t %lf \t %lf \t %lf \t %lf \n", j*365.2,xo,yo,zo,vx,vy,vz);//se imprimen los resultados en el archivo de texto
		} 
	}
	//se cierran ambos archivos de texto
	fclose(Resultados); 
	fclose(Datos); 
return 0; 
}
