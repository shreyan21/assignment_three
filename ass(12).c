#include<stdio.h>
#include<conio.h>
int main()
{
int a;
scanf("%d",&a);
if(a%3==0&&a%2==0)
printf("Divisible by 3 and 2\n");
else
printf("Not divisible by both 2 and 3\n");
getch();
return 0;
}