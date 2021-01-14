#include<stdio.h>
#include<stdlib.h>

int howOld(int age){
	printf ("how old are you \n");
	scanf("%d",&age);
	return age;
}

main()
{
	int age;
	printf("your age is :%d\n",howOld(age));
	return 0;
}
