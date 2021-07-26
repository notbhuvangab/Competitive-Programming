
import java.util.TreeSet;
import java.util.Comparator;

class Student
{
  int roll;

  Student(int roll)
  {
    this.roll=roll;
  }
  void display()
  {
    System.out.println(roll);
  }
}
public class wtf{
    public static void main(String[] args) {

      TreeSet<Student> hs = new TreeSet<Student>(new Shrita());
      Student s1= new Student(45);
      Student s2= new Student(456);
      Student s3= new Student(5);
      Student s4= new Student(4);


      hs.add(s1);
      hs.add(s2);
      hs.add(s3);
      hs.add(s4);

     for(Student X:hs)
        X.display( );

    }
}

class Shrita implements Comparator<Student>
{
  public int compare(Student s1,Student s2)
  {
     return  s1.roll>s2.roll?1:-1;
  }
}