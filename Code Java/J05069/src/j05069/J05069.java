package j05069;

import java.util.ArrayList;
import java.util.HashMap;
import java.util.Scanner;

public class J05069 {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = Integer.parseInt(sc.nextLine());
        HashMap<String, CLB> map = new HashMap<>();
        ArrayList<QL> a = new ArrayList<>();
        while(t-->0){
            String ma = sc.nextLine();
            String ten = sc.nextLine();
            int ve = Integer.parseInt(sc.nextLine());
            CLB x = new CLB(ma, ten, ve);
            map.put(ma, x);
        }
        t = Integer.parseInt(sc.nextLine());
        while(t-->0){
            String[] s = sc.nextLine().split("\\s+");
            String ma = s[0];
            int cdv = Integer.parseInt(s[1]);
            Match x = new Match(ma, cdv);
            String maclb = ma.substring(1, 3);
            a.add(new QL(map.get(maclb), x));
        }
        for(QL x : a){
            System.out.println(x);
        }
    }
    
}
