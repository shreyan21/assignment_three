#include<stdio.h>
#include<conio.h>
int main()
{
	int a;
	scanf("%d",&a);
	if(a>=100&&a<=999||a>=-999&&a<=-100)
	printf("It is a 3 digit number\n");
	else
	printf("It is not a 3 digit number\n");
	getch();
	return 0;
}
