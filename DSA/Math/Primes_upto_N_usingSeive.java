/**
 * Prime_or_not_using_seive
 */

import java.util.*;

public class Primes_upto_N_usingSeive {
    public static void givePrimes(int n){
        int a[] = new int[n+1];
        Arrays.fill(a,1);
        a[0]=0;
        a[1]=0;
        for(int i=2;i*i<n;i++){
            if(a[i]==1){
                for(int j=i*i;j<=n;j+=i){
                    a[j]=0;
                }
            }
        }
        // System.out.println(Arrays.toString(a));
            // code here
            ArrayList<Integer> aa = new ArrayList<>();
            for(int i=2;i<=n;i++){
                if(a[i]==1){
                    aa.add(i);
                }
            }
           for (Integer integer : aa) {
                System.out.print(integer+" ");
           }
    }
    public static void main(String[] args) {
        Scanner sc =  new Scanner(System.in);
        int n = sc.nextInt();
        givePrimes(n);
    }
}