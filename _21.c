// 100 - 90 arasý A, 89 - 80 arasý B, 79 - 70 arasý C, 69 - 60 arasý D, 59 ve 
//altýysa F olsun.
// Eðer 100'den büyük veya negatif bir sayý girilirse,
// o zaman program hatalý bir giriþ yapýldýðýný konusunda bizleri uyarsýn.
//  if - else if yapýsýný kullanarak rahatlýkla yanýtlayabilirsiniz. 
#include<stdio.h>
int main( void )
{
	int not;
	printf("Lütfen notu giriniz> ");
	scanf("%d",&not);
	switch( not / 10 ) {
		case 10: 
		case 9: printf("NOT: A\n"); break;
		case 8: printf("NOT: B\n"); break;
		case 7: printf("NOT: C\n"); break;
		case 6: printf("NOT: D\n"); break;
		case 5:
		case 4:
		case 3:
		case 2: 
		case 1:
		case 0: printf("NOT: F\n"); break;
		default:
			printf("HATA: Bilinmeyen bir deðer girdiniz!\n");
	}
	
	return 0;
}
