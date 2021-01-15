#include<stdio.h>

int main ()
{
	int a;
	int b;
	int pgcd;
	int i=1;
	
	printf("donnez a:");
	scanf("%d",&a);
	printf("donnez b:");
	scanf("%d",&b);
	
	for(i=1; i<=a && i<=b ; i++)
	    pgcd=i;
	printf("le pgcd de %d et %d est %d",a,b,pgcd);
	
	return 0;
	
}
