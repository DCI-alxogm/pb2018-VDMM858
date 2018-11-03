#include<stdio.h>
#include<math.h>

void proyecto(){
//Se declaran las variables 
	FILE *Parametros;
	FILE *Inicial;
	FILE *Resultados; 
	
	float norte, sur, este, oeste;
	int N, n, i, j, x, w;
	
	//Archivo de tipo reading que lee los parámetros de la placa 
	Parametros=fopen("Parametros.txt","r");//Abrimos el archivo y se lee
	fscanf(Parametros, "%f %f %f %f %i", &norte, &sur, &este, &oeste, &n);	//Escanea el valor de los parámetros
	fclose(Parametros);		//Se cierra el archivo
	
	//Abrimos el archivo donde se escribirán los datos de la placa inicial, de tipo write
	Inicial=fopen("Inicial.txt","w");
	
	//Al ser una matriz cuadrada se da solo el valor de n, ya que el número de filas y columnas esta dado por n*n
	//Se hace un ciclo for anidado para asignar los valor a la matriz, un arreglo para cada borde y otro para el valor inicial de los puntos (el cual es cero)
	float matriz[n][n];
		for(i=0;i<n;i++){ 
			for(j=0;j<n;j++){
			if(i==0){
				matriz[i][j]=norte;
			}
			else if(i==(n-1)){
				matriz[i][j]=sur;
			}
			else if(j==(n-1)){
				matriz[i][j]=este;
			}
			else if(j==0){
				matriz[i][j]=oeste;
			}
			else{
				matriz[i][j]=0;
			}
			fprintf(Inicial,"% .f \t", matriz[i][j]);		//Imprime la placa inicial en el archivo, sin valores después del punto aunque sea de tipo flotante
		}
		fprintf(Inicial, "\n");		//Da un espaciado entre los valores para fines estéticos 
	}
	fclose(Inicial);		//Cerramos el archivo donde se hizo la placa inicial
	
for(w=0;w<26;w++){
	char iteracion [7]={'1','A', '.', 't', 'x', 't', '\0'}; //String para poder guardar en archivos diferentes 
	iteracion [1]=iteracion [1]+w;

	Resultados = fopen(iteracion , "w");
	// En este ciclo se imprimen las iteraciones en diferentes archivos
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			fprintf(Resultados,"%.3f\t", matriz[i][j]); //Imprime cada matriz en diferentes archivos 
		}
		fprintf(Resultados, "\n");		
	}
	fprintf(Resultados, "\n");

	fclose(Resultados);		//Cerramos el archivo de tipo write 

	for(j=1;j<n-1;j++){
		for(i=1;i<n-1;i++){
			matriz[j][i]=(matriz[j+1][i]+matriz[j-1][i]+matriz[j][i+1]+matriz[j][i-1])/4;	//Ecuación Gauss-Seidel que nos dice la temperatura en cada punto de la placa 	
			}
		}
	}

}
