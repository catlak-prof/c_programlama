//Baklava Dilimi Yapma
#include <stdio.h>
#include <conio.h>
 
// * �ekli ile baklava dilimi yapma

int main(){
    
    int i, j, boslukSayisi, yildizSayisi, boyut;
    
// Boyutu 11 olan bir baklama dilimi yapmak istiyoruz (Boyut = sat�r say�s�)
    boyut = 11;
    
//Bosluk Sayisi Boyutun yar�s� oluyor. Ka��t �st�nde sayarak bakabilirsiniz.
    boslukSayisi = boyut / 2 ;
    
// Yildiz Sayisi 1 den ba�lar
    yildizSayisi = 1;
    
//ilk for sat�r say�s�n� yazd�r�r (Boyutu)
    for(i=0; i<boyut; i++){
        
//ikinci for �nce bo�luk oldu�u i�in bo�luklar� yazdirir
        for(j=0; j<boslukSayisi; j++)
            printf(" ");
        
//���nc� For Y�ld�zlar� yazd�r�r
        for(j=0; j<yildizSayisi; j++)
            printf("*");
            
        
/*Baklava diliminin yar�s�nda bo�luk 1 azal�r yildiz 2 artar yarisini ge�ince ise tam tersi bo�luk artar yildiz azalir
    if ile baklava diliminin yar�s�n� ve yar�s�ndan sonras�n� kontrol ediliyoruz*/
        
        if(i < boyut / 2){
            boslukSayisi--;
            yildizSayisi+=2;
        }
 
//Baklava diliminin yar�s�n� ge�ince else ye girer
        else{
            boslukSayisi++;
            yildizSayisi-=2;
            }
        
        //Her Sat�rdan sonra a�a�� iner
        printf("\n");
 
    }
    
 
    getch();
    return 0;
}
