import java.util.*;
import java.io.*;

public class TejaGadiDoubt {
    public static void main(String args[]) throws IOException{
        Scanner sc = new Scanner(System.in);
        try(FileWriter fw = new FileWriter("input.txt")){

        String s = sc.nextLine();

        for(int i=0;i<s.length();i++){
            fw.write(s.charAt(i));
        }
        
        sc.close();
    }catch(FileNotFoundException fuck){System.out.println(fuck);}

}
}
