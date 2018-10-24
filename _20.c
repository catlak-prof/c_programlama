#include<stdio.h>
int main( void )
{
	int i = 0, toplam_deger = 0;
	int n;
	printf("Lütfen n deðerini giriniz> ");
	scanf("%d",&n);
	while( i <= n ) {
		toplam_deger += i*i;//eski dðere yeni bir deðer ekliyruz.
		i++;
	}
	printf("Sonuç: %d\n",toplam_deger);
	return 0;
}
