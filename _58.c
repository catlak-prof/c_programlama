//Dýþarýdan girilen N elemanlý bir dizinin aritmetik, geometrik ve harmonik ortalamasýný hesaplayan program.
#include<stdio.h>
#include<math.h>
#include<conio.h>

int main()
{
int i,n;
int dizi[100];
float ariort,geoort,harort;

ariort=0;
geoort=1;
harort=0.0;
printf("Dizinin eleman sayisini giriniz..:");
scanf("%d",&n);
for(i=0;i<n;i++)
{
                printf("dizinin %d elemani :" ,i);
                
scanf("%d",&dizi[i]);
}
for(i=0;i<n;i++)
{
ariort=ariort+dizi[i];
geoort=geoort*dizi[i];
harort=harort+1.0/dizi[i];
}
ariort=ariort/n;
geoort=pow(geoort,(1/n));
harort=n/harort;
printf("Aritmetik Ortalama=%f\n",ariort);
printf("Geometrik Ortalama=%f\n",geoort);
printf("Harmonik Ortalama =%f\n",harort);
getch();
}
