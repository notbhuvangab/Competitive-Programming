import java.util.*;
import java.io.*;

public class FileWriterClassRa {
    public static void main(String args[]) throws IOException{
        Scanner sc = new Scanner(System.in);
        FileWriter fw = new FileWriter("input.txt");

        String s = sc.nextLine();

        for(int i=0;i<s.length();i++){
            fw.write(s.charAt(i));
        }
        
        sc.close();
        fw.close();
    }
}
