package tn02012;

import java.util.ArrayList;
import java.util.HashMap;
import java.util.Scanner;

public class TN02012 {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = Integer.parseInt(sc.nextLine());
        HashMap<String, String> map = new HashMap<>();
        ArrayList<NV> a = new ArrayList<>();
        while(t-->0){
            String ma = sc.next();
            String ten = sc.nextLine();
            map.put(ma, ten);
        }
        t = Integer.parseInt(sc.nextLine());
        while(t-->0){
            String ma = sc.nextLine();
            String ten = sc.nextLine();
            int lcb = Integer.parseInt(sc.nextLine());
            int snc = Integer.parseInt(sc.nextLine());
            a.add(new NV(ma, ten, lcb, snc));
        }
        for(NV x : a){
            System.out.println(x + " " + map.get(x.getMa().substring(3)) + " " + x.getLuong());
        }
    }
    
}
