import java.util.*;
public class Enhanced_Switch {

    public static void main(String[] args) {
        int n=1;
        switch(n){
                case 1 -> System.out.println("January");
                case 2 -> System.out.println("February");
                default -> System.out.println("Wrong Input");
        }
    }
}