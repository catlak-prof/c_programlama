//önce çýktýyý görelim
#include <stdio.h>
#include <conio.h>
int main()
{
int i,j,n;
printf("Satir sayisini giriniz...:");
scanf ("%d",&n);
for(i=1;i<=n;i++)
{
for(j=i;j>=1;j--)
printf("  %d",j);
printf("\n");
}
getch();
}
