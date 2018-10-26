
//dýþardan girilen n sayýsýna kadar olan sayýlarýn karelerinin toplamýný hesaplayan programý yazýnýz
#include <stdio.h>
#include <conio.h>


int main()
{ 
    int n,i,toplam;
    
    printf (" Bir sayi giriniz : " );
    scanf("%d",&n);
     
      toplam=0;

      for  (i=1; i<=n; i++ )
   
      toplam = toplam + i*i;

      printf (" Girilen sayinin  karelerinin toplami : %d", toplam );
           
    getch();
    // ekranýn kapanmasýný engelliyor..
}
