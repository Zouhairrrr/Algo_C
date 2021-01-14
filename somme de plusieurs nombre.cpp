#include<stdio.h>
#include<stdlib.h>
main ()
{
	//ecrire un programme qui calclul la somme //
	int i;
	float Nmbr;
	float Somme;
	
	
	   while(i<4)	{
	   	printf ("entrer un nombre \n");
     	scanf("%.2f",&Nmbr);
	               Nmbr +=Nmbr;
	               i ++;
		
	}
	
	printf("la somme est\n :", Nmbr);
}
