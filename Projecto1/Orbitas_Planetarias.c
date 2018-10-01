/* Este es el primer proyecto del curso. Calcula la órbita de los planetas en torno al sol
Creado por Víctor Daniel Mendoza Murillo*/

#include <stdio.h>
#include <math.h>

int main() {
	FILE *Datos; 
	FILE *Resultados;
	Datos=fopen("Datos_Orbitas.txt","r");		
	int i,N;
	char Planetas[10];
	double xo,yo,zo,vx,vy,vz,G,t,h,Ms,Mp,n,r;
	
	G=4.0*pow(3.14159265359,2);
	N=10;
	
	for(i=0;i<N;i++){
	fscanf(Datos,"%s",&Planetas);
	fscanf(Datos,"%lf",&Ms);
	fscanf(Datos,"%lf",&Mp);
	fscanf(Datos,"%lf",&h);
	fscanf(Datos,"%lf",&n);
	fscanf(Datos,"%lf",&xo);
	fscanf(Datos,"%lf",&yo);
	fscanf(Datos,"%lf",&zo);
	fscanf(Datos,"%lf",vx);
	fscanf(Datos,"%lf",vy);
	fscanf(Datos,"%lf",vz);	
	
	vx=vx*365.242;
	vy=vy*365.242;
	vz=vz*365.242;

	fclose(Datos);
	
	for(i=0;i<=N;i++){
		
	r=sqrt(pow(xo,2)+pow(yo,2)+pow(zo,2));
	vx=vx-h*((G*Ms*xo)/pow(r, 3));
	vy=vy-h*((G*Ms*xo)/pow(r, 3));
	vz=vz-h*((G*Ms*xo)/pow(r, 3));	
	
	xo=xo+vx*h;
	yo=yo+vy*h;
	zo=zo+vz*h;
		
	Resultados=fopen("Resultados_Orbitas.txt","w");
	
	fprintf(Resultados,"%lf %lf %lf %lf %lf %lf }\n",xo,yo,zo,vx,vy,vz);
	
	fclose(Resultados);
	
	}
	}
	return 0;
}
