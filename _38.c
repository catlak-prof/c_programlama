//d��ardan girilen n adet say�n�n say�n�n aritmetik ortalamas�n� bulan program
#include <stdio.h>
#include <conio.h>


int main()
{ 
    int i,sayi;
   float n,toplam,ortalama;
    
    printf("L�tfen say� miktarini giriniz : \n");  
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
    // ekran�n kapanmas�n� engelliyor..
}
