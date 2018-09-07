/* Este programa calcula el factorial de un nímero dado por el usuario
Creado por Victor Daniel Mendoza Murillo*/

#include<stdio.h>
#include<math.h>

int main()
{
        int i,op,fact=1,n,r;
         op=1;
         while(op==1)
         {



        printf("Ingresa el número que deseas calcular su factorial\n");
        scanf("%i",&n);
        if (n<0)fact=0;
        else if(n==0) fact=1;
        else{
                for(i=1;i<=n;i++)

        {
                        fact=fact*i;

        r=fact;
        


        }
                printf(" El valor factorial es:%i\n",r);
                fact=1;

        }


        printf("Presiona 1 para volver a ejecutar el progrma, Presiona 2 para salir\n");
 scanf("%i",&op);
}
return 0;
}
