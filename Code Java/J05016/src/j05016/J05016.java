package j05016;

import java.util.ArrayList;
import java.util.Collections;
import java.util.Comparator;
import java.util.Scanner;

public class J05016 {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = Integer.parseInt(sc.nextLine());
        ArrayList<KS> a = new ArrayList<>();
        for(int i = 1; i <= t; i++){
            String ten = sc.nextLine();
            String sp = sc.nextLine();
            String nhan = sc.nextLine().trim();
            String tra = sc.nextLine().trim();
            int ps = Integer.parseInt(sc.nextLine());
            a.add(new KS(i, ten, sp, nhan, tra, ps));
        }
        Collections.sort(a, new Comparator<KS>(){
            @Override
            public int compare(KS o1, KS o2) {
                if(o1.getDg() > o2.getDg()) return -1;
                return 1;
            }
            
        });
        for(KS x : a){
            System.out.println(x);
        }
    }
    
}
