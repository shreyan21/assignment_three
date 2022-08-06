#include<stdio.h>
#include<conio.h>
int main()
{
int a,b;
printf("Enter the month : ");
scanf("%d",&b);
printf("Enter the year : ");
scanf("%d",&a);
if(b<=7)
{
if(b==2)
{
if(a%100==0)
{
  if(a%400==0)
   printf("It has %d days\n",29);
  else
  printf("It has %d days\n",28);
}
else if(a%4==0)
printf("It has %d days\n",29);
else
printf("It has %d days\n",28);
}
else if(b%2)

printf("It has 31 days\n");

else
printf("It has 30 days\n");
}
else if(b%2)
printf("It has 30 days\n");
else
printf("It has 31 days\n");

getch();
return 0;
}
