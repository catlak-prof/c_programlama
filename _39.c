//çarpma iþlemini kullanmadan iki sayýnýn çarpýmýný bulan program
#include <stdio.h>
#include <conio.h>


int main()
{ 
   // while(1) // sonsuz döngü
    // %g virgülden sonraki sýfýrlarý göstermiyor
    int a,b,s,i;
  
    
    printf("Lütfen 1.sayýyý giriniz : \n");  
      scanf("%d",&a); 
     
      printf("Lütfen 2.sayýyý  giriniz : \n");  
      scanf("%d",&b); 
      
      s= 0;
     
      for (i=1; i<=a; i++ );
      
      s= s+b;
      
      printf("%d * %d = %d", a,b,s);
           
    getch();
    // ekranýn kapanmasýný engelliyor..
}
