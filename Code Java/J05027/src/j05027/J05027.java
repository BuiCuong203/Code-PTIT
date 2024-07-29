package j05027;

import java.util.ArrayList;
import java.util.Scanner;

public class J05027 {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = Integer.parseInt(sc.nextLine());
        ArrayList<GV> a = new ArrayList<>();
        for(int i = 1; i <= t; i++){
            String ten = sc.nextLine();
            String mon = sc.nextLine();
            a.add(new GV(i, ten, mon));
        }
        int n = Integer.parseInt(sc.nextLine());
        for(int i = 0; i < n; i++){
            String tk = sc.nextLine();
            String k = tk.toLowerCase();
            System.out.println("DANH SACH GIANG VIEN THEO TU KHOA " + tk + ":");
            for(GV x : a){
                if(x.getTen().contains(k)){
                    System.out.println(x);
                }
            }
        }
    }
    
}
