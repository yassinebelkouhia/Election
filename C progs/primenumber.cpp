#include<stdio.h>

int main()
{
	int a;
	int i;
	int nb=0; //nb of dividers if its equal to two the number s prime 
	
	printf("Type a: ");
	scanf("%d",&a);
	
	for(i=2 ; i<a ; i++)
	{
		if (a%i == 0)
			nb=nb+1;
	}
	
	if(nb==0) printf("%d is a prime number",a);
	else printf("%d isnt a prime number it has %d dividers",a,nb+2);
	
	return 0;
}
