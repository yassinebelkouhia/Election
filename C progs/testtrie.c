#include<stdio.h>


int main()
{
	int Tab[10];
	int i , j , Max , Aide;
	
	for(i=0 ; i<10 ; i++)
	{
		printf("Tab[%d]= ",i+1);
		scanf("%d",&Tab[i]);
	}
	
	
	for(i=0 ; i<10 ; i++)
	{
		printf(" %d -- ",Tab[i]);
	}
	
	for (i=0; i<10; i++)
     {
      
      Max=i;
      for (j=i+1; j<10; j++)
          if (Tab[j]>Tab[Max]) Max=j;
      
      Aide=Tab[i];
      Tab[i]=Tab[Max];
      Tab[Max]=Aide;
      
     }
     
     printf("\n\n\n\n\n");
     system("pause > null");
     for(i=0 ; i<10 ; i++)
	{
		printf(" %d -- ",Tab[i]);
	}
}

