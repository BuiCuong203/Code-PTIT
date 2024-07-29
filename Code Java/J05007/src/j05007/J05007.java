package j05007;

import java.text.ParseException;
import java.text.SimpleDateFormat;
import java.util.ArrayList;
import java.util.Collections;
import java.util.Comparator;
import java.util.Date;
import java.util.Scanner;

public class J05007 {

    public static void main(String[] args) throws ParseException {
        Scanner sc = new Scanner(System.in);
        SimpleDateFormat sdf = new SimpleDateFormat("dd/MM/yyyy");
        int t = Integer.parseInt(sc.nextLine());
        ArrayList<NV> a = new ArrayList<>();
        for(int i = 1; i <= t; i++){
            String ten = sc.nextLine();
            String gt = sc.nextLine();
            Date ns = sdf.parse(sc.nextLine());
            String dc = sc.nextLine();
            String mst = sc.nextLine();
            Date nkhd = sdf.parse(sc.nextLine());
            a.add(new NV(i, ten, gt, ns, dc, mst, nkhd));
        }
        Collections.sort(a, new Comparator<NV>(){
            @Override
            public int compare(NV o1, NV o2){
                return o1.getNs().compareTo(o2.getNs());
            }
        });
        for(NV x : a){
            System.out.println(x);
        }
    }
    
}
