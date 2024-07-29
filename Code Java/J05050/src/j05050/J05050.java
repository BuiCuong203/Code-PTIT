package j05050;

import java.util.ArrayList;
import java.util.Scanner;

public class J05050 {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        ArrayList<TD> a = new ArrayList<>();
        for(int i = 1; i <= t; i++){
            sc.nextLine();
            String loaiSD = sc.nextLine();
            int cu = sc.nextInt();
            int moi = sc.nextInt();
            a.add(new TD(i, loaiSD, cu, moi));
        }
        for(TD x : a){
            System.out.println(x);
        }
    }
    
}
