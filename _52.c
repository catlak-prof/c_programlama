//N elemanlý bir dizideki elemanlarýn toplamýný bulan program
#include <stdio.h>

#include <conio.h>

int main()

{

int i, n, toplam;

int dizi[100];

printf ("N Sayisini Giriniz..:");

scanf ("%d",&n);

for (i=0;i<n; i++)

{

printf("%d . elememani giriniz..: \n",i);    

scanf ("%d",&dizi[i]);

}

toplam=0;

for (i=0;i<n; i++)

toplam=toplam+dizi[i];

printf("Toplam=%d",toplam);

getch();

}
