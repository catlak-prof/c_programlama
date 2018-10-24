#include<stdio.h>
int main( void )
{
	int i;
	i = 0;
	while( 1 ) {
		if (i >10)
		break;
		
		printf("%2d: Merhaba Dünya\n",(i));
		i += 3;
	}
	printf("%d",i);
	return 0;
}
