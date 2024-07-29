package j05015;

import java.util.ArrayList;
import java.util.Collections;
import java.util.Comparator;
import java.util.Scanner;

public class J05015 {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = Integer.parseInt(sc.nextLine());
        ArrayList<XD> a = new ArrayList<>();
        while(t-->0){
            String ten = sc.nextLine();
            String dv = sc.nextLine();
            String td = sc.nextLine();
            a.add(new XD(ten, dv, td));
        }
        Collections.sort(a, new Comparator<XD>(){
            @Override
            public int compare(XD o1, XD o2) {
                if(o1.getTg() < o2.getTg()) return -1;
                return 1;
            }
            
        });
        for(XD x : a){
            System.out.println(x);
        }
    }
    
}
