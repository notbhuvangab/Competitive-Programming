class UrThread implements Runnable {
    public void run() {
        for (int i = 0; i < 10; i++) {
            System.out.println("Child Thread:" + i);
            try {
                Thread.sleep(1000);
            } catch (InterruptedException e) {
                System.out.println(e);
            }
        }
    }
}

class ThreadPriorityMowa{
    public static void main(String args[]) {
        UrThread m = new UrThread();
        Thread t1 = new Thread(m);
        t1.start();
        for (int i = 0; i < 10; i++) {
            System.out.println("Main Thread:" + i);
            try {
                Thread.sleep(5000);
            } catch (InterruptedException e) {
                System.out.println(e);
            }
        }
    }
}