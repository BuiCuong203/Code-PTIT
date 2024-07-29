package j05026;

import java.util.ArrayList;
import java.util.Collections;
import java.util.Comparator;
import java.util.Scanner;

public class J05026 {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = Integer.parseInt(sc.nextLine());
        ArrayList<GV> a = new ArrayList<>();
        for(int i = 1; i <= t; i++){
            String ten = sc.nextLine();
            String mon = sc.nextLine();
            a.add(new GV(i, ten, mon));
        }
        int n = Integer.parseInt(sc.nextLine());
        for(int i = 0; i < n; i++){
            String mon = sc.nextLine();
            String k = "";
            String[] p = mon.toUpperCase().split("\\s+");
            for(int j = 0; j < p.length; j++){
                k += p[j].charAt(0);
            }
            System.out.println("DANH SACH GIANG VIEN BO MON " + k + ":");
            for(GV x : a){
                if(x.getMon().equals(k)){
                    System.out.println(x);
                }
            }
        }
    }
    
}
