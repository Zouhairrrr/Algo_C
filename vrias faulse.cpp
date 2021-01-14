#include<stdio.h>
#include<stdlib.h>
#define MAX(a,b) (a>b)
#define true 1
#define false 0


 main ()
 {
 	int a,b;
 	
 	printf("enter les deux nombre que voulez vous comparées:\n");
 	scanf("%d %d",&a,&b);
 	if (MAX (a,b) == true)
	 {
 		printf(" %d est superieur de %d",a,b);
 		
	 }
	 else
	  {
	 	printf ("%d est inferieur de %d",a,b);
	  }
 	
 	
 }
