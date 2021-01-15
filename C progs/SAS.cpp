#include<stdio.h>
#include<string.h>




int main()
{
   char PresidentNominee[20][50];
   int n, i;

   printf("Enter how many canddats (5 minimum)");
   scanf("%d", &n);

   printf("Enter names of condidats\n");
   for(i=0; i<n; i++)
   {
     scanf("%s", PresidentNominee[i]);
   }
   
   for(i=0; i<n; i++)
   {
     printf("%s\n", PresidentNominee[i]);
   }

   /*printf("Enter a string to search: ");
   scanf("%s", s1);

   for(i=0; i<n; i++)
   {
     if(strcmp(s1, str[i]) == 0)
     {
       found=1;
       printf("Found in row-%d\n", i+1);
     }
   }

   if(found==0) printf("Not found");*/
   return 0;
}
