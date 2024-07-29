package j05032;

import java.util.ArrayList;
import java.util.Collections;
import java.util.Comparator;
import java.util.Scanner;

public class J05032 {

    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        ArrayList<Person> a = new ArrayList<>();
        for(int i = 0; i < t; i++){
            sc.nextLine();
            String ten = sc.next();
            String ns = sc.next();
            a.add(new Person(ten, ns));
        }
        Collections.sort(a, new Comparator<Person>(){
            @Override
            public int compare(Person o1, Person o2) {
                return o2.getNs().compareTo(o1.getNs());
            }
        });
        System.out.println(a.get(0));
        System.out.println(a.get(a.size() - 1));
    }
    
}
