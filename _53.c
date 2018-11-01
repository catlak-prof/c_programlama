//N elemanlý bir dizideki pozitif elemanlarýn ortalamasýný bulan program.
#include <stdio.h>

#include <conio.h>

int main()

{

int i, n, k;

float sonuc;

int dizi[100];

printf ("N Sayisini Giriniz..:");

scanf ("%d",&n);

sonuc=0;

k=0;

for (i=0;i<n; i++)

{

printf("%d . elememani giriniz..: \n",i);

scanf ("%d",&dizi[i]);

}

for (i=0;i<n; i++)

{

if (dizi[i]>=0)

{ 

sonuc=sonuc+dizi[i];

k=k+1;

}

}

sonuc=sonuc/k;

printf("Ortalama=%f",sonuc);

getch();

}

