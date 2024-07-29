package j05010;

import java.util.ArrayList;
import java.util.Collections;
import java.util.Comparator;
import java.util.Scanner;

public class J05010 {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        ArrayList<MH> a = new ArrayList<>();
        int t = Integer.parseInt(sc.nextLine());
        for(int i = 1; i <= t; i++){
            String ten = sc.nextLine();
            String nhom = sc.nextLine();
            double mua = Float.parseFloat(sc.nextLine());
            double ban = Float.parseFloat(sc.nextLine());
            a.add(new MH(i, ten, nhom, mua, ban));
        }
        Collections.sort(a, new Comparator<MH>(){
            @Override
            public int compare(MH o1, MH o2){
                if(o1.getLai() > o2.getLai()) return -1;
                else return 1;
            }
        });
        for(MH x : a){
            System.out.println(x);
        }
    }
    
}
