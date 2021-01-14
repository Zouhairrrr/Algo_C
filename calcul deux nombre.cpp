#include<stdio.h>
#include<stdlib.h>
#include<math.h>
main ()
{

   


       int a,b;
       int Choix;
    
       printf ("entrer deux nomber SVP:\n",a,b);
       scanf  ("%d %d",&a,&b);
       printf ("tapez\n 1 : somme\n 2 : soustraction\n 3 : Multiplication \n 4 : D�vision et Le rest de la division\n 5 : All\n");
       scanf  ("%d",&Choix);   
        switch(Choix) 
        {
            case 1 : 
            printf ("la somme est:%d\n",a+b);
            break;
            case 2 : 
            printf("la soustraction est:%d\n",a-b);
            break;
            case 3 :
            printf ("la Multiplication est:%d\n ",a*b);
            break;
            case 4 :
            printf ("la Devision est :%d, Le rest de la division est :%d\n",a/b,(a%b));
            break;
              
            case 5 :
			printf("la resultat total est :\nSomme: %d\nSoustraction: %d\nMultiplication: %d\nDevision: %d \t le reste: %d",a+b,a-b,a*b,a/b,(a%b));
            break;
             default : printf("veillez choisir entre 1 et 5");
             break;
        }
        
  
    return(0);
    
}
