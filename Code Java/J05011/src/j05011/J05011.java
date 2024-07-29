package j05011;

import java.util.ArrayList;
import java.util.Collections;
import java.util.Comparator;
import java.util.Scanner;

public class J05011 {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = Integer.parseInt(sc.nextLine());
        ArrayList<Manage> a = new ArrayList<>();
        while(t-->0){
            String ma = sc.nextLine();
            String ten = sc.nextLine();
            String vao = sc.nextLine();
            String ra = sc.nextLine();
            a.add(new Manage(ma, ten, vao, ra));
        }
        Collections.sort(a);
        for(Manage x : a){
            System.out.println(x);
        }
    }
    
}
