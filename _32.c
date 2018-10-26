//Dýþarýdan girilen bir sayýnýn rakamlarý toplamýný bulan c programý.

#include <stdio.h>
#include <conio.h>
int main()
{
int sayi,toplam,k,ilksayi;
printf("Sayiyi giriniz..:");
scanf("%d",&sayi);
toplam=0;
ilksayi=sayi;


k= sayi % 10;
sayi=sayi/10;
toplam=sayi+k;
 
printf("%d sayisinin Rakamlari toplami..:%d  dir ",ilksayi,toplam);
getch();
}
