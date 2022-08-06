#include<stdio.h>
#include<conio.h>
int main()
{
	int a,b,c;
	scanf("%d %d %d",&a,&b,&c);
	if(b*b-4*a*c>0)
	printf("Roots are real and distinct\n");
	else if(b*b-4*a*c==0)
	printf("Roots are real and equal\n");
	else
	printf("Roots are imaginary\n");
	getch();
	return 0;
	
}
