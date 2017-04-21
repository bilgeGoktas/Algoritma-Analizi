#include <stdio.h>
#include <stdlib.h>
#define PI 3.14
#define e 2.718
int main()
{
    int dizi[10]={1,2,3,4,5,6,7,8,9,10};
    int min_sayi,max_sayi,i;
    float ortalama, toplam=0,std_sapma=0.0,toplam2=0,varyans=0, normal_dag=0.0;

    min_sayi=dizi[0];
    max_sayi=dizi[0];

    for(i=1;i<10;i++){
        if(min_sayi>dizi[i]){
            min_sayi=dizi[i];
        }
        if(max_sayi<dizi[i]){
            max_sayi=dizi[i];
        }
    }
    printf("Dizideki minimun eleman %d dir!!\n",min_sayi);
    printf("Dizideki maximum eleman %d dir!!\n",max_sayi);

    for(i=0;i<10;i++){
        toplam += dizi[i];
    }

    printf("Dizinin toplami %.2f dir!!\n",toplam);

    ortalama = toplam / 10.0;
    printf("Dizinin ortalamasi %.2f dir!!\n",ortalama);

    /*standart sapma hesabı*/
    for(i=0; i<10; i++){
        toplam2 += pow((dizi[i]-ortalama),2.0);
        std_sapma = sqrt(toplam2/9.0);
    }
    varyans=toplam2/9.0;

    printf("Dizinin standart sapmasi %.2f dir!!\n",std_sapma);
    printf("Dizinin varyansi %.2f dir!!\n",varyans);

    for(i=0; i<10; i++){
        normal_dag = 1/ sqrt(2*PI*std_sapma*std_sapma)*pow(e,(-1*(dizi[i]-ortalama)*(dizi[i]-ortalama)/(2*std_sapma*std_sapma)));
        printf("%d icin normal dagilim = %.2f \n",dizi[i],normal_dag);

    }

    return 0;
}
