/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package maxsub.n3;

import java.util.List;
import java.util.ArrayList;
/**
 *
 * @author USER
 */
public class MaxSubN3 {

    /**
     * @param args the command line arguments
     */
     static void maxSum(int dizi[])
    {
         List<Integer> soldizi = new ArrayList<Integer>();
         List<Integer> sagdizi = new ArrayList<Integer>();
        if ((dizi.length)%2==0) {
            for (int i = 0; i < (dizi.length/2); i++) {
                soldizi.add(dizi[i]);
               
            }
            for (int i = (dizi.length/2); i < (dizi.length); i++) {
                sagdizi.add(dizi[i]);
            }
           
            System.out.println("dizinin sol maxSum:"+maxSubSum(soldizi));
           
            System.out.println("dizinin sağ maxSum:"+maxSubSum(sagdizi));
        }else{
            for (int i = 0; i < (dizi.length/2); i++) {
                soldizi.add(dizi[i]);
            }
            for (int i = (dizi.length/2); i < (dizi.length); i++) {
                sagdizi.add(dizi[i]);
            }
           
            System.out.println("dizinin sol maxSum:"+maxSubSum(soldizi));
            System.out.println("dizinin sağ maxSum:"+maxSubSum(sagdizi));
        }
        
    }
  static int maxSubSum(List<Integer> dizi){

    int maxSum=0;

    int i,j,k;
    for(i=0; i< dizi.size();i++){
	
        for ( j=i;j<dizi.size();j++){
            int thisSum=0;
            for( k=i;k<=j;k++){
                thisSum += dizi.get(k);
            }
            if(thisSum > maxSum)
            {
                maxSum = thisSum;
            }
        }
    }
    return maxSum;
}
    public static void main(String[] args) {
        final long baslangic = System.nanoTime();
        int[] dizi = new int[20000];
        for (int i=0; i<20000; i++){
            int n = (int)(Math.random()*125  - 56);
            dizi[i] = n;
        }
        maxSum(dizi); 
        final long bitis = System.nanoTime();
        System.out.println("Toplam derleme zamanı: " + (bitis - baslangic) );
}
    
}
