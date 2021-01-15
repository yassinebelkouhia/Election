#include<stdio.h>

int main()
{
	int i;
	int j;
	int rows;
	
	printf("nb of rows ");
	scanf("%d",&rows);
	
	printf("\n\n\n");
	for(i=0 ; i<rows ; i++)
	{
		printf("\t\t\t\t\t\t");
		for(j=1 ; j<rows*2 ; j++)
		{
			if(j<i+1) printf("*");
			else printf(" ");
		    
			
		}
		printf("\n");
		
	}
	
	return 0;
}
