import java.util.*;
class MainRaLabbe
{
 public static void main(String args[]) 
 {
 Calendar c1 = Calendar.getInstance();
 String months[] = {
"Jan", "Feb", "Mar", "Apr",
"May", "June", "Jul", "Aug",
"Sep", "Oct", "Nov", "Dec"};
 System.out.print("Date: ");
 System.out.print(c1.get(Calendar.DATE)+" ");
 int m = c1.get(Calendar.MONTH);
 System.out.print(months[m]+" ");
 System.out.println(c1.get(Calendar.YEAR));
 System.out.print("Time: ");
 System.out.print(c1.get(Calendar.HOUR) + ":");
 System.out.print(c1.get(Calendar.MINUTE) + ":");
 System.out.println(c1.get(Calendar.SECOND)); 
 }
}