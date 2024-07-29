package j05035;

import java.util.ArrayList;
import java.util.Collections;
import java.util.Comparator;
import java.util.Scanner;

public class J05035 {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = Integer.parseInt(sc.nextLine());
        ArrayList<Student> a = new ArrayList<>();
        for(int i = 1; i <= t; i++){
            a.add(new Student(i, sc.nextLine(), sc.nextLine(), sc.nextLine(), sc.nextLine(), sc.nextLine()));
        }
        Collections.sort(a, new Comparator<Student>(){
            @Override
            public int compare(Student o1, Student o2){
                return o1.getMsv().compareTo(o2.getMsv());
            }
        });
        int n = Integer.parseInt(sc.nextLine());
        for(int i = 0; i < n; i++){
            String tmp = sc.nextLine();
            for(Student x : a){
                if(x.getDn().equals(tmp)){
                    System.out.println(x);
                }
            }
        }
    }
    
}
