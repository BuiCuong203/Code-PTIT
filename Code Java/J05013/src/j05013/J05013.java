package j05013;

import java.util.ArrayList;
import java.util.Collections;
import java.util.Comparator;
import java.util.Scanner;

public class J05013 {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = Integer.parseInt(sc.nextLine());
        ArrayList<TD> a = new ArrayList<>();
        for(int i = 1; i <= t; i++){
            String ten = sc.nextLine();
            double lt = Double.parseDouble(sc.nextLine());
            double th = Double.parseDouble(sc.nextLine());
            a.add(new TD(i, ten, lt, th));
        }
        Collections.sort(a, new Comparator<TD>(){
            @Override
            public int compare(TD o1, TD o2) {
                if(o1.getTb() > o2.getTb()) return -1;
                return 1;
            }
        });
        for(TD x : a){
            System.out.println(x);
        }
    }
    
}
