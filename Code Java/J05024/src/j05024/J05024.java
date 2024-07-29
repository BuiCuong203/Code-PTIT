package j05024;

import java.util.ArrayList;
import java.util.HashMap;
import java.util.Scanner;

public class J05024 {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = Integer.parseInt(sc.nextLine());
        ArrayList<Student> a = new ArrayList<>();
        for(int i = 1; i <= t; i++){
            String msv = sc.nextLine();
            String ten = sc.nextLine();
            String lop = sc.nextLine();
            String email = sc.nextLine();
            a.add(new Student(msv, ten, lop, email));
        }
        HashMap<String, String> mp = new HashMap<>();
        mp.put("KT", "DCKT");
        mp.put("CNTT", "DCCN");
        mp.put("ATTT", "DCAT");
        mp.put("VT", "DCVT");
        mp.put("DT", "DCDT");
        int n = Integer.parseInt(sc.nextLine());
        for(int i = 0; i < n; i++){
            String k = sc.nextLine();
            System.out.println("DANH SACH SINH VIEN NGANH " + k.toUpperCase() +":");
            String[] p = k.split("\\s+");
            String nganh = "";
            for(int j = 0; j < p.length; j++){
                nganh += p[j].toUpperCase().charAt(0);
            }
            for(Student x : a){
                if(mp.get(nganh).equals(x.getMsv())){
                    if((nganh.equals("CNTT") || nganh.equals("ATTT")) && !x.getLop()) continue;
                    System.out.println(x);
                }
            }
        }
    }
    
}
