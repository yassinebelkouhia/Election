#include<stdio.h>



int main()
{
	int i, j ,Min ;
	int Tab	[10];
	
	
	for(i=0 ; i<10 ; i++)
	{
		printf("Tab[%d]= ",i+1);
		scanf("%d",&Tab[i]);
	}
	
	
	for(i=0 ; i<10 ; i++)
	{
		printf(" %d\t ",Tab[i]);
	}
	
	
	for(i=0 ; i<10 ; i++)
	{
		Min+i;
		for(j=i+1 ; j<10 ; j++)
		{
			if(Tab[Min]>Tab[j]) Min=j;
		}
	}
	
	printf("nn\n\n\n\n\n\n\n\n\n\n\t\t\t\t%d",Tab[Min]);
	
	
	return 0;
}
