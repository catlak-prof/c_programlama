//önce programý çalýþtýrýp çýktýyý görelim
#include <stdio.h>
#include <conio.h>
int main()
{
int i,j,s;
s=1;
for(i=1;i<=5;i++)
{
for(j=1;j<=i;j++)
{
printf("%3d",s);
s=s+1;
}
printf("\n");
}
getch();
}
