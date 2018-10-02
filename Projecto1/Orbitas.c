/* Este es el primer proyecto del curso. Calcula la órbita de los planetas en torno al sol
Creado por Víctor Daniel Mendoza Murillo*/

#include<stdio.h> //Incluyo las librerías que vvoy a usar
#include<math.h> //Utilizo math.h porque voy a ahcer opraciones matemáticas

int main(){ //Inicio mi programa

	FILE *Datos; 
	FILE *Resultados;


	Datos=fopen("Datos_Orbitas.txt","r");
	double xo,yo,zo,vx,vy,vz,r,h;
	float t,T,G,j;
	char planetas[20]; 
	int i;

	for(i=0; i<=8; i++){ 
		fscanf(Datos,"%s",&planetas[i]);
		fscanf(Datos,"%lf %lf %lf %lf %lf %lf", &xo,&yo,&zo,&vx,&vy,&vz);
		fscanf(Datos,"%f %f %lf",&t,&T,&h);
		
		Resultados=fopen(planetas,"w"); 
		for(j=t;j<=T+h;j+=h){ 
		G=4*pow(3.14159265359,2); 
			
			xo=xo+vx*h; 
			yo=yo+vy*h; 
			zo=zo+vz*h;

			r=sqrt(pow(xo,2)+pow(yo,2)+pow(zo,2));

			
			vx=vx-h*((G*xo)/pow(r,3));
			vy=vy-h*((G*yo)/pow(r,3));
			vz=vz-h*((G*zo)/pow(r,3));	

		
		fprintf(Resultados, "\n %f \t %lf \t %lf \t %lf \t %lf \t %lf \t %lf \n", j*365.2,xo,yo,zo,vx,vy,vz);
		} 
	}
	fclose(Resultados); 
	fclose(Datos); 
return 0; 
}
