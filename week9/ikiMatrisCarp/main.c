#include <stdio.h>
#include <stdlib.h>

// Kullanici Tanimli iki Matrisin �arpimi

//�ncelikle bu kisimda matrislerimizin boyutlarini belirleyelim.
//Matrislerimizin boyutlar�ni a[M][N] ve b[N][P] olacak �ekilde atama yapiyoruz.

#define M 2  //BIRINCI matrisin SATIR sayisi
#define N 3  //BIRINCI matrisin S�TUN ve IKINCI matrisin SATIR sayisi
#define P 2  //IKINCI matrisin S�TUN sayisi

int main() {

	 int a[10][10],b[10][10],c[10][10]={ },i,j,k; //Degiskenlerimizi ve matrislerimizi tanimladik.
						//Matris dizimizin i�ini bos biraktik. ��nk� bu kismi asagida dolduracagiz.

    printf ("Birinci Matris:\n \n");    //Ilk matrisimizi kullanicidan alalim.

    for (i = 0; i < M; i++)  //Ilk d�ng� satir,
	{
    	for (j = 0; j < N; j++)  //Ikinci d�ng� s�tunu tanimliyor.
		{
            printf ("a[%d][%d]: ",i+1,j+1);
            scanf ("%d", &a[i][j]);
   		 }
    }
  printf ("\nOlusan Matris: \n");   //Matrisi g�rmek adina ekrana bastiralim.
  for (i = 0; i < M; i++)
  {
    for (j = 0; j < N; j++)
	{
        printf("%5d",a[i][j]);

    }printf("\n\n");
  }
    printf ("\n\nIkinci Matris: \n \n");   //Ayni islemleri ikinci matrisimiz i�in yapiyoruz.

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
	//Bu kisimda �arpma islemi basliyor.
    for (i = 0; i < M; i++)     //T�m d�ng�lerimizi burada d�nd�r�yoruz.
	{       	        //��nk� her iki matrisi de burada isleme aliyoruz.
    	for (j = 0; j < P; j++)
		{
    		for (k = 0; k < N; k++)

        	c[i][j] += a[i][k] * b[k][j];    //Her bir elemani tek tek �arpip toplayarak atama yapiyor.
   		 }
        printf("\n");
    }

    printf ("Sonuc Matrisi:\n");   //Sonu� matrisimizi ekrana bastiriyoruz.

    for (i = 0; i < M; i++) //Sonu� Matrisimizin boyutu c[M][P} lik oldugu i�in sadece iki d�ng�y� kullaniyoruz.
	{
    	for (k = 0; k < P; k++)

        printf ("\t%d",c[i][k]);
        printf ("\n");
    }

    getch();
    return 0;
}
