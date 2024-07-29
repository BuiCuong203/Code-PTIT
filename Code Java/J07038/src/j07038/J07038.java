package j07038;

import java.io.File;
import java.io.FileNotFoundException;
import java.util.ArrayList;
import java.util.Collections;
import java.util.Comparator;
import java.util.HashMap;
import java.util.Scanner;

public class J07038 {

    public static void main(String[] args) throws FileNotFoundException {
        Scanner sc1 = new Scanner(new File("SINHVIEN.in"));
        Scanner sc2 = new Scanner(new File("DN.in"));
        Scanner sc3 = new Scanner(new File("THUCTAP.in"));
        HashMap<String, SV> map1 = new HashMap<>();
        HashMap<String, DN> map2 = new HashMap<>();
        ArrayList<TT> a = new ArrayList<>();
        int t1 = Integer.parseInt(sc1.nextLine());
        while(t1-->0){
            String masv = sc1.nextLine();
            String tensv = sc1.nextLine();
            String lop = sc1.nextLine();
            String email = sc1.nextLine();
            SV x = new SV(masv, tensv, lop, email);
            map1.put(masv, x);
        }
        int t2 = Integer.parseInt(sc2.nextLine());
        while(t2-->0){
            String madn = sc2.nextLine();
            String tendn = sc2.nextLine();
            int sosv = Integer.parseInt(sc2.nextLine());
            DN x = new DN(madn, tendn, sosv);
            map2.put(madn, x);
        }
        int t3 = Integer.parseInt(sc3.nextLine());
        while(t3-->0){
            String[] str = sc3.nextLine().split("\\s+");
            String masv = str[0];
            String madn = str[1];
            a.add(new TT(map1.get(masv), map2.get(madn)));
        }
        Collections.sort(a, new Comparator<TT>(){
            @Override
            public int compare(TT o1, TT o2) {
                return o1.getSv().compareTo(o2.getSv());
            }
            
        });
        t3 = Integer.parseInt(sc3.nextLine());
        while(t3-->0){
            String ma = sc3.nextLine();
            int cnt = 0;
            System.out.println("DANH SACH THUC TAP TAI " + map2.get(ma).getTendn() + ":");
            for(TT x : a){
                if(cnt < map2.get(ma).getSosv() && x.getDn().equals(ma)){
                    System.out.println(x);
                    cnt++;
                }
            }
        }
    }
    
}
