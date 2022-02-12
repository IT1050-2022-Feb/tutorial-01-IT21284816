#include<stdio.h>
int main(void)
{
	int x,y,p1,p2,price;
	
	printf("Enter the distance of travell :");
	scanf("%d",&x);
	
	if(x>30)
	{
		p1= 30*50;
		p2= (x-30)*40;
		price = p1+p2;
		printf("price is : %d",price);
	}
	else
	{
		price = x*50;
		printf("price is : %d",price);
	}
	return 0;
}