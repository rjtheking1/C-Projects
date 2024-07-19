#include<stdio.h>

int main()
{
	//Write a Program to print odd numbers from N to 1 using a while loop.
	
	int i=1;
	int n;
	printf("Enter n = ");
	scanf("%d",&n);
	
	while(i<=n)
	{
		if(n%2==1)
		{
			printf("%d ",n);
		}
		
		n--;
	}
	
}
