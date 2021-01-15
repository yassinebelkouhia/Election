#include <stdio.h>


int main()
{
	
	
  int rows, i,  j, a = 1;
  
  printf("nb of rows ");
  scanf("%d", &rows);
  printf("\n\n\n\n\n\n");

  for (i = 1; i <= rows; i++)
  {
  	printf("\t\t\t\t\t");
    for (j = 1; j <= i; j++)
    {
      printf("%d ", a);
      a++;
    }
    printf("\n");
  }
  printf("\n\n\n");

  return 0;
}
