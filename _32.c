//D��ar�dan girilen bir say�n�n rakamlar� toplam�n� bulan c program�.

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
