#include <stdio.h>
#include <stdlib.h>

// Kullanici Tanimli iki Matrisin Çarpimi

//Öncelikle bu kisimda matrislerimizin boyutlarini belirleyelim.
//Matrislerimizin boyutlarýni a[M][N] ve b[N][P] olacak þekilde atama yapiyoruz.

#define M 2  //BIRINCI matrisin SATIR sayisi
#define N 3  //BIRINCI matrisin SÜTUN ve IKINCI matrisin SATIR sayisi
#define P 2  //IKINCI matrisin SÜTUN sayisi

int main() {

	 int a[10][10],b[10][10],c[10][10]={ },i,j,k; //Degiskenlerimizi ve matrislerimizi tanimladik.
						//Matris dizimizin içini bos biraktik. Çünkü bu kismi asagida dolduracagiz.

    printf ("Birinci Matris:\n \n");    //Ilk matrisimizi kullanicidan alalim.

    for (i = 0; i < M; i++)  //Ilk döngü satir,
	{
    	for (j = 0; j < N; j++)  //Ikinci döngü sütunu tanimliyor.
		{
            printf ("a[%d][%d]: ",i+1,j+1);
            scanf ("%d", &a[i][j]);
   		 }
    }
  printf ("\nOlusan Matris: \n");   //Matrisi görmek adina ekrana bastiralim.
  for (i = 0; i < M; i++)
  {
    for (j = 0; j < N; j++)
	{
        printf("%5d",a[i][j]);

    }printf("\n\n");
  }
    printf ("\n\nIkinci Matris: \n \n");   //Ayni islemleri ikinci matrisimiz için yapiyoruz.

    for (j = 0; j < N; j++)
	{
   		 for (k = 0; k < P; k++)
		{

        printf ("b[%d][%d]: ",j+1,k+1);
        scanf ("%d", &b[j][k]);
	    }
	}

    printf ("\nOlusan Matris: \n");
  for (j = 0; j < N; j++)
  {
    for (k = 0; k < P; k++)
	{
        printf("%5d",b[j][k]);

    }printf("\n\n");
    }
	//Bu kisimda çarpma islemi basliyor.
    for (i = 0; i < M; i++)     //Tüm döngülerimizi burada döndürüyoruz.
	{       	        //Çünkü her iki matrisi de burada isleme aliyoruz.
    	for (j = 0; j < P; j++)
		{
    		for (k = 0; k < N; k++)

        	c[i][j] += a[i][k] * b[k][j];    //Her bir elemani tek tek çarpip toplayarak atama yapiyor.
   		 }
        printf("\n");
    }

    printf ("Sonuc Matrisi:\n");   //Sonuç matrisimizi ekrana bastiriyoruz.

    for (i = 0; i < M; i++) //Sonuç Matrisimizin boyutu c[M][P} lik oldugu için sadece iki döngüyü kullaniyoruz.
	{
    	for (k = 0; k < P; k++)

        printf ("\t%d",c[i][k]);
        printf ("\n");
    }

    getch();
    return 0;
}
