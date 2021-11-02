import java.util.*;

class PQueue {
    public static void main(String args[]) {
        PriorityQueue<String> p = new PriorityQueue<String>();
        p.add("Amit");
        p.add("Vijay");
        p.add("Karan");
        p.add("Jai");
        p.add("Rahul");
        for (int i = 1; i <= 5; i++) {
            String s = p.poll();
            System.out.println(s);
        }
    }
}