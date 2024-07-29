package j05043;

import java.util.ArrayList;
import java.util.Scanner;

public class J05043 {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = Integer.parseInt(sc.nextLine());
        ArrayList<NV> a = new ArrayList<>();
        for(int i = 1; i <= t; i++){
            String ten = sc.nextLine();
            String cv = sc.nextLine();
            int lcb = Integer.parseInt(sc.nextLine());
            int snc = Integer.parseInt(sc.nextLine());
            a.add(new NV(i, ten, cv, lcb, snc));
        }
        for(NV x : a){
            System.out.println(x);
        }
    }
    
}
