package j05042;

import java.util.ArrayList;
import java.util.Collections;
import java.util.Comparator;
import java.util.Scanner;

public class J05042 {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        ArrayList<Student> a = new ArrayList<>();
        for(int i = 0; i < t; i++){
            sc.nextLine();
            String ten = sc.nextLine();
            int AC = sc.nextInt();
            int submit = sc.nextInt();
            a.add(new Student(ten, AC, submit));
        }
        Collections.sort(a, new Comparator<Student>(){
            @Override
            public int compare(Student o1, Student o2) {
                if(o1.getAC() == o2.getAC()){
                    if(o1.getSubmit() == o2.getSubmit()){
                        return o1.getTen().compareTo(o2.getTen());
                    }
                    else{
                        if(o1.getSubmit() < o2.getSubmit()) return -1;
                        else return 1;
                    }
                }
                else{
                    if(o1.getAC() > o2.getAC()) return -1;
                    else return 1;
                }
            }
            
        });
        for(Student x : a){
            System.out.println(x);
        }
    }
    
}
