import java.util.*;
class Demo6 
{
 public static void main(String args[]) 
 {
 Formatter fmt = new Formatter();
 fmt.format("Formatting %s is easy %d %4.2f", "with Java", 10, 98.6);
 System.out.println(fmt);
 fmt.close();
 }
}
