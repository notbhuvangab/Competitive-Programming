import java.io.*;
class FileRead
{
public static void main(String args[]) throws IOException
{
 FileReader fr=new FileReader("input.txt");
 BufferedReader br=new BufferedReader(fr);
 String s;
 
 System.out.println("The File Content is:");
//  while((s=br.readLine())!=null)
 s = br.readLine();
 System.out.println(s);
 br.close();
}
}
