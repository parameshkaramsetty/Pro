package math;

public class ModuloArithmetic {
    public static void main(String[] args) {
        
    }
    static int fastPower(int a , int b){
        int r = 1;
        while(b>0){
            if((b&1) == 1){
                r*=a;
            }
            a=a*a;
            b=b>>1;
        }
        return r;
    }
     
}
