//Dýþardan girilen n sayýsýna kadar olan sayýlarýn toplamýný veren c programý.
#include <stdio.h>
#include <conio.h>

int main()
{
  int i,n,sonuc ;
  // degiþkenler tanýmlanýyor.
  
   // integer'e karþýlýk prinf ve scanf'te %d kullanýrlýr.
   
   printf("Bir sayi giriniz :");
   //Kullanýcýdan deðerler alýnýyor..
   
   scanf("%d", &n);
   // %d sayýnýn tipini ifade ediyor. & sayýsal olanlarda giriliyor.
   //  String bir ifade kullanmak istedeðimizde & iþaretini kullanmýyoruz.
   //
   
   sonuc=0;

   for  (i=1; i<=n; i++ )
   
   sonuc = sonuc + i;
   
   printf("istediginiz toplam: %d ", sonuc  );  
   // sonuç ekrana yazdýrýlýyor.. 
    // %f virgüllü sayýlar
    // %s string ifadelerinde kullanýyoruz.
    
    getch();
    // kapanmasýný engelliyor..
}
