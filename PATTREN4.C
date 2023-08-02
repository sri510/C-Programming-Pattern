#include<stdio.h>
#include<conio.h>
void main()
{
int n,r,c;
clrscr();
printf("Enter a number of rows: ");
scanf("%d",&n);
for(r=1;r<=n;r++)
{
for(c=1;c<=r;c++)
{
if((n+r)%2==0)
printf("0\t");
else
printf("1\t");
}
printf("\n");
}
getch();
}

