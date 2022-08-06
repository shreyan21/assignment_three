#include<stdio.h>
#include<conio.h>
int main()
{
	int a,b,c;
	scanf("%d%d%d",&a,&b,&c);
	int max=a;
	if(max<b)
	{  
	max=b;
		if(max<c)
		max=c;
	}
	else if(max<c)
	{
		max=c;
	}
	printf("%d is greatest\n",max);
	getch();
	return 0;
	

}







