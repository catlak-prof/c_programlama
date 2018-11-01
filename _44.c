//. Kullanýcýmýz, float tipinde 10 adet deðer girsin. Önce bu deðerlerin ortalamasý bulunsun, 
//ardýndan kaç adet elemanýn ortalamanýn altýnda kaldýðý ve kaç adet elemanýn ortalamanýn üstünde 
//olduðu gösterilsin.
#include<stdio.h>
int main( void )
{
	// Degerleri tutacagimiz 'dizi'
	// adinda bir dizi olusturuyoruz.
	float dizi[ 10 ];
	float ortalama, toplam = 0;
	int ortalama_ustu_adedi = 0;
	int ortalama_alti_adedi = 0;
	int i;
	toplam=0;
	// Kullanici dizinin elemanlarini giriyor:
	for( i = 0; i < 10; i++ ) {
		printf( "%2d. elemaný giriniz> ", (i+1) );
		scanf( "%f", &dizi[ i ] );
		toplam += dizi[ i ];
	}
	
	// dizinin ortalamasi hesaplaniyor.
	ortalama = toplam / 10.0;
	
	// ortalamadan kucuk ve buyuk elemanlarin
	// kac adet oldugu belirleniyor.
	for( i = 0; i < 10; i++ ) {
		if( dizi[ i ] < ortalama )
			ortalama_alti_adedi++;
		else if( dizi[ i ] > ortalama )
			ortalama_ustu_adedi++;
	}

	// raporlama yapiliyor.
	printf( "Ortalama: %.2f\n", ortalama );
	printf( "Ortalamadan düþük %d eleman vardýr.\n", ortalama_alti_adedi ); 
	printf( "Ortalamadan yüksek %d eleman vardýr.\n", ortalama_ustu_adedi );

	return 0;
}
