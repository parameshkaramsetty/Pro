import java.util.*;
public class HashMaps {
    public static void main(String[] args) {
        int a[] = {1,2,3,4,5,1,2,1,1};
        Map<Integer,Integer> m = new HashMap<>();
        for(int i: a){
            m.put(i,m.getOrDefault(i, 0)+1);
        }
        for(Map.Entry<Integer,Integer> entry : m.entrySet()){
            System.out.println(entry.getKey() + " "+ entry.getValue());
        }
        // to get frequency of a particular element
        System.out.println(m.get(1));//4



    }
}
