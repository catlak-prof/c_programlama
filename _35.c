// D��ar�dan girilen bir n tam say�s�na kadar olan tek tam sayilar�n toplam�n� 
// bulan program.
#include <stdio.h>
#include <conio.h>

int sonucbul(int n, int sonuc1)
{
int i,sonuc;    
    sonuc = 0;
    i = 1;
    
    while (i<=n)
    {
            sonuc = sonuc+i;
            i=i+2;
          }
 	return sonuc;
}
int main()
{ 
    int i,n,sonuc;
    
    printf("N sayisini giriniz :");
     scanf("%d", &n);
    sonuc=sonucbul(n,5.5);
    printf ("%d e kadar olan sayilarin toplami : %d" ,n,sonuc  );
        printf("N sayisini giriniz :");
     scanf("%d", &n);
    sonuc=sonucbul(n,5.5);
    printf ("%d e kadar olan sayilarin toplami : %d" ,n,sonuc  );
              
    getch();
    // ekran�n kapanmas�n� engelliyor..
}
