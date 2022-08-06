#include<stdio.h>
#include<conio.h>
int main()
{
	int a;
	scanf("%d",&a);
	if(a%100)
	{
		if(a%4)
		printf("Not a leap year\n");
		else
		printf("Leap year\n");
	}
	else if(a%400)
	printf("Not a leap year\n");
	else
	printf("Leap year\n");
	getch();
	return 0;
}
