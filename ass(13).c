#include<stdio.h>
#include<conio.h>
int main()
{
int a;
scanf("%d",&a);
if(a%3==0||a%7==0)
printf("%d is divisible by 3 or 7\n",a);
else
printf("%d is not divisble by 3 or 7\n",a);
getch();
return 0;
}
