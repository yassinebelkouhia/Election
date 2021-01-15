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
		for(j=0 ; j<rows*2 ; j++)
		{
			if(rows>=j-i && rows<=j+i) printf("*");
			else printf(" ");
		    
			
		}
		printf("\n");
		
	}
	
	return 0;
}
