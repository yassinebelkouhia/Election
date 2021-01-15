#include<stdio.h>

void Primenumber(int a)
{
	int i;
	int nb=0;
	
	
	for(i=2 ; i<a ; i++)
	{
		if (a%i == 0)
			nb=nb+1;
	}
	
	if(nb==0) printf("%d\n",a);
	
}


int main()
{
	int N;
	int j;
	printf("List Prime numbers under ");
	scanf("%d",&N);
	for(j=2 ; j<=N ; j++) Primenumber(j);
	
	
	return 0;
}
