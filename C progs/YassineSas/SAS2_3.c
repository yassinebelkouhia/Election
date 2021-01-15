#include<stdio.h>
#include<windows.h>>


int main()
{
	char PresidentsNominees[50][50];
	int Electeurs[100];
	int i , j , n , m;
	int VotesCont[100], Votes[100];
	
	
	
	do
	{
		printf("\n\n\t\t\t\tTappez le nombre des condidats (5 minimum) :");
        scanf("%d", &n);
	}while(n<5);
	
	printf("\t\t\t\tTapez les nomes des Presidents Nominees: \n\n");
	for(i=0 ; i<n ; i++)
	{
		printf("\t\t\t\t");
		scanf("%s", PresidentsNominees[i]);
	}
	
	
	do
	{
		printf("\n\n\t\t\t\tTapez le nombre des Electeurs (10 minimum)  :");
		scanf("%d",&m);
	}while(m<10);
	
	printf("\t\t\t\tTapez les CIN des Electeurs :\n\n");
	for(j=0 ; j<m ; j++)
	{
		printf("\t\t\t\t");
		printf("CIN delecteur N%d : ",j+1);
		scanf("%d",&Electeurs[j]);
	}
	
	system("cls");
	
	for(i=0 ; i<n ; i++) VotesCont[i]=0;
	
	
	printf("\n\n\t\tList des Condidats Voulez vous Choisire au plus un Condidat: ");
	for(i=0; i<n; i++)
   {
   	    printf("\n\n\t\t\t\t");
        printf("%d- %s",i+1, PresidentsNominees[i]);
   }
   
   for(j=0 ; j<m ; j++)
   {
        printf("Electeur %d Choisir un Condidat:",Electeurs[j]);
        scanf("%d",Votes[j]);
        for(i=0 ; i<n ; i++)
        {
        	if(Votes[j]==i+1) VotesCont[i]=VotesCont[i]+1;
		}
   }
   
   for(i=0 ; i<n i++) printf("condidat %d a %d votes"  , i+1 ,VotesCont[i]);
   
   

	
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
