//Varyans, bir serideki birim de�erlerin aritmetik ortalamadan farklar�n�n toplam�n�n birim say�s�na b�l�m�d�r.
// Standart sapma ise varyans�n karek�k�d�r. Bir dizideki elemanlar�n standart sapmas�n� ve varyans�n� bulan program.
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
printf("dizinin %d eleman� : ",i);
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
