                                             
//d��ardan girilen 3 say�n�n en b�y���n� bulan program
#include <stdio.h>
#include <conio.h>


int main()
{ 
    int x,y,z,enb;
    
    printf(" 3 tane sayi giriniz : \n");  
      scanf("%d %d %d",&x,&y,&z); 
     
      if(x>y){
              
           if(x>z)
                  {
                   enb = x;
                   }
                   else
                   {
                        enb = z;
                   }
           }
      else 
           {
              if(y>z)
                  {
                   enb = y;
                   }
                   else 
                   {
                        enb = z;
                   }
         
           }
           
           printf ("Girilen en buyuk sayi %d", enb);
           
    getch();
    // ekran�n kapanmas�n� engelliyor..
}
