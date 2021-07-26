import java.util.*;
class Demo3 
{
 public static void main(String args[]) 
 {
 Stack<Integer> st = new Stack<Integer>();
 st.push(30);
 st.push(20);
 st.push(10);
 System.out.println(st);
 st.pop();
 System.out.println(st);
 }
}