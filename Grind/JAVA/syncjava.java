class Display {
     public synchronized void wish(String name) {
        for (int i = 0; i < 10; i++) {
            System.out.print("Good morning : ");
            try {
                Thread.sleep(2000);
            } catch (InterruptedException e) {
            }
            System.out.println(name);
        }
    }
}

class Lmaothread extends Thread {
    Display d;
    String name;

    Lmaothread(Display d, String name) {
        this.d = d;
        this.name = name;
    }

    public void run() {
        d.wish(name);
    }
}

class Demo10 {
    public static void main(String args[]) {
        Display d = new Display();
        Lmaothread t1 = new Lmaothread(d, "SHIVA");
        Lmaothread t2 = new Lmaothread(d, "RAVI KRIAN");
        t1.start();
        t2.start();
    }
}