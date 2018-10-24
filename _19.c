/*
Ekrana 10 kere "Merhaba Dünya"
yazan program
*/
#include<stdio.h>
int main( void )
{
	//i deðiþkenine bir baþlangýç deðeri atýyoruz.
	//i'ye ilk deger atanmazsa, döngümüz yanlýþ çalýþýr.
	int i = 0;
	//i'nin degeri kontrol iþleminden
	//sonra 1 artar.
	while( i++ < 10 ) {
		//2d bir tam sayýnýn yazdýrýlacaðý
		//ancak bu sayý tek rakamdan oluþsa da
		//2 rakamlýk yer ayýrýlmasýný belirtir.
		printf("%d: Merhaba Dünya\n",i);
	}
	return 0;
}
