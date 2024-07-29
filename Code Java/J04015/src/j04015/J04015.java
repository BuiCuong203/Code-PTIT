package j04015;

import java.util.Scanner;

public class J04015 {

    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        Salary a = new Salary(in.nextLine(), in.nextLine(), in.nextInt());
        System.out.println(a);
    }
    
}
