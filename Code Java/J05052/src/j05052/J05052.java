package j05052;

import java.util.ArrayList;
import java.util.Scanner;

public class J05052 {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = Integer.parseInt(sc.nextLine());
        ArrayList<DH> a = new ArrayList<>();
        while(t-->0){
            String ten = sc.nextLine();
            String mdh = sc.nextLine();
            long gia = Long.parseLong(sc.nextLine());
            long sl = Long.parseLong(sc.nextLine());
            a.add(new DH(ten, mdh, gia, sl));
        }
        for(DH x : a){
            System.out.println(x);
        }
    }
    
}
