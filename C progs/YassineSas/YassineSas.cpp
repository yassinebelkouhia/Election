#include<stdio.h>
#include<windows.h>


int main()
{
	
	
	
	
	
	
    int i , j , Aide1 , Aide , Max , NombreNominees , NombreElecteurs;



    printf("\n\t\tBIENVENUE!");
    do
    {
        printf("\n\n\n\t\t\t\xDDTappez le nombre des condidats (5 minimum) :");
        scanf("%d", &NombreNominees);
    }while(NombreNominees<5);

    do
    {
        printf("\n\n\t\t\t\xDDTapez le nombre des Electeurs (10 minimum)  :");
        scanf("%d",&NombreElecteurs);
    }while(NombreElecteurs<10);



    char PresidentsNominees[NombreNominees][50];
    int Electeurs[NombreElecteurs] , Votes[NombreElecteurs]; 
    int VotesCont[NombreNominees] , IndicePresident[NombreNominees]; 

    system("cls");
   
   
   
   
   
   
   


    printf("\n\n\t\t\t\t\xDDTapez les nomes des Presidents Nominees: \n\n");
    for(i=0 ; i<NombreNominees ; i++)
    {
        printf("\t\t\t\t\t\xFE   ");
        scanf(" %[^\n]s ", PresidentsNominees[i]);
    }




    printf("\n\n\t\t\t\t\xDDTapez les CIN des Electeurs :\n\n");
    for(j=0 ; j<NombreElecteurs ; j++)
    {
        printf("\t\t\t\t\t\xFE   ");
        printf("CIN delecteur N%d : ",j+1);
        scanf("%d",&Electeurs[j]);
    }

    system("cls");

    for(i=0 ; i<NombreNominees ; i++) VotesCont[i]=0;


    printf("\n\n\n\t\t\t\xDDLIST DE CONDIDAT CHOISIR QU PLUS UN:\n\n\n\t\t\t");
    for(i=0 ; i<52 ; i++) printf("\xDB");
    for(i=0; i<NombreNominees; i++)
   {
           printf("\n\n\t\t\t\t");
        printf(".%d  \xDD.    %s",i+1, PresidentsNominees[i]);
   }
   printf("\n\n\t\t\t");
   
   for(i=0 ; i<NombreNominees ; i++) IndicePresident[i]=i+1;
   
   for(i=0 ; i<52 ; i++) printf("\xDB");







   for(j=0 ; j<NombreElecteurs ; j++)
   {
        printf("Electeur %d Choisir un Condidat:",Electeurs[j]);
        scanf("%d",&Votes[j]);
        for(i=0 ; i<NombreNominees ; i++)
        {
        	if( Votes[j] == IndicePresident[i] ) VotesCont[i]=VotesCont[i]+1;
		}
   }
   
   
   
   
   
   for( i=0 ; i<NombreNominees ; i++) printf("\n\n\t\tcondidat %d a %d votes" , IndicePresident[i] ,VotesCont[i]);  
  
  
  
  
  
  
  
  
  
   
   
   for (i=0; i<NombreNominees; i++)
     {
      
      Max=i;
      for (j=i+1; j<NombreNominees; j++)
          if (VotesCont[j]>VotesCont[Max]) Max=j;
      
      Aide=VotesCont[i];
      VotesCont[i]=VotesCont[Max];
      VotesCont[Max]=Aide;
      
      Aide1=IndicePresident[i];
      IndicePresident[i]=IndicePresident[Max];
      IndicePresident[Max]=Aide1;
     }
     
    printf("%d",VotesCont[0]); 
    
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   
   return 0;

}
