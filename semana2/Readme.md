En cada ejercicio de ésta semana utilizamos una serie de códigos básicos en el lenguaje C

Para empezar, añadimos un comentario, esto se hace /*Tu comentario*/
Luego debemos agregar las librerías necesarias para nuestro programa
Las funcion #include sirve para incluir declaraciones específicas de ciertas librerias, por ejemplo #include<stdio.h> que significa Standard Input-Output, contiene a las librerias estándar de C.
También tenemos #include<math.h> que es una librería estándar de C diseñada para poder realizar operaciones matemáticas básicas.

Los programas tienen una "funcion maestra". Ésta semana usamos int main()
Después del int main debemos abrir corchetes {, esto es muy importante ya que así iniciamos el "cuerpo del programa" donde se escriben todas las instrucciones. 
Al finalizar con las instrucciones debemos cerrar el cuerpo del programa, para esto cerramos corchetes }.

Cuando programamos en C y vamos a usar variables, debemos declarar cada una de ellas.
Existen varios tipos de variables. Esta semana usamos las siguientes:

char: Esta variable nos sirve para caracteres (nombres, ciudades, etc.)
int: Esta variable es de tipo entero, nos sirve para números enteros (1,27,500, etc.)
float: Esta variable es de tipo flotante, la usamos para cualquier numero real (1.4324, 10.27, etc.)

A la hora de dar instrucciones a nuestro programa, debemos especificar el tipo de instrucción:

printf: La instruccions printf significa "imprimir a la pantalla", lo que hace es mostrar cierto mensaje a la pantalla, se debe usar de la siguiente forma:
printf("El texto que quieres mostrar a la pantalla");

scanf: Sirve para pedir datos al usuario. Estos datos serán asignados a una variable previamente definida, la manera de usarla es la siguiente:
scanf(%i",&variable); donde %i nos está indicando el tipo de variable (i=int, f=float, etc.) y &variable nos indica a que variable se le asiganará el valor 

Al concluir con el programa y antes de cerrar el cuerpo utilizando "}" podemos utilizar la funcion return 0, ésta indica que el programa ha concluido satisfactoriamente y sin ningún tipo de error.


