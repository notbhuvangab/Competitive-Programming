import java.util.*;

class Demo1 {
    public static void main(String args[]) {
        ArrayList<String> al = new ArrayList<String>();
        al.add("A");
        al.add("B");
        al.add("C");
        al.add("D");
        al.add("E");
        al.add("F");
        System.out.println(al);
        System.out.println(al.size());
        String s = al.get(0);
        System.out.println("The First Element is: " + s);
        al.add(3, "Z");
        System.out.println(al);
        al.remove("E");
        System.out.println(al);
        al.remove(2);
        System.out.println(al);
    }
}