package j05021;

import java.util.ArrayList;
import java.util.Collections;
import java.util.Comparator;
import java.util.Scanner;

public class J05021 {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        ArrayList<Student> a = new ArrayList<>();
        while(sc.hasNext()){
            String msv = sc.nextLine();
            String ten = sc.nextLine();
            String lop = sc.nextLine();
            String email = sc.nextLine();
            a.add(new Student(msv, ten, lop, email));
        }
        Collections.sort(a, new Comparator<Student>(){
            @Override
            public int compare(Student o1, Student o2){
                return o1.getMsv().compareTo(o2.getMsv());
            }
        });
        for(Student x : a){
            System.out.println(x);
        }
    }
    
}
