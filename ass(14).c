#include<stdio.h>
#include<conio.h>
int main()
{
int a;
scanf("%d",&a);
if(a>0)
printf("Positive\n");
else if(a<0)
printf("Negative\n");
else
printf("Zero\n");
getch();
return 0;
}