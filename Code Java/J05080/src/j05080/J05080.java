package j05080;

import java.util.ArrayList;
import java.util.Collections;
import java.util.Comparator;
import java.util.HashMap;
import java.util.Scanner;

public class J05080 {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = Integer.parseInt(sc.nextLine());
        ArrayList<LOP> a = new ArrayList<>();
        HashMap<String, String> map = new HashMap<>();
        while(t-->0){
            String ma = sc.nextLine();
            String ten = sc.nextLine();
            String nhom = sc.nextLine();
            String tengv = sc.nextLine();
            LOP x = new LOP(ma, ten, nhom, tengv);
            map.put(ma, ten);
            a.add(x);
        }
        t = Integer.parseInt(sc.nextLine());
        Collections.sort(a, new Comparator<LOP>(){
            @Override
            public int compare(LOP o1, LOP o2) {
                if(o1.getMa().equals(o2.getMa())){
                    return o1.getNhom().compareTo(o2.getNhom());
                }
                return o1.getMa().compareTo(o2.getMa());
            }
        });
        while(t-->0){
            String tengv = sc.nextLine();
            System.out.println("Danh sach cho giang vien " + tengv + ":");
            for(LOP x : a){
                if(x.getTengv().equals(tengv)){
                    System.out.println(x);
                }
            }
        }
    }
    
}
