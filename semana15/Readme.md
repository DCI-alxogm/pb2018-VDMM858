Para el ejercicio de la semana 15 se graficaron unos datos medidos por el instrumento FIRAS, 
de la radiación cósmica de fondo de microondas
Se leyeron los datos desde un archivo de texto llamado IRCF.txt
Para la gráfica se utilizó la función subplot y errorbars  

Después, se definió una función la cuál calcula la intensidad respecto a la frecuencia y la temperatura fI(x,Tt) 
Para esto se utilizaron 3 constanstes distintas (Planck, Boltzmann y la velocidad de la luz) las cuales 
fueron facilitadas por la librería scipy.constants

Después se realizaron ciclos for para generar los valores de la frecuencia 

Al final se generó una gráfica con 20 valores distintos de la frecuencia con respecto a la intensidad 

Referencias:
https://es.wikipedia.org/wiki/Radiaci%C3%B3n_de_fondo_de_microondas
https://es.wikipedia.org/wiki/Jansky_(unidad)
https://docs.scipy.org/doc/scipy/reference/constants.html
