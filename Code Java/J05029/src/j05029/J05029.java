package j05029;

import java.util.ArrayList;
import java.util.Collections;
import java.util.Comparator;
import java.util.Scanner;

public class J05029 {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = Integer.parseInt(sc.nextLine());
        ArrayList<DN> p = new ArrayList<>();
        for(int i = 0; i < t; i++){
            String ma = sc.nextLine();
            String ten = sc.nextLine();
            int sv = Integer.parseInt(sc.nextLine());
            p.add(new DN(ma, ten, sv));
        }
        Collections.sort(p, new Comparator<DN>(){
            @Override
            public int compare(DN o1, DN o2){
                if(o1.getSv() == o2.getSv()){
                    return o1.getMa().compareTo(o2.getMa());
                }
                else{
                    if(o1.getSv() > o2.getSv()) return -1;
                    else return 1;
                }
            }
        });
        int n = Integer.parseInt(sc.nextLine());
        for(int i = 0; i < n; i++){
            int a = sc.nextInt();
            int b = sc.nextInt();
            System.out.println("DANH SACH DOANH NGHIEP NHAN TU " + a + " DEN " + b + " SINH VIEN:");
            for(DN x : p){
                if(x.getSv() >= a && x.getSv() <= b){
                    System.out.println(x);
                }
            }
        }
    }
    
}
