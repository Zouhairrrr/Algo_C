#include<stdlib.h>	
#include<stdio.h>
#include<math.h>

main()
{
	
	
int i,Nombre;

  printf("entrer un nombre que voulez-vous calculer :\n",Nombre);
  scanf("%d",&Nombre);
  printf("voila le tableau de multiplication de votre nombre %d\n",Nombre);
 for(i=1;i<=10;i++)
   {
   	
 	printf("%d * %d = %d   \n",Nombre,i,i*Nombre);
   }
   
   return (0);
}

