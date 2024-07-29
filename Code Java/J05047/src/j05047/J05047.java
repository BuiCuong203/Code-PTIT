package j05047;

import java.util.ArrayList;
import java.util.Collections;
import java.util.Comparator;
import java.util.HashMap;
import java.util.Scanner;

public class J05047 {

    public static String change(String s){
        String tmp = "";
        String a[] = s.trim().split("\\s+");
        tmp += a[0].toUpperCase().charAt(0);
        tmp += a[1].toUpperCase().charAt(0);
        return tmp;
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = Integer.parseInt(sc.nextLine());
        ArrayList<MH> a = new ArrayList<>();
        HashMap<String, Integer> mp = new HashMap<>();
        for(int i = 1; i <= t; i++){
            String ten = sc.nextLine();
            int sl = Integer.parseInt(sc.nextLine());
            int dg = Integer.parseInt(sc.nextLine());
            if(!mp.containsKey(change(ten))){
                mp.put(change(ten), 1);
                a.add(new MH(ten, mp.get(change(ten)), sl, dg));
            }
            else{
                mp.put(change(ten), mp.get(change(ten)) + 1);
                a.add(new MH(ten, mp.get(change(ten)), sl, dg));
            }
        }
        Collections.sort(a, new Comparator<MH>(){
            @Override
            public int compare(MH o1, MH o2){
                if(o1.Ck() > o2.Ck()) return -1;
                else return 1;
            }
        });
        for(MH x : a){
            System.out.println(x);
        }
    }
    
}
