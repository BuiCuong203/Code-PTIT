package j05017;

import java.util.ArrayList;
import java.util.Collections;
import java.util.Comparator;
import java.util.Scanner;

public class J05017 {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = Integer.parseInt(sc.nextLine());
        ArrayList<HD> a = new ArrayList<>();
        for(int i = 1; i <= t; i++){
            String ten = sc.nextLine();
            int cu = Integer.parseInt(sc.nextLine());
            int moi = Integer.parseInt(sc.nextLine());
            a.add(new HD(i, ten, cu, moi));
        }
        Collections.sort(a, new Comparator<HD>(){
            @Override
            public int compare(HD o1, HD o2) {
                if(o1.getTong() > o2.getTong()) return -1;
                return 1;
            }
        });
        for(HD x : a){
            System.out.println(x);
        }
    }
    
}
