class Test  extends Thread{
    public static void main(String[] args){
        Test t = new Test();
        t.run();
        System.out.println(3);
    }

    public void start(){
        for(int i=0;i<10;i++){
            System.out.println("Value of i = " + i);
        }
    }
}