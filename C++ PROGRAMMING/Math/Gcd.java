/**
 * Gcd
 */
import java.util.*;
import java.math.BigInteger;
public class Gcd {
    public static int calculateGcd(int a, int b) {
        if (b == 0) {
            return a;
        } else {
            return calculateGcd(b, a % b);
        }
    }
    public static void main(String[] args){
        // calculating gcd of two numbers
        // 1) Using inbuilt method
        int a = 18, b = 8;
        // convert to BigInteger
        BigInteger n1 = new BigInteger(a+"");// converting integer to string => a + "" or we can use the method => Integer.toString(a)
        BigInteger n2 = new BigInteger(Integer.toString(b));
        System.out.println(n1.gcd(n2));
        // 2) Using Normal approach - using recursion
        System.out.println(calculateGcd(a,b));

    }
}