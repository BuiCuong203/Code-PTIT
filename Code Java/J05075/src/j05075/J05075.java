package j05075;

import java.util.ArrayList;
import java.util.HashMap;
import java.util.Scanner;

public class J05075 {

    public static int Diem(String s){
        int diem = 10;
        for(int i = 0; i < s.length(); i++){
            if(s.charAt(i) == 'm') diem -= 1;
            else if(s.charAt(i) == 'v') diem -= 2;
        }
        if(diem < 0) return 0;
        return diem;
    }
    
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = Integer.parseInt(sc.nextLine());
        HashMap<String, Integer> map = new HashMap<>();
        ArrayList<SV> a = new ArrayList<>();
        for(int i = 0; i < t; i++){
            String msv = sc.nextLine();
            String ten = sc.nextLine();
            String lop = sc.nextLine();
            SV x = new SV(msv, ten, lop);
            a.add(new SV(msv, ten, lop));
        }
        for(int i = 0; i < t; i++){
            String[] s = sc.nextLine().split("\\s+");
            String msv = s[0];
            String dd = s[1];
            map.put(msv, Diem(dd));
        }
        String lop = sc.nextLine();
        for(SV x : a){
            if(x.getLop().equals(lop)){
                if(map.get(x.getMsv()) == 0){
                    System.out.println(x + " " + map.get(x.getMsv()) + " KDDK");
                }
                else{
                    System.out.println(x + " " + map.get(x.getMsv()));
                }
            }
        }
    }
    
}
