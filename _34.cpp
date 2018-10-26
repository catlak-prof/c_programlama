// yarý çapý dýþardan girilen bir dairenin çevresini ve alanýný bulan program.


#include <stdio.h>
#include <conio.h>

#define pi 3.14 //pi 3.14 olarak tanýmlanýr.sayý deðiþtirilemez

int main()
{
   //float pi = 3.14;
  
    float r , cevre, alan ;
    
    printf("Yaricapi girin :");
    
    scanf("%f", &r);
    
    
    cevre=2*pi*r;
    
    alan=pi*r*r;
    
    printf ("Cevre olcusu : %.2f Alan olcusu : %.2f \n"  , cevre, alan );
           
    getch();
    // ekranýn kapanmasýný engelliyor..
}
