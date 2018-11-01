//Fibonacci Sayýlarýný dýþarýdan girilen N sayýsý kadar yazan c programý.
#include <stdio.h>

#include <conio.h>

int main()

{

int i,n,top;

int fib[100];

printf("N Sayisini Giriniz..:");

scanf("%d",&n);

fib[1]=1;

fib[2]=1;

for (i=3;i<=n;i++)

fib[i]=fib[i-1]+fib[i-2];

for (i=1; i<=n;i++)

printf (" %d",fib[i]);

getch();

}
