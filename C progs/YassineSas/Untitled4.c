#include<stdio.h>
#include<windows.h>


int main()
{
	
	
	
	
	
	
    int i , j , Aide , Max , ExCont=0 , NombreNominees , NombreElecteurs; //ExCont conteur dial li hai9owdu



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
    int Electeurs[2][NombreElecteurs] ; //ster lowel dial cin o tani dial votes
    int VotesCont[2][NombreNominees]  ; // ster lowel dial index t presidents o tani dial l cont dial l votes

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
        scanf("%d",&Electeurs[0][j]);
    }

    system("cls");

    for(i=0 ; i<NombreNominees ; i++) VotesCont[1][i]=0;

    printf("\n\n\t\t Les elections debutent dans une instant ");
    for(i=0 ; i<5 ; i++) 
    {
    	printf(". ");
    	sleep(1);
    	
	}
	system("cls");
    

    printf("\n\n\n\t\t\t\xDDLIST DES CONDIDAT PHASE 1-- CHOISIR QU PLUS UN:\n\n\n\t\t\t");
    for(i=0 ; i<52 ; i++) printf("\xB2");
    for(i=0; i<NombreNominees; i++)
   {
           printf("\n\n\t\t\t\t");
        printf(".%d  \xDD.    %s",i+1, PresidentsNominees[i]);
   }
   printf("\n\n\t\t\t");
   
   for(i=0 ; i<NombreNominees ; i++) VotesCont[0][i]=i+1;
   
   for(i=0 ; i<52 ; i++) printf("\xB2");





    printf("\n\n\n\n\t\t\t");
    for(i=0 ; i<52 ; i++) printf("\xB2");
    printf("\n\n");
   for(j=0 ; j<NombreElecteurs ; j++)
   {
        printf("\t\t\t\t\xFE Electeur %d Choisir un Condidat:",Electeurs[0][j]);
        scanf("%d",&Electeurs[1][j]);
        for(i=0 ; i<NombreNominees ; i++)
        {
        	if( Electeurs[1][j] == VotesCont[0][i] ) VotesCont[1][i]=VotesCont[1][i]+1;
		}
   }
   printf("\n\t\t\t");
   for(i=0 ; i<52 ; i++) printf("\xB2");
   
   printf("\n\n\n\n\n\t\t\t\t\t\t Les Votes serant calculees dans une instant ");
    for(i=0 ; i<5 ; i++) 
    {
    	printf(".");
    	sleep(1);
    	
	}
	system("cls");   
    
   
   printf("\n\n\n\n");
   for( i=0 ; i<NombreNominees ; i++) printf("\n\t\t\t\xFE Condidat %d |. %s a %d votes" , VotesCont[0][i] , PresidentsNominees[i] ,VotesCont[1][i]);
   printf("\n\n\n\t\t\t\t\t\t\tLa deuxieme phase va commancer dans une instant.");  
  sleep(10);
  
   
   
   for (i=0; i<NombreNominees; i++)
     {
      
      Max=i;
      for (j=i+1; j<NombreNominees; j++)
          if (VotesCont[1][j]>VotesCont[1][Max]) Max=j;
      
      Aide=VotesCont[1][i];
      VotesCont[1][i]=VotesCont[1][Max];
      VotesCont[1][Max]=Aide;
      
      Aide=VotesCont[0][i];
      VotesCont[0][i]=VotesCont[0][Max];
      VotesCont[0][Max]=Aide;
     }
     
    printf("%d",VotesCont[0][0]); 
    
    
    
    
    for(i=0 ; i<NombreNominees ; i++)
    {
    	if((float)(VotesCont[1][i]*100/NombreElecteurs)<15) ExCont=ExCont+1;
	}
    
    
    
    system("cls");
    
    printf("\n\n\n\t\t\t\xDDLIST DE CONDIDAT DU PHASE 2 --- CHOISIR QU PLUS UN:\n\n\n\t\t\t");
    for(i=0 ; i<52 ; i++) printf("\xB2");
    for(i=0; i<NombreNominees-ExCont; i++)
   {
           printf("\n\n\t\t\t\t");
        printf(".%d  \xDD.    %s",VotesCont[0][i], PresidentsNominees[VotesCont[0][i]-1]);
   }
   printf("\n\n\t\t\t");
   
   for(i=0 ; i<NombreNominees ; i++) VotesCont[0][i]=i+1;
   
   for(i=0 ; i<52 ; i++) printf("\xB2");
   printf("\n");
   
   
   
   
   
   return 0;

}
