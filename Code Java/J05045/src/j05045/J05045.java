package j05045;

import java.util.ArrayList;
import java.util.Collections;
import java.util.Comparator;
import java.util.Scanner;

public class J05045 {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = Integer.parseInt(sc.nextLine());
        ArrayList<NV> a = new ArrayList<>();
        for(int i = 1; i <= t; i++){
            String ten = sc.nextLine();
            String cv = sc.nextLine();
            int lcb = Integer.parseInt(sc.nextLine());
            int snc = Integer.parseInt(sc.nextLine());
            a.add(new NV(i, ten, cv, lcb, snc));
        }
        Collections.sort(a, new Comparator<NV>(){
            @Override
            public int compare(NV o1, NV o2){
                if(o1.Tn() > o2.Tn()) return -1;
                else if(o1.Tn() < o2.Tn()) return 1;
                return o1.Mnv().compareTo(o2.Mnv());
            }
        });
        for(NV x : a){
            System.out.println(x);
        }
    }
    
}
