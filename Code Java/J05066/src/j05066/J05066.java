package j05066;

import java.util.ArrayList;
import java.util.Collections;
import java.util.HashMap;
import java.util.Scanner;

public class J05066 {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = Integer.parseInt(sc.nextLine());
        ArrayList<NV> a = new ArrayList<>();
        HashMap<String, Integer> map = new HashMap<>();
        while(t-->0){
            String s = sc.nextLine();
            String ma = s.substring(0, 7);
            String ten = s.substring(8);
            String tmp = ma.substring(0, 2);
            if((tmp.equals("GD") && Integer.parseInt(ma.substring(4)) > 1) || (tmp.equals("TP") && Integer.parseInt(ma.substring(4)) > 3) || (tmp.equals("PP") && Integer.parseInt(ma.substring(4)) > 3)){
                a.add(new NV("NV" + ma.substring(2), ten));
            }
            else a.add(new NV(ma, ten));
        }
        Collections.sort(a);
        int k = Integer.parseInt(sc.nextLine());
        while(k-->0){
            String key = sc.nextLine().toLowerCase();
            for(int i = 0; i < a.size(); i++){
                if(a.get(i).getTen().toLowerCase().contains(key)){
                    System.out.println(a.get(i));
                }
            }
        }
    }
    
}
