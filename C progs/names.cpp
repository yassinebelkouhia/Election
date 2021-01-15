#include <stdio.h>
#include <stdlib.h>

int main()
{

	int i = 0;
	char *iName[1][4] =  {'\0'};
    int iChoice = 0;


	while(iChoice != 3)
	{
		system("cls");
		printf("\n1\tEnter a name");
		printf("\n2\tPrint Report");
		printf("\n3\tQuit");
		printf("\n\n\tEnter a Choice: ");
		scanf("%d", &iChoice);

		if(iChoice == 1)
		{
			system("cls");
			printf("\n\tEnter a name: ");
			scanf("%s %s", iName[0],iName[1]);
		}
		else if(iChoice ==2)
		{
			break;

		}
		else if(iChoice == 3)
			break;
	}
	system("cls");
	for (i = 0; i <= 4; i++)
		printf("%s %s",iName[0],iName[1]);

}
