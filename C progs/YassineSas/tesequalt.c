#include<stdio.h>




int main()
{
	int tab[5]={2,2,2,3,2};
    int equal=1;
    int i;
    for(i=0 ; i<4 ; i++)
    {
	    if( tab[i] != tab[i+1] ) equal=0;
	}
	
	printf("%d", equal);
	
	
}

