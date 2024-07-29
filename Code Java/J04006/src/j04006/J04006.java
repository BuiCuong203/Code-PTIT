package j04006;

import java.util.Scanner;



public class J04006 {

    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        Student hs = new Student(in.nextLine(), in.next(), in.next(), in.nextFloat());
        System.out.println(hs);
    }
    
}
