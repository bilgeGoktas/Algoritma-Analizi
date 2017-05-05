#include<stdio.h>
#include<stdlib.h>

// Kullanici tanimli ust ucgen matris bulma programi

#define M 3 //Matrisimizin boyutunu sabitimize atiyoruz.

int main()
{
 int i,j;
 int a[M][M];

   for(i=0;i<M;i++) // Ilk dongumuz matrisin satir degiskenleridir.
  {
   for(j=0;j<M;j++) //Ikinci dongumuz ise sutunlari tanimlamaktadir.
   {              // Matrisin ilk elemanini bilgisayarimiz a[0][0] olarak aliyor.
   printf("a[%d][%d]=", i+1,j+1); // Fakat matematikte ilk elemani a[1][1] olarak kullandigimizdan dolayi ekrana bir ekleyerek yazilmasini tercih ettik.
    scanf("%d",&a[i][j]); // Kullanicimizdan matris degerlerini aliyoruz.
   }
  }
  printf("\nUst Ucgen Matris\n\n");  //Olusan matrisi ekrana bastiriyoruz.
  for(i=0;i<M;i++)
  {
   for(j=0;j<M;j++) //Ekrana bastirirken araya bir tane if-else yapýsý ekleyerek matrisimizi ust ucgene ceviriyoruz.
   { if(j>=i)       //bir degiskenin bulundugu satir numarasi sutun numarasindan kucukse veya esitse
    printf("\t%d\t",a[i][j]); //ekrana yazdir. (esitligi kaldirarak asal kosegeni dahil etmeyebilirsiniz)
	else printf("\t%d\t",0); //degilse yerine 0 yazdir.
   }printf("\n");
  }
  printf("\n");

 return 0;
 }
