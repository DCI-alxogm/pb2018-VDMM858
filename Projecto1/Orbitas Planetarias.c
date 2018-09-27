/* Este es el primer proyecto del curso. Calcula la órbita de los planetas en torno al sol
Creado por Víctor Daniel Mendoza Murillo*/

#include <stdio.h>
#include <math.h>

int main() {
	FILE *Datos; 
	FILE *Resultados;
	Datos=fopen("Mercurio.txt","r");		
	int i,k,n,N;
	float xo[N],yo[N],zo[N],x,y,z,vxo[N],vyo[N],vzo[N],vx,vy,vz,G,h;
	double r;

	fscanf(Datos,"%f",&h);
	fscanf(Datos,"%f",&n);
	
	fscanf(Datos,"%f",&xo[N]);
	fscanf(Datos,"%f",&yo[N]);
	fscanf(Datos,"%f",&zo[N]);
	
	fscanf(Datos,"%f",vxo[N]);
	fscanf(Datos,"%f",vyo[N]);
	fscanf(Datos,"%f",vzo[N]);	
	
	G=0.0029592;
	x=xo[N];
	y=yo[N];
	z=zo[N];
	
	vx=vxo[N];
	vy=vyo[N];
	vz=vzo[N];

	fclose(Datos);
	
	for(i=0;i<=n;i++){
		
	r=sqrt(pow(x,2)+pow(y,2)+pow(z,2));
	
	vx=vx-((h*G)/pow(r,3));
	vy=vy-((h*G)/pow(r,3));
	vz=vz-((h*G)/pow(r,3));
	
	x=x+vx*h;
	y=y+vy*h;
	z=z+vz*h;
		
	Resultados=fopen("Resultados_Orbitas.txt","w");
	
	fprintf(Resultados,"%f\t %f\t %f\t %f\t %f\t %f\t %f\n",x,y,z,vx,vy,vz,r);
	
	fclose(Resultados);
	
	}
	
	return 0;
}
