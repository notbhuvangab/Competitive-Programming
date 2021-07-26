import java.util.*;
class MainRaLabbe
{
 public static void main(String args[]) 
 {
 Calendar c1 = Calendar.getInstance();

 System.out.print("Date: ");
 System.out.print(c1.get(Calendar.DATE)+" ");
 System.out.print(c1.get(Calendar.MONTH)+1+" ");
 System.out.println(c1.get(Calendar.YEAR));
 System.out.print("Time: ");
 System.out.print(c1.get(Calendar.HOUR) + ":");
 System.out.print(c1.get(Calendar.MINUTE) + ":");
 System.out.println(c1.get(Calendar.SECOND)); 
 }
}