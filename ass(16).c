#include<stdio.h>
#include<conio.h>
int main()
{
int a,b,c;
printf("Enter the sides of triangle : ");
scanf("%d%d%d",&a,&b,&c);
if(a+b>c)
printf("Valid triangle\n");
else
printf("Invalid triangle\n");
getch();
return 0;
}
