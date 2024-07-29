package j05018;

import java.util.ArrayList;
import java.util.Arrays;
import java.util.Collections;
import java.util.Comparator;
import java.util.Scanner;

public class J05018 {

     public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        ArrayList<Student> a = new ArrayList<>();
        for (int i = 1; i <= t; i++) {
            sc.nextLine();
            String ten = sc.nextLine();
            float[] p = new float[10];
            for (int j = 0; j < 10; j++) {
                p[j] = sc.nextFloat();
            }
            a.add(new Student(ten, p));
        }

        Collections.sort(a, new Comparator<Student>(){
            @Override
            public int compare(Student o1, Student o2){
                if(o1.getDiemtb() == o2.getDiemtb()){
                    return o1.getId().compareTo(o2.getId());
                }
                else{
                    if(o1.getDiemtb() > o2.getDiemtb()) return -1;
                    else return 1;
                }
            }
        });
        for (Student x : a) {
            System.out.println(x);
        }
    }
    
}
