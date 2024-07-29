package j05009;

import java.util.ArrayList;
import java.util.Collections;
import java.util.Comparator;
import java.util.Scanner;

public class J05009 {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = Integer.parseInt(sc.nextLine());
        ArrayList<SV> a = new ArrayList<>();
        for(int i = 1; i <= t; i++){
            String ten = sc.nextLine();
            String ns = sc.nextLine();
            float diem1 = Float.parseFloat(sc.nextLine());
            float diem2 = Float.parseFloat(sc.nextLine());
            float diem3 = Float.parseFloat(sc.nextLine());
            a.add(new SV(i, ten, ns, diem1, diem2, diem3));
        }
        Collections.sort(a, new Comparator<SV>(){
           @Override
           public int compare(SV o1, SV o2){
               if(o1.getSum() > o2.getSum()) return -1;
               else return 1;
           }
        });
        float max = a.get(0).getSum();
        for(SV x : a){
            if(x.getSum() == max){
                System.out.println(x);
            }
            else break;
        }
    }
    
}
