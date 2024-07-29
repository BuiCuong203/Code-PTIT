package j05020;

import java.util.ArrayList;
import java.util.Collections;
import java.util.Comparator;
import java.util.Scanner;

public class J05020 {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = Integer.parseInt(sc.nextLine());
        ArrayList<Student> a = new ArrayList<>();
        for(int i = 1; i <= t; i++){
            String msv = sc.nextLine();
            String ten = sc.nextLine();
            String lop = sc.nextLine();
            String email = sc.nextLine();
            a.add(new Student(msv, ten, lop, email));
        }
        Collections.sort(a, new Comparator<Student>(){
            @Override
            public int compare(Student o1, Student o2){
                if(o1.getLop().equals(o2.getLop())){
                    return o1.getMsv().compareTo(o2.getMsv());
                }
                else{
                    return o1.getLop().compareTo(o2.getLop());
                }
            }
        });
        for(Student x : a){
            System.out.println(x);
        }
    }
    
}
