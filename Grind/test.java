
import java.util.*;
class Emp
{
 String name;
 int exp;
 Emp(String name, int exp)
 {
 this.name = name;
 this.exp = exp;
 }
 void display() {
 System.out.print(name+ " ");
 System.out.println(exp);
 }
}

class Demo12
{
 public static void main(String a[])
 {
 TreeSet<Emp> ts = new TreeSet<Emp>(new B());
 Emp e1 = new Emp("shiva",15);
 Emp e2 = new Emp("younus",13);
 Emp e3 = new Emp("anil",12);
 Emp e4 = new Emp("ravi",18);
 ts.add(e1);
 ts.add(e2);
 ts.add(e3);
 ts.add(e4);
 for(Emp x: ts)
 { 
 x.display();
 }
}
}class B implements Comparator<Emp>
{
 public int compare(Emp e1, Emp e2) 
 {
 if( e1.exp > e2.exp)
 {
 return 1;
 }
 else
 {
 return -1;
 }
 }
}
