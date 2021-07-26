import java.util.*;
public class bitsetPrac {
    public static void main(String args[]){
        BitSet shivaram = new BitSet(8);
        BitSet ganesh = new BitSet(8);

        for(int i=0; i<8; i++) 
        {
            if((i%2) == 0) 
                shivaram.set(i);
             if((i%3) == 0) 
                ganesh.set(i);
        }
        // for(int i=0;i<8;i++)

        System.out.println(shivaram);
    }
}
