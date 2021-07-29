public class exTest {
    public static void main(String args[]) {
        System.out.println("Hello");
        System.out.println("VITS");
        try
 {
 System.out.println(10/0);
 }
 catch(ArithmeticException ae)
 {
 System.out.println("Denominator cant be Zero"); 
 }

        System.out.println("Have a nice day");
        System.out.println("Bye");
    }
}
