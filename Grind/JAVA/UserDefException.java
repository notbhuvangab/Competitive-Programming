import java.util.*;

class Vote extends Exception {
    Vote(String str) {
        super(str);
    }
}

class UserDefException {
    public static void meth1(int age) throws Vote {
        if (age < 18)
            throw new Vote("Not eligible to vote");
        System.out.println("Eligible to vote");
    }

    public static void main(String[] args) {
        Scanner s = new Scanner(System.in);
        System.out.println("enter your age:");
        int age = s.nextInt();
        try {
            meth1(age);
        } catch (Vote v) {
            System.out.println("Error " + v);
        }
        s.close();
    }
}