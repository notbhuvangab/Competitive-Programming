public class ek02 implements Runnable{
    public static void main(String args[]){
        Thread t = new Thread(this);
        t.start();
    }
    
    public void run(){
        System.out.println("test");
    }
}