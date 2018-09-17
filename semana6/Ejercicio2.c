/* Este programa pide información de un número predeterminado de estudiantes y la almacena en arreglos 
Creado por Víctor Daniel Mendoza Murillo*/

#include<stdio.h>

int main()
{
	FILE *da;
	FILE *re;
	int N=10,i,sem1=0,sem2=0,sem3=0,sem4=0,sem5=0,sem6=0,sem7=0,sem8=0,sem9=0;
	int e[N],s[N],h=0,m=0,sexo[N]; 
   	float promedio=0,p[N];


	da=fopen("DatosEjercicio2.txt","r");
	for(i=0;i<N;i++){

		fprintf(da,"Ingrese la edad\n");
		fscanf(da,"%i",&e[i]);
		
		fprintf(da,"Ingrese el promedio\n");
		fscanf(da,"%f",&p[i]);
		promedio=promedio+p[i];
   		
		fprintf(da,"Ingrese el semestre que cursa (del 1 al 9)\n");
		fscanf(da,"%i",&s[i]);
		
			if(s[i]==1)
		    	++sem1;
			else if(s[i]==2)
		   	    ++sem2;
			else if(s[i]==3)
		        ++sem3;
			else if(s[i]==4)
			    ++sem4;
			else if(s[i]==5)
			    ++sem5;
			else if(s[i]==6)
			    ++sem6;
			else if(s[i]==7)
			    ++sem7;
			else if(s[i]==8)
			    ++sem8;
			else if(s[i]==9)
			    ++sem9;
		
		fprintf(da,"Ingrese su sexo: 1 para femenino, 0 para masculino\n");
		fscanf(da,"%i",&sexo[i]);
		if(sexo[i]==0)h++;
		else if(sexo[i]==1)m++;
		}
	fclose(da);

	re=fopen("ResultadosEjercicio2.txt","r");
	fputs("Los datos resumidos son:\n",re);
		
	fprintf(re,"El número de estudiantes de primer semestre es:%i\n",sem1);
	fprintf(re,"El número de estudiantes de segundo semestre es:%i\n",sem2);
	fprintf(re,"El número de estudiantes de tercer semestre es:%i\n",sem3);
	fprintf(re,"El número de estudiantes de cuarto semestre es:%i\n",sem4);
	fprintf(re,"El número de estudiantes de quinto semestre es:%i\n",sem5);
	fprintf(re,"El número de estudiantes de sexto semestre es:%i\n",sem6);
	fprintf(re,"El número de estudiantes de septimo semestre es:%i\n",sem7);
	fprintf(re,"El número de estudiantes de octavo semestre es:%i\n",sem8);
	fprintf(re,"El número de estudiantes de noveno semestre es:%i\n",sem9);	
	fprintf(re,"De los estudiantes %i son mujeres y %i son hombres\n",m,h);
	promedio=promedio/10;
	fprintf(re,"El promedio de los 10 alumnos es:%f\n",promedio);

	fclose(re);
    
return 0;
}
