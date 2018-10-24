//i'nin deðeri 0'da olsa, 1000'de olsa, en azýndan bir kez Merhaba 
//Dünya'nýn yazýlacak olmasýdýr. 
//Ancak while'de kontrol önce yapýldýðý için, hiçbir þey ekrana yazýlmaz.

#include<stdio.h>
int main( void )
{
	int i = 0;
	do {
		//Önce i'nin deðeri arttýrýlýyor
		//sonra ekrana Merhaba Dünya yazdýrýlýyor.
		printf("%2d: Merhaba Dünya\n",++i);
	} while( i < 10 );
	return 0;
}
