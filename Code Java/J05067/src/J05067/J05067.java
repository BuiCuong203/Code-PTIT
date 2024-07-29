package J05067;

import java.util.ArrayList;
import java.util.Scanner;

public class J05067 {

    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);
        int t = Integer.parseInt(sc.nextLine());
        ArrayList<QLXD> a = new ArrayList<>();
        while(t-->0){
            String[] s = sc.nextLine().split("\\s+");
            String ma = s[0];
            int sl = Integer.parseInt(s[1]);
            a.add(new QLXD(ma, sl));
        }
        for(QLXD x : a){
            System.out.println(x);
        }
    }
}
