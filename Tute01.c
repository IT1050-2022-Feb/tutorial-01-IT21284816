#include<stdio.h>
int main(void)
{
	int sub1,sub2;
	float avg;
	
	printf("Enter the marks :");
	scanf("%d",&sub1);
	printf("Enter the marks :");
	scanf("%d",&sub2);
	avg=(sub1+sub2)/2;
	printf("Average is : %.2f",avg);
	
	return 0;	
}