package j04012;

import java.util.Scanner;

public class J04012 {

    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        Salary a = new Salary(in.nextLine(), in.nextInt(), in.nextInt(),in.next());
        System.out.println(a);
    }
    
}
