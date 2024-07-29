package J05081;

import java.util.ArrayList;
import java.util.Collections;
import java.util.Scanner;

public class J05081 {
    public static void main(String args[]) {
        Scanner in = new Scanner(System.in);
        int t = Integer.parseInt(in.nextLine());
        ArrayList<Mh> a = new ArrayList<>();
        for(int i = 1; i <= t; i++){
            a.add(new Mh(i, in.nextLine(), in.nextLine(), Integer.parseInt(in.nextLine()), Integer.parseInt(in.nextLine())));
        }
        Collections.sort(a);
        for(Mh x : a){
            System.out.println(x);
        }
    }
}
