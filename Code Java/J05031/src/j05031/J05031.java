package j05031;

import java.util.ArrayList;
import java.util.Collections;
import java.util.Comparator;
import java.util.Scanner;

public class J05031 {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        ArrayList<Student> a = new ArrayList<>();
        for(int i = 0; i < t; i++){
            sc.nextLine();
            String msv = sc.nextLine();
            String ten = sc.nextLine();
            String lop = sc.nextLine();
            float diem1 = sc.nextFloat();
            float diem2 = sc.nextFloat();
            float diem3 = sc.nextFloat();
            a.add(new Student(msv, ten, lop, diem1, diem2, diem3));
        }
        Collections.sort(a, new Comparator<Student>(){
            @Override
            public int compare(Student o1, Student o2) {
                return o1.getTen().compareTo(o2.getTen());
            }
        });
        for(int i = 0; i < a.size(); i++){
            System.out.printf("%d ", i + 1);
            System.out.println(a.get(i));
        }
    }
    
}
