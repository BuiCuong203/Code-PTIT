package j05059;

import java.util.ArrayList;
import java.util.Collections;
import java.util.Comparator;
import java.util.Scanner;

public class J05059 {

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
        Collections.sort(a, new Comparator<BD>(){
            @Override
            public int compare(BD o1, BD o2) {
                if(o1.getTong() > o2.getTong()) return -1;
                return 1;
            }
            
        });
        float diemchuan = 0;
        int chitieu = Integer.parseInt(sc.nextLine());
        for(BD x : a){
            chitieu--;
            if(chitieu == 0){
                diemchuan = x.getTong();
            }
        }
        System.out.printf("%.1f\n", diemchuan);
        for(BD x : a){
            if(x.getTong() >= diemchuan){
                System.out.println(x + "TRUNG TUYEN");
            }
            else{
                System.out.println(x + "TRUOT");
            }
        }
    }
    
}
