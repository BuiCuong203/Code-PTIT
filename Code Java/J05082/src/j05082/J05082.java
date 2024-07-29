package j05082;

import java.util.ArrayList;
import java.util.Collections;
import java.util.Comparator;
import java.util.Scanner;

public class J05082 {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = Integer.parseInt(sc.nextLine());
        ArrayList<KH> a = new ArrayList<>();
        for(int i = 1; i <= t; i++){
            String ten = sc.nextLine();
            String gt = sc.nextLine();
            String ns = sc.nextLine();
            String dc = sc.nextLine();
            a.add(new KH(i, ten, gt, ns, dc));
        }
        Collections.sort(a, new Comparator<KH>(){
            @Override
            public int compare(KH o1, KH o2) {
                return o1.getSort().compareTo(o2.getSort());
            }
        });
        for(KH x : a){
            System.out.println(x);
        }
    }
    
}
