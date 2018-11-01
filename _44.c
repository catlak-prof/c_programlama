//. Kullan�c�m�z, float tipinde 10 adet de�er girsin. �nce bu de�erlerin ortalamas� bulunsun, 
//ard�ndan ka� adet eleman�n ortalaman�n alt�nda kald��� ve ka� adet eleman�n ortalaman�n �st�nde 
//oldu�u g�sterilsin.
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
		printf( "%2d. eleman� giriniz> ", (i+1) );
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
	printf( "Ortalamadan d���k %d eleman vard�r.\n", ortalama_alti_adedi ); 
	printf( "Ortalamadan y�ksek %d eleman vard�r.\n", ortalama_ustu_adedi );

	return 0;
}
