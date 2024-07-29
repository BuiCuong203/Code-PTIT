package j05053;

import java.util.ArrayList;
import java.util.Collections;
import java.util.Comparator;
import java.util.Scanner;

public class J05053 {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = Integer.parseInt(sc.nextLine());
        ArrayList<DH> a = new ArrayList<>();
        while(t-->0){
            String ten = sc.nextLine();
            String mdh = sc.nextLine();
            long gia = Long.parseLong(sc.nextLine());
            long sl = Long.parseLong(sc.nextLine());
            a.add(new DH(ten, mdh, gia, sl));
        }
        Collections.sort(a, new Comparator<DH>(){
            @Override
            public int compare(DH o1, DH o2) {
                return o1.getStt().compareTo(o2.getStt());
            }
            
        });
        for(DH x : a){
            System.out.println(x);
        }
    }
    
}
