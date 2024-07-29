package j05068;

import java.util.ArrayList;
import java.util.Collections;
import java.util.Comparator;
import java.util.Scanner;

public class J05068 {

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
        Collections.sort(a, new Comparator<QLXD>(){
            @Override
            public int compare(QLXD o1, QLXD o2) {
                if(o1.getTt() > o2.getTt()) return -1;
                return 1;
            }
            
        });
        for(QLXD x : a){
            System.out.println(x);
        }
    }
    
}
