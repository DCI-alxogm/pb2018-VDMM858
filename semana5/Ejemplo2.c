/* Este es el segundo ejemplo de la semana 5
Creado por Victor Daniel Mendoza Murillo*/

#include<stdio.h>
#include<math.h>

int main()
{
	float exp_;
	int n=10,j;

	for(j=0;j<n;j++){
		exp_=exp(j);
		printf("%i \t %f\n",j,exp_);
	}	
	return 0;
}
