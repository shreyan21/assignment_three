#include<stdio.h>
#include<conio.h>
int main()
{
char a;
scanf("%c",&a);
if(a>=32&&a<=126)
{
   if(a>=65&&a<=90)
    printf("Uppercase charcer\n");
  else if(a>=97&&a<=122)
  printf("Lowercase character\n");
  else if(a>=48&&a<=57)
  printf("Digit\n");
  else
  printf("Special character\n");
}
getch();
return 0;
}
