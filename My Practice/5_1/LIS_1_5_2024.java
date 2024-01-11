// "static void main" must be defined in a public class.
import java.util.*;
public class Main {
    public static int findLIS(int[] a,int n){
        ArrayList<Integer> b = new ArrayList<>();
        b.add(a[0]);
        int p;
        for(int i=1;i<a.length;i++){
            if(a[i]>b.get(b.size()-1)){
                b.add(a[i]);
            }
            else{
                int t = Collections.binarySearch(a,a[i]);
                if(t<0){
                    p = -1*(-1+t);
                }
                else{
                    p = t;
                }
                b.set(p,a[i]);
                
            }
            return b.size();
        }
    }
    public static void main(String[] args) {
        int[] a ={10,9,2,5,3,7,101,18};
        ArrayList<Integer> al = new ArrayList<Integer>();
        for(int i:a){
            al.add(i);
        }
        System.out.println(Arrays.toString(al.toArray()));
        System.out.println(findLIS(a,al.length));
        
    }
}