// yar� �ap� d��ardan girilen bir dairenin �evresini ve alan�n� bulan program.


#include <stdio.h>
#include <conio.h>

#define pi 3.14 //pi 3.14 olarak tan�mlan�r.say� de�i�tirilemez

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
    // ekran�n kapanmas�n� engelliyor..
}
