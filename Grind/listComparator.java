import java.util.*;

class Lmao{
    String name;
    int age;

    Lmao(String name,int age){
        this.name = name;
        this.age = age;
    }

    public void displayKarBro(){
        System.out.println("Name of this guy:" + name);
        System.out.println("Age of this guy" + age);
    }
}

class MainWalaClass{
    public static void main(String args[]){

        List<Lmao> itList = new ArrayList<Lmao>();

        Lmao s1 = new Lmao("big d bhuvan",18);
        Lmao s2 = new Lmao("small d sai",21);
        Lmao s3 = new Lmao("directorSaab",19);
        Lmao s4 = new Lmao("Shrita",20);

        itList.add(s1);
        itList.add(s2);
        itList.add(s3);
        itList.add(s4);
        
        Collections.sort(itList,new A());
        for(Lmao x:itList){
            x.displayKarBro();
        }

    }
}

class A implements Comparator<Lmao>{
    public int compare(Lmao obj1,Lmao obj2){
       return obj1.age > obj2.age? 1:-1;
    }
}
