//N elemanlý bir dizideki tek elemanlarý dizinin baþýna çift elemanlarý dizinin sonuna taþýyan c program.
#include <stdio.h>

#include <conio.h>

int main ()

{

int kont,i,n,bas,son,yedek;

int dizi[100];

printf("Dizinin Eleman Sayisini Giriniz..:");

scanf("%d",&n);

for(i=1;i<=n;i++)

{

printf("%d . elememani giriniz..: ",i);

scanf("%d",&dizi[i]);

}

bas=1;

son=n;

while(bas<son)

{

kont=dizi[bas] / 2;

kont=kont*2;

if(kont==dizi[bas])

{

yedek=dizi[bas];

dizi[bas]=dizi[son];

dizi[son]=yedek;

son=son-1;

}

else

bas=bas+1;

}

for(i=1;i<=n; i++)

printf("%d ",dizi[i]);

getch();

}
