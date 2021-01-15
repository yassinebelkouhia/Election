#include<stdio.h>
#include<windows.h>

int  i, j, Max, Aide,  NombreNominees, NombreElecteurs , ExCont=0 , Cond1=1;
char PresidentsNominees[1000][50];
int Electeurs[2][1000] ;
int VotesCont[2][1000]  ;




void Insertionnbr()
{
	
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
}



void InsertionDonnes()
{
	
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
    
}

void ListePresident(int ExCont)
{
	printf("\n\n\n\t\t\t\xDD LISTE DES CONDIDAT:\n\n\n\n\t\t\t");
    for(i=0 ; i<52 ; i++) printf("\xB0");
    for(i=0; i<NombreNominees-ExCont; i++)
   {
        printf("\n\n\t\t\t\t");
        printf(".N\xF8%d  \xDD.    %s.", VotesCont[0][i] , PresidentsNominees[VotesCont[0][i]-1]);
   }
   printf("\n\n\t\t\t");
   for(i=0 ; i<52 ; i++) printf("\xB0");
   printf("\n\n\n\n");
}

void ZeroVotes()
{
	for(i=0 ; i<NombreNominees-ExCont ; i++) VotesCont[1][i]=0;
}

void Election(int ExCont)
{
	for(j=0 ; j<NombreElecteurs ; j++)
   {
        printf("\t\t\t\t\xFE Electeur %d Choisir un Condidat:",Electeurs[0][j]);
        scanf("%d",&Electeurs[1][j]);
        for(i=0 ; i<NombreNominees-ExCont  ; i++)
        {
        	if( Electeurs[1][j] == VotesCont[0][i] ) VotesCont[1][i]=VotesCont[1][i]+1;
		}
   }
   printf("\n\t\t\t");
   for(i=0 ; i<52 ; i++) printf("\xB0");
   printf("\n\n\n\n\n\t\t\t\t\t\t Les Votes serant calculees dans une instant ");
    for(i=0 ; i<4 ; i++) 
    {
    	printf(".");
    	sleep(1);
    	
	}
}

void results(int ExCont)
{
	printf("\n\n\n");
	for( i=0 ; i<NombreNominees-ExCont ; i++) printf("\n\t\t\t\xFE Condidat %d |. %s. a %d (%.1f %%) votes" , VotesCont[0][i] , PresidentsNominees[VotesCont[0][i]-1] ,VotesCont[1][i] , (float)(VotesCont[1][i]*100/NombreElecteurs));
    printf("\n\n\n\t\t\t\t\t\t\tAppuyez sur n'importe quelle touche pour continuer.");  
    system("pause > Null");
}

void Condition1(int ExCont)
{
	for(i=0 ; i<NombreNominees-ExCont-1 ; i++)
    {
	    if( VotesCont[1][i] != VotesCont[1][i+1] ) Cond1=0;
	}
	
}

void Trie(int ExCont)
{
	for (i=0; i<NombreNominees - ExCont; i++)
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
}

void ExContPhase1()
{
	for(i=0 ; i<NombreNominees ; i++)
    {
    	if((float)(VotesCont[1][i]*100/NombreElecteurs)<15) ExCont=ExCont+1;
	}
}

void FinalResults()
{
   printf("\n\n\n\n\n\t\t\t\t");
   for(i=0 ; i<58 ; i++) printf("\xB0");
   printf("\n\n\n\t\t\t\t\t\xDD the winner is %s with %d votes\n\n\t\t\t\t", PresidentsNominees[VotesCont[0][0]-1] , VotesCont[1][0] );
   for(i=0 ; i<58 ; i++) printf("\xB0");
}










int main()
{
	Insertionnbr();
	system("cls");
	InsertionDonnes();
	system("cls");
	printf("\n\n\t\t Les elections debutent dans une instant ");
    for(i=0 ; i<5 ; i++) 
    {
    	printf(". ");
    	sleep(1);
    	
	}
	system("cls");
	
    for(i=0 ; i<NombreNominees-ExCont ; i++) VotesCont[0][i]=i+1;
	
	ZeroVotes();
	ListePresident(ExCont);
	Election(ExCont);
	system("cls");
	results(ExCont);
	Condition1(ExCont);
	while(Cond1)
	{
		ZeroVotes();
		system("cls");
		printf("\n\n\t\tTous les presidents nomines ont un nombre de votes ex aequo, le tour doit etre refait.\n\n");
		ListePresident(ExCont);
		Election(ExCont);
		system("cls");
		results(ExCont);
		Condition1(ExCont);
		
	}	
	
	ExContPhase1();
	Trie(ExCont);

	if(ExCont == NombreNominees-1) FinalResults();
	else
	{
		system("cls");
	    ZeroVotes();
	    ListePresident(ExCont);   
	    Election(ExCont);
	    system("cls");
	    results(ExCont);
	    Trie(ExCont);
	    while( VotesCont[1][NombreNominees-ExCont-1] == VotesCont[1][NombreNominees-ExCont-2] )
	    {
	    	ZeroVotes();
	    	system("cls");
	    	printf("\n\n\t\tTous les presidents nomines ont un nombre de votes ex aequo, le tour doit etre refait.\n\n");
	    	ListePresident(ExCont);
	    	Election(ExCont);
	    	Trie(ExCont);
		}
	    ExCont=ExCont+1;
	    
	    system("cls");
	    ZeroVotes();
	    ListePresident(ExCont); 
	    Election(ExCont);
	    system("cls");
	    Trie(ExCont);
	    while(VotesCont[1][0] == VotesCont[1][1])
	    {
	    	system("cls");
	    	printf("\n\n\t\tDeux presidents nomines ont un nombre de votes maximale et ex aequo, le tour doit être refait.\n\n");
	    	ListePresident(ExCont);
			Election(ExCont);
	    	Trie(ExCont);
	    	ZeroVotes();
		}
		
		system("cls");
        FinalResults();
	}
	
	
	
		
	
	
	
	return 0;
}

