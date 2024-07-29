package j05057;

import java.util.ArrayList;
import java.util.Scanner;

public class J05057 {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = Integer.parseInt(sc.nextLine());
        ArrayList<BD> a = new ArrayList<>();
        for(int i = 1; i <= t; i++){
            String ma = sc.nextLine();
            String ten = sc.nextLine();
            float toan = Float.parseFloat(sc.nextLine());
            float ly = Float.parseFloat(sc.nextLine());
            float hoa = Float.parseFloat(sc.nextLine());
            a.add(new BD(ma, ten, toan, ly, hoa));
        }
        for(BD x : a){
            System.out.println(x);
        }
    }
    
}
