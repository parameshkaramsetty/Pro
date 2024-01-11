package math;

public class gcd_and_lcm {
    public static void main(String[] args) {
        System.out.println('h');
        // a * b = gcd(a,b) * lcm(a,b)
    }
    public static int gcd(int a , int b){
        while(a>0 && b>0){
            if(a>b){
                a=a%b;
            }
            else b = b%a;
        }
        if (a==0){
            return b;
        }
        else{
            return a;
        }
    }
    public static int gcd_r(int a , int b){
        if(b==0){
            return a;
        }
        return gcd(b,a%b);
    }
}
