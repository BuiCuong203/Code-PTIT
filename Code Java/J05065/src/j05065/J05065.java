package j05065;

import java.util.ArrayList;
import java.util.Collections;
import java.util.HashMap;
import java.util.Scanner;

public class J05065 {

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
            if(tmp.equals("GD")){
                if(!map.containsKey(tmp)){
                    a.add(new NV(ma, ten));
                    map.put(tmp, 1);
                }
                else{
                    a.add(new NV("NV" + ma.substring(2), ten));
                    map.put(tmp, 100);
                }
            }
            else if(tmp.equals("TP")){
                if(!map.containsKey(tmp)){
                    a.add(new NV(ma, ten));
                    map.put(tmp, 1);
                }
                else if(map.get(tmp) <= 2){
                    a.add(new NV(ma, ten));
                    map.put(tmp, map.get(tmp) + 1);
                }
                else{
                    a.add(new NV("NV" + ma.substring(2), ten));
                    map.put(tmp, 100);
                }
            }
            else if(tmp.equals("PP")){
                 if(!map.containsKey(tmp)){
                    a.add(new NV(ma, ten));
                    map.put(tmp, 1);
                }
                else if(map.get(tmp) <= 2){
                    a.add(new NV(ma, ten));
                    map.put(tmp, map.get(tmp) + 1);
                }
                else{
                    a.add(new NV("NV" + ma.substring(2), ten));
                    map.put(tmp, 100);
                }
            }
            else a.add(new NV(ma, ten));
        }
        Collections.sort(a);
        t = Integer.parseInt(sc.nextLine());
        while(t-->0){
            String s = sc.nextLine();
            for(NV x : a){
                if(x.getCv().equals(s)){
                    System.out.println(x);
                }
            }
            System.out.println("");
        }
    }
    
}
