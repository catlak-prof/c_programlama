//meþe biliþim
/*m
e
þ
e
bilþim
*/

//klavyeden girilen iki sayýsal deðer karþýlaþtýrýlýyor, büyükolandan küçük olan çýkarýlýyor ve sonuç ekrana yazýlýyor.

#include <stdio.h>
#include <string.h>
main(){
int a,b;
printf("A için bir deðer giriniz?");
scanf("%d",&a);
printf("B için bir deðer giriniz?");
scanf("%d",&b);
if (a>b)
printf("A-B=%d\n", a-b);
else
printf("%d", b-a);
}
