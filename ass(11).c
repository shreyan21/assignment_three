#include<stdio.h>
#include<conio.h>
int main()
{
char a;
scanf("%c",&a);
if(a>=65&&a<=90)
printf("Upper case\n");
else if(a>=97&&a<=122)
printf("Lower case\n");
getch();
return 0;
}