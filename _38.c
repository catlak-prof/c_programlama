//dýþardan girilen n adet sayýnýn sayýnýn aritmetik ortalamasýný bulan program
#include <stdio.h>
#include <conio.h>


int main()
{ 
    int i,sayi;
   float n,toplam,ortalama;
    
    printf("Lütfen sayý miktarini giriniz : \n");  
      scanf("%f",&n); 
     
     toplam = 0;
     
      for (i=1; i<=n; i++ )
      {
      printf("%d . sayi giriniz :",i);
      scanf("%d",&sayi);
      
      toplam = toplam + sayi;
      }
      ortalama = toplam /n;
      
      printf("Girilen sayilarin aritmetik ortlamasi: %f", ortalama);
           
    getch();
    // ekranýn kapanmasýný engelliyor..
}
