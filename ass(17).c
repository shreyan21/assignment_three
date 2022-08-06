#include<stdio.h>
#include<conio.h>
int main()
{
int a,b,c,d,e;
printf("Enter the marks : ");
scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
if((a+b+c+d+e)/500.0*100>=33)
printf("Passed\n");
else
printf("Failed\n");
getch();
return 0;
}
