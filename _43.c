//NxM boyutlu iki matrisin toplamýný bulan c programý.
#include<stdio.h>

#include<conio.h>

int main()

{

                 int i,j,n,m;

                 int mata[10][10], matb[10][10], matc[10][10];

                 printf("Satir Sayisini Giriniz: ");

                 scanf("%d",&n);

                 printf("Sutun Sayisini Giriniz: ");

                 scanf("%d",&m);                 

                 printf("1.matris: \n");

                 for(i=1;i<=n;i++)

                        for(j=1;j<=m;j++)

                        {

                                        printf("%d. satir ,%d. sutun elemani",i,j);

                                        scanf("%d",&mata[i][j]);

                                        }

                                        printf("2.matris: \n");

                                        for(i=1;i<=n;i++)

                                        for(j=1;j<=m;j++)

                                        {

                                                        printf("%d. satir,%d. sutun elemani",i,j);

                                                        scanf("%d",&matb[i][j]);

                                                        }

                                                        for(i=1;i<=n;i++)

                                                        {

                                                        for(j=1;j<=m;j++)

                                                        {

                                                                        matc[i][j]= mata[i][j]+matb[i][j];

                                                                        printf("    %d",matc[i][j]);

                                                                        }

                                                                        printf("\n");

                                                                        }

                                                                        getch();

                                                                        }

