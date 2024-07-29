package j05006;

import java.text.ParseException;
import java.text.SimpleDateFormat;
import java.util.ArrayList;
import java.util.Scanner;

public class J05006 {

    public static void main(String[] args) throws ParseException {
        Scanner sc = new Scanner(System.in);
        SimpleDateFormat sdf = new SimpleDateFormat("dd/MM/yyyy");
        int t = Integer.parseInt(sc.nextLine());
        ArrayList<NV> a = new ArrayList<>();
        for(int i = 1; i <= t; i++){
            String ten = sc.nextLine();
            String gt = sc.nextLine();
            String ns = sdf.format(sdf.parse(sc.nextLine()));
            String dc = sc.nextLine();
            String mst = sc.nextLine();
            String nkhd = sdf.format(sdf.parse(sc.nextLine()));
            a.add(new NV(i, ten, gt, ns, dc, mst, nkhd));
        }
        for(NV x : a){
            System.out.println(x);
        }
    }
    
}
