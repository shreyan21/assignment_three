#include<stdio.h>
#include<conio.h>
int main()
{
	int a,b;
	printf("Enter the cost price : ");
	scanf("%d",&a);
	printf("Enter the selling price : ");
	scanf("%d",&b);
	if(b>a)
	{
		printf("Profit is %f\n",(b-a+0.0)/a*100);
	}
	else if(b<a)
	{
		printf("Loss is %f\n",(a-b+0.0)/a*100);
	}
	getch();
	return 0;
}
