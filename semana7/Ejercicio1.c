/* Este es un programa que dado un archivo lee la potencia de una función, si intervalo  y la cantidad de veces a evaluar
Creado por Victor Daniel Mendoza Murillo*/

#include<stdio.h>
#include<math.h>

int main(){
	FILE *Datos; //variable para archivo datos
	FILE *Resultados; //variable para archivo resultados 
	int a,b,i,j,p,m,k; //valores enteros
	float h,d,s,f; //valores flotantes
	float fx[m],x[m],dx[m]; //flotantes que son arreglos

	Datos=fopen("Datos.txt","r"); //abrir archivo que contiene los datos 
	//escanear dator del archivo
	fscanf(Datos,"%i",&p);
	fscanf(Datos,"%i",&a);
	fscanf(Datos,"%i",&b);
	fscanf(Datos,"%i",&m);
	fscanf(Datos,"%i",&k);

	fclose(Datos); //cerrar archivo que contiene los datos
	
	//cálculos 
	for(i=0;i<m;i++){
		x[i]=0;
		fx[i]=0;
		dx[i]=0;
	}

	d=(b-a)/m;
	
	for(i=0;i<m;i++){
		x[i]=a + (i*d);
		fx[i]=pow(x[i],p);
	}
	
	f=pow(a,p);
	
	for(i=0;i<m;i++){
		h=(x[i]-a)/k;
		s=0;
	for(j=1;j<k;j++){
		s += pow(x[i]+ h*j,p);
	}
	dx[i]=((fx[i]+f)/2.0)+s;
	}
	
	Resultados=fopen("Resultados.txt","w");

	for(i=0;i<m;i++){
		fprintf(Resultados,"%f %f %f",x[i], fx[i],dx[i]);

	}

	fclose(Resultados);
return 0;
}
	
