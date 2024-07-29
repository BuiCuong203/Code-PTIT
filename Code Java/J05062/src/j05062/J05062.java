package j05062;

import java.util.ArrayList;
import java.util.Collections;
import java.util.Scanner;

public class J05062 {

    public static String check(float gpa, int rl){
        if(gpa >= 3.6 && rl >= 90) return "XUATSAC";
        else if(gpa >= 3.2 && rl >= 80) return "GIOI";
        else if(gpa >= 2.5 && rl >= 70) return "KHA";
        return "KHONG";
    }
    
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String[] t = sc.nextLine().split("\\s+");
        int n = Integer.parseInt(t[0]);
        int m = Integer.parseInt(t[1]);
        ArrayList<SV> a = new ArrayList<>();
        ArrayList<Float> b = new ArrayList<>();
        while(n-->0){
            String ten = sc.nextLine();
            String[] tmp = sc.nextLine().split("\\s+");
            Float gpa = Float.parseFloat(tmp[0]);
            int rl = Integer.parseInt(tmp[1]);
            a.add(new SV(ten, gpa, rl));
            b.add(gpa);
        }
        Collections.sort(b, (o1, o2) -> o2.compareTo(o1));
        float k = b.get(m - 1);
        for(SV x : a){
            if(x.getGpa() >= k){
                System.out.println(x.getTen() + ": " + check(x.getGpa(), x.getRl()));
            }
            else{
                System.out.println(x.getTen() + ": " + "KHONG");
            }
        }
    }
    
}
