package j05012;

import java.util.ArrayList;
import java.util.Collections;
import java.util.Comparator;
import java.util.Scanner;

public class J05012 {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = Integer.parseInt(sc.nextLine());
        ArrayList<TT> a = new ArrayList<>();
        while(t-->0){
            String ma = sc.nextLine();
            String ten = sc.nextLine();
            long sl = Long.parseLong(sc.nextLine());
            long dg = Long.parseLong(sc.nextLine());
            long ck = Long.parseLong(sc.nextLine());
            a.add(new TT(ma, ten, sl, dg, ck));
        }
        Collections.sort(a, new Comparator<TT>(){
            @Override
            public int compare(TT o1, TT o2) {
                if(o1.getTien() > o2.getTien()) return -1;
                return 1;
            }
            
        });
        for(TT x : a){
            System.out.println(x);
        }
    }
    
}
