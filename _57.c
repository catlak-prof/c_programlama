//D��ar�dan girilen n elemanl� bir dizideki en b�y�k eleman� en k���k eleman� ve 
//en b�y�k elemanla en k���k eleman aras�ndaki fark� bulan c program�.
#include <stdio.h>
#include <conio.h>

int main()
{
  int enb, enk, i, n, fark;
  int dizi[100];
  printf("Dizinin Eleman Sayisini Giriniz :");
  scanf("%d", &n);
  for (i = 1; i <= n; i++)
  {
    printf("%d . elememani giriniz : ", i);
    scanf("%d", &dizi[i]);
  }
  enk = dizi[1];
  enb = dizi[1];
  for (i = 2; i <= n; i++)
  {
    if (dizi[i] < enk)
      enk = dizi[i];
    else if (dizi[i] > enb)
      enb = dizi[i];
  }
  fark = enb - enk;
  printf("\nEn buyuk sayi : %d En kucuk sayi : %d Sayilar arasindaki fark : %d",
    enb, enk, fark);
  getch();
}
