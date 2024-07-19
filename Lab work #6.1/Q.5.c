#include<stdio.h>

int main()
{
	//Write a Program to print leap years between two given numbers using a while loop.For example,
	
	int year1,year2;
	printf("Enter the number = ");
	scanf("%d",&year1);
	printf("Enter the number = ");
	scanf("%d",&year2);
	
	while(year1<=year2)
	{
		if(year1%4==0)
		{
			printf("%d ",year1);
		}
		
		year1++;
	}
}
