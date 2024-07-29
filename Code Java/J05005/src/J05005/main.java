package J05005;

import java.util.*;

public class main {

    public static void main(String args[]) {
        Scanner in = new Scanner(System.in);
        int n = Integer.parseInt(in.nextLine());
        ArrayList<Student> a = new ArrayList<>();
        for(int i = 1; i <= n; i++){
            a.add(new Student(i, in.nextLine(), in.nextLine(), in.nextLine(), Float.parseFloat(in.nextLine())));
        }
        Collections.sort(a);
        for(Student x : a){
            System.out.println(x);
        }
    }
}
