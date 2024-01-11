import java.util.*;
public class StackJ {
    public static void main(String[] args) {
        Stack<Integer> s = new Stack();
        s.push(1);
        s.push(2);
        s.push(3);
        // using iteration
        Iterator<Integer> itr = s.iterator();
        while(itr.hasNext()){
            int i = itr.next();
            System.out.print(i+" ");
        }
        s.pop();
        System.out.print(Arrays.toString(s.toArray()));
        
    }
}
