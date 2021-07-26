import java.util.*;

class Demo1 {
    public static void main(String args[]) {
        Vector<Integer> v = new Vector<Integer>(3, 2);
        System.out.println(v.size());
        System.out.println(v.capacity());
        v.addElement(5);
        v.add(6);
        v.add(0, 4);
        System.out.println(v);
        System.out.println(v.capacity());
        v.addElement(7);
        System.out.println(v);
        System.out.println(v.capacity());
        System.out.println(v.firstElement());
        System.out.println(v.lastElement());
        if (v.contains(7))
            System.out.println("Vector contains 7");
    }
}