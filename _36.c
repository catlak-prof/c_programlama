
//d��ardan girilen n say�s�na kadar olan say�lar�n karelerinin toplam�n� hesaplayan program� yaz�n�z
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
    // ekran�n kapanmas�n� engelliyor..
}
