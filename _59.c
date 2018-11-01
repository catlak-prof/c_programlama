//Varyans, bir serideki birim deðerlerin aritmetik ortalamadan farklarýnýn toplamýnýn birim sayýsýna bölümüdür.
// Standart sapma ise varyansýn kareköküdür. Bir dizideki elemanlarýn standart sapmasýný ve varyansýný bulan program.
#include<stdio.h>
#include<math.h>
#include<conio.h>

int main()
{
    
int i,n;
int dizi[100];
float ariort,stsapma,varyans;
ariort=0;
varyans=0;
printf("Dizinin eleman sayisini giriniz :");
scanf("%d",&n);
for(i=0;i<n;i++)
{
printf("dizinin %d elemaný : ",i);
scanf("%d",&dizi[i]);
}
for(i=0;i<n;i++)
ariort=ariort+dizi[i];
ariort=ariort/n;
for(i=0;i<n;i++)
varyans=varyans+(dizi[i]-ariort)*(dizi[i]-ariort);
varyans=varyans/n;
stsapma=sqrt(varyans);
printf("Aritmetik Ortalama=%f\n",ariort);
printf("Varyans =%f\n",varyans);
printf("Standart Sapma =%f\n",stsapma);
getch();
}
