package j05076;

import java.util.ArrayList;
import java.util.HashMap;
import java.util.Scanner;

public class J05076 {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = Integer.parseInt(sc.nextLine());
        ArrayList<BAN> a = new ArrayList<>();
        HashMap<String, MH> map = new HashMap<>();
        while(t-->0){
            String ma = sc.nextLine();
            String ten = sc.nextLine();
            char xl = sc.nextLine().charAt(0);
            MH x = new MH(ma, ten, xl);
            map.put(ma, x);
        }
        t = Integer.parseInt(sc.nextLine());
        while(t-->0){
            String[] s = sc.nextLine().split("\\s+");
            String ma = s[0];
            int sln = Integer.parseInt(s[1]);
            int dg = Integer.parseInt(s[2]);
            int slx = Integer.parseInt(s[3]);
            BAN x = new BAN(map.get(ma), ma, sln, dg, slx);
            a.add(x);
        }
        for(BAN x : a){
            System.out.println(x);
        }
    }
    
}
