#include<stdio.h>
#include<conio.h>
void main()
{
int n,r,c;
int a=1,b=1,d;
clrscr();
printf("Enter a number of rows: ");
scanf("%d",&n);
for(r=1;r<=n;r++) {
for(c=1;c<=r;c++) {
printf("%d\t",a);
d = a + b;
a = b;
b = d;
}
printf("\n");
}
getch();
}

