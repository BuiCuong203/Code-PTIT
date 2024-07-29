package b14;

import java.io.File;
import java.io.FileNotFoundException;
import java.util.ArrayList;
import java.util.Collections;
import java.util.Comparator;
import java.util.Scanner;

public class B14 {

    public static void main(String[] args) throws FileNotFoundException {
        Scanner sc = new Scanner(new File("DANHSACH.in"));
        ArrayList<Student> a = new ArrayList<>();
        while(sc.hasNext()){
            String msv = sc.nextLine();
            String ten = sc.nextLine();
            String lop = sc.nextLine();
            String email = sc.nextLine();
            String sdt = sc.nextLine();
            a.add(new Student(msv, ten, lop, email, sdt));
        }
        Collections.sort(a, new Comparator<Student>(){
            @Override
            public int compare(Student o1, Student o2) {
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
