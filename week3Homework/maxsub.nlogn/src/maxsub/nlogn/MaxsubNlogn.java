/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package maxsub.nlogn;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.List;
/**
 *
 * @author USER
 */
public class MaxsubNlogn {

    /**
     * @param args the command line arguments
     */
    static int maxSum(int dizi[])
    {
        int solToplamMax=0;
        int solToplam=0;
        for (int i = (dizi.length/2)-1; i > -1; i--) {
            solToplam = solToplam + dizi[i];
            if (solToplam>solToplamMax) {
                solToplamMax=solToplam;
            }
        }
        int sagToplamMax=0;
        int sagToplam=0;
        for (int i = (dizi.length/2); i < dizi.length; i++) {
            sagToplam = sagToplam + dizi[i];
            if (sagToplam>sagToplamMax) {
                sagToplamMax=sagToplam;
            }
        }
        return solToplamMax+sagToplamMax;
    }
  static int find_max_triple(int a,int b,int c){
    if (a>b){
        if (b>c){
            return a;
        }
        else if (a>c){
            return a;
        }
        else{
            return c;
        }
    }
    else if( b>c){
        return b;
    }
    else{
        return c;
    }
  }
    static int arraySum(int dizi[])
    {
        int sum=0;
        for (int i : dizi)
            sum = sum + i;
        return sum;
    }
    static int solToplam=0;
    static int sagToplam=0;
    static int tOrta=0;
    static int maxSubSum(int dizi[] ){
   
    if(dizi.length<2)
    {
        return arraySum(dizi);
    }
    else
    {
        int orta=(dizi.length)/2;
        
        solToplam=maxSubSum(Arrays.copyOfRange(dizi, 0, orta));
        sagToplam=maxSubSum(Arrays.copyOfRange(dizi, orta, dizi.length));
        tOrta=maxSum(dizi);
    }
   return find_max_triple(solToplam,sagToplam,tOrta);
  }
    public static void main(String[] args) {
        int[] dizi = new int[20000];
        for (int i=0; i<20000; i++){
        int n = (int)(Math.random()*125 - 56);
        dizi[i] = n;
       }
        
        final long baslangic = System.nanoTime();
        int sonuc=maxSubSum(dizi);
        System.out.println(sonuc);
        final long bitis = System.nanoTime();
        System.out.println("Toplam derleme zamanı: " + (bitis - baslangic) );
    }
    
}
