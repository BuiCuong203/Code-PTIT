package j05014;

import java.util.ArrayList;
import java.util.Collections;
import java.util.Comparator;
import java.util.Scanner;

public class J05014 {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = Integer.parseInt(sc.nextLine());
        ArrayList<GV> a = new ArrayList<>();
        for(int i = 1; i <= t; i++){
            String ten = sc.nextLine();
            String maxt = sc.nextLine();
            double diem1 = Double.parseDouble(sc.nextLine());
            double diem2 = Double.parseDouble(sc.nextLine());
            a.add(new GV(i, ten, maxt, diem1, diem2));
        }
        Collections.sort(a, new Comparator<GV>(){
            @Override
            public int compare(GV o1, GV o2) {
                if(o1.getTong() > o2.getTong()) return -1;
                return 1;
            }
            
        });
        for(GV x : a){
            System.out.println(x);
        }
    }
    
}
