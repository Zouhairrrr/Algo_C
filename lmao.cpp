#include<stdio.h>
#include<stdlib.h>
#include<math.h>

/*void  saisir (float *a, float *b, float *c )
{
 	printf("a=");
 	scanf("%f",&a);
 	printf("b=");
 	scanf("%f",&b);
 	printf("c=");
 	scanf("%f",&c);}
  */
 
 main()
 {

 float Delta,X1,X2,x;
 int a,b,c;
 
 
 printf ("entrer a,b et c :\n");
 scanf("%d %d %d",&a,&b,&c);

 Delta = pow(b,2)-(4*a*c);
   if (a==0 && b==0 && c==0)
    {
   	printf("tout reel est une solution de l'equation\n");
    }
	   else if (a==0 && b==0)
	    {
   	     printf ("l'equation admet aucune solutions dans R\n");
        }
	         else if (a==0)
	         {
   	          printf("l'equation admet une solution est: %f\n",(double)c/b);
             }
	               else if (Delta>0)
	               {
                    	X1 = (-b+sqrt(Delta))/2*a;
	                    X2 = (-b-sqrt(Delta))/2*a;
	                    printf("les deux solutions de l'equations est X1 = %lf \n X2 = %lf",X1,X2);
	               }
						else if (Delta=0)
						{
						printf("l'equation admet une solution X1 est %f",(double)c/b);
						}
								else
								{
								printf("l'equation admet aucune solution dans R\n");
								}
								
								
return 0;
 }
