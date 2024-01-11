import java.util.*;
class Pro{
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        // the data type in the generic matters
        ArrayList<Integer> a = new ArrayList<Integer>();
        //add - we use the element in collection
        a.add(1);
        a.add(2);
        a.add(3);
        System.out.println(a);
        // addAll - we use collection and method to add all elements in the list
        Collections.addAll(a,4,5,6);
        System.out.println(a);
        // clear - use the arraylist
        a.clear();
        System.out.println(a);
        // contains - to check whether a element is present in the arraylist or not
        // depends on the type you have stored
        a.add(1);
        a.add(2);
        a.add(3);
        System.out.println(a.contains(3));
        
        //containsAll - used to check whether a list is present in the given list
        ArrayList<Integer> b = new ArrayList<Integer>(Arrays.asList(1,2,3,4));
        ArrayList<Integer> c = new ArrayList<Integer>(Arrays.asList(1,2));
        System.out.println(b.containsAll(c));
        
        String s = "hello";
        String t = "hello";
        System.out.println(s.equals(t));// to check whether the elements are equal or not
        
        int z[] = new int[]{1,2,3};
        int y[] = new int[]{1,2,3};
        // to check 2 arrays are equal or not
        System.out.println(Arrays.equals(z,y));
        
        // isempty()
        //         to check whether a element is empty or not
        String p ="";// we can check for arrayLists and remaining
        System.out.println(p.isEmpty());
        
        
        //   iterator - next() , hasNext()
        //Collections.max(element);
        System.out.println(Collections.max(b));
        
        // remove(element)
        b.remove(1);//removes the element at index 1
        b.remove(new Integer(3)); // we are giving a object directly to remove the index
        System.out.println(b);
        
        // removeAll -> used to remove all the elements in the list based on a list
        a.removeAll(b);
        System.out.println(a);
        
        ArrayList<Integer> r = new ArrayList<>(Arrays.asList(1,2,3));
        System.out.println(Arrays.toString(r.toArray()));
        
        // to get size of array - r.size()
        
        // List -> ArrayList , LinkedList , Vector 
        // Functions - add , remove , get , size , set
        
        
        
        

    }
}