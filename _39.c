//�arpma i�lemini kullanmadan iki say�n�n �arp�m�n� bulan program
#include <stdio.h>
#include <conio.h>


int main()
{ 
   // while(1) // sonsuz d�ng�
    // %g virg�lden sonraki s�f�rlar� g�stermiyor
    int a,b,s,i;
  
    
    printf("L�tfen 1.say�y� giriniz : \n");  
      scanf("%d",&a); 
     
      printf("L�tfen 2.say�y�  giriniz : \n");  
      scanf("%d",&b); 
      
      s= 0;
     
      for (i=1; i<=a; i++ );
      
      s= s+b;
      
      printf("%d * %d = %d", a,b,s);
           
    getch();
    // ekran�n kapanmas�n� engelliyor..
}
