package j04005;

import java.util.Scanner;

public class J04005 {

    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        Student a = new Student(in.nextLine(), in.next(), in.nextFloat(),in.nextFloat(),in.nextFloat());
        System.out.println(a);
    }
    
}
