package j05051;

import java.util.ArrayList;
import java.util.Collections;
import java.util.Comparator;
import java.util.Scanner;

public class J05051 {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        ArrayList<TD> a = new ArrayList<>();
        for(int i = 1; i <= t; i++){
            sc.nextLine();
            String loaiSD = sc.nextLine();
            int cu = sc.nextInt();
            int moi = sc.nextInt();
            a.add(new TD(i, loaiSD, cu, moi));
        }
        Collections.sort(a, new Comparator<TD>(){
           @Override
           public int compare(TD o1, TD o2){
               if(o1.Tong() > o2.Tong()) return -1;
               else return 1;
           }
        });
        for(TD x : a){
            System.out.println(x);
        }
    }
    
}
