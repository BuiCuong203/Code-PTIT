package j05023;

import java.util.ArrayList;
import java.util.Scanner;

public class J05023 {

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
        int n = Integer.parseInt(sc.nextLine());
        for(int i = 0; i < n; i++){
            String k = sc.nextLine();
            System.out.println("DANH SACH SINH VIEN KHOA " + k +":");
            for(Student x : a){
                if(k.equals(x.getLop())){
                    System.out.println(x);
                }
            }
        }
    }
    
}
