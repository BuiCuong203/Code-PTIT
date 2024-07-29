package j05072;

import java.util.ArrayList;
import java.util.Collections;
import java.util.Comparator;
import java.util.HashMap;
import java.util.Scanner;

public class J05072 {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = Integer.parseInt(sc.nextLine());
        HashMap<Integer, TP> a = new HashMap<>();
        HashMap<String, Call> b = new HashMap<>();
        ArrayList<KQ> c = new ArrayList<>();
        while(t-->0){
            int ma = Integer.parseInt(sc.nextLine());
            String tinh = sc.nextLine();
            int giacuoc = Integer.parseInt(sc.nextLine());
            TP x = new TP(ma, tinh, giacuoc);
            a.put(ma, x);
        }
        a.put(100, new TP(100, "", 800));
        t = Integer.parseInt(sc.nextLine());
        while(t-->0){
            String s = sc.nextLine();
            String tmp[] = s.split("\\s+");
            String sdt = tmp[0];
            String start = tmp[1];
            String end = tmp[2];
            Call x = new Call(sdt, start, end);
            b.put(sdt, x);
            if(sdt.charAt(0) != '0'){
                c.add(new KQ(a.get(100), b.get(sdt)));
            }
            else c.add(new KQ(a.get(Integer.parseInt(sdt.substring(0, 3))), b.get(sdt)));
        }
        Collections.sort(c, new Comparator<KQ>(){
            @Override
            public int compare(KQ o1, KQ o2) {
                if(o1.getCuoc() > o2.getCuoc()) return -1;
                return 1;
            }
            
        });
        for(KQ x : c){
            System.out.println(x);
        }
    }
    
}
