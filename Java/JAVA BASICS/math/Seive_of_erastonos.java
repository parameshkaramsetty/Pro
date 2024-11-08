package math;
import java.util.*;
class Seive_of_erastonos {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = 100;
        boolean[] bp = new boolean[n+1];
        Arrays.fill(bp,true);
        // System.out.println(Arrays.toString(bp));
        bp[0]=false;
        bp[1]=false;
        for(int i=2;i*i<n;i++){
            for(int j=2*i;j<n;j+=i){
                bp[j]=false;
            }
        }
        // System.out.println(Arrays.toString(bp));
        for(int i=2;i<100;i++){
            if (bp[i]){
                System.out.print(i+" ");
            }
        }
    }
    
}
