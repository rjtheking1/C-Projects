#include<stdio.h>

int main()
{
	//Write a Program to print 1 to N using a while loop.
	int i=1;
	int n;
	printf("Enter n = ");
	scanf("%d",&n);
	
	while(i<=n)
	{
		printf("%d ",i);
		i++;
	}
}
