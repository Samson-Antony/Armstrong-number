#include<stdio.h>
#include<conio.h>
void main()
{
int a,n,b=0,t;
clrscr();
printf("\nenter a number");
scanf("%d",&n);
while (n>0)
{
a=n%10;
b=b+a*a*a;
n=n/10;
}
if(b=n)
{
printf("\n it is a armstrong number");
}
else
{
printf("\nit is not a armstrong number");
}
getch();
}