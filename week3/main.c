#include <stdio.h>
#include <stdlib.h>



int dizi_yaz(int x[], int n){
    int i;
    for(i=0;i<n;i++){
         printf("%d", x[i]);
         printf("\t");
}
printf("\n");
}

int sirala(int x[], int n){
    int i;
    for(i=(n-1)/2;i>=0;i--){
           printf("%d", x[i]);
           printf("\t");
           }
    printf("\n");
    for(i=n/2;i<n;i++){
           printf("%d", x[i]);
           printf("\t");
           }
    printf("\n");
}

int maxSum(int x[], int n){
    int i;
    int j;
    
    int maxSum=0;
    int maxSum1=0;
    for(i=(n-1)/2;i>=0;i--){
         int sum=0;
         for(j=i;j>=0;j--){
                sum=sum+x[j];
                if(sum>maxSum){
                      maxSum=sum;
                      }
                }
         }
    printf("%d", maxSum);     
printf("\n");
    for(i=(n)/2;i<n;i++){
         int sum=0;
         for(j=i;j<n;j++){
                sum=sum+x[j];
                if(sum>maxSum1){
                      maxSum1=sum;
                      }
                }
         }
         printf("%d", maxSum1);
         printf("\n");
         printf("%d", maxSum1+maxSum);
printf("\n");

}

int main(int argc, char *argv[])
{
    int dizi[8] = {4, -3, 2, 1, 6, -1, -2, 4};
    dizi_yaz(dizi, 8);
    sirala(dizi, 8);
    maxSum(dizi,8);
    
  system("PAUSE");	
  return 0;
}
