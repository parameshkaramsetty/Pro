import java.util.*;
public class Stacks_in_java {
    public static void main(String[] args) {
        Stack<Integer> s = new Stack<>();
        // push adds elements into a stack 
        s.push(1);
        s.push(2);
        s.push(3);
        // traversal
        /* 
        while (!s.isEmpty()) {
            System.out.println(s.pop());
        }
        */
        // returns the top value and returns it and removes it
        System.out.println(s.pop());// pop - removes the topmost element and returns it
        /*
         * peek() - gives the top element without removing it from the stack
         */ 
        System.out.println(s.peek());

    }
}