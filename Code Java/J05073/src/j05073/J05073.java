package j05073;

import java.util.ArrayList;
import java.util.Scanner;

public class J05073 {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = Integer.parseInt(sc.nextLine());
        ArrayList<GB> a = new ArrayList<>();
        while(t-->0){
            String[] s = sc.nextLine().split("\\s+");
            String ma = s[0];
            int dg = Integer.parseInt(s[1]);
            int sl = Integer.parseInt(s[2]);
            a.add(new GB(ma, dg, sl));
        }
        for(GB x : a){
            System.out.println(x);
        }
    }
    
}
