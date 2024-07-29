package j05019;

import java.util.ArrayList;
import java.util.HashMap;
import java.util.Map;
import java.util.Scanner;

public class J05019 {

    public static long change(String s1, String s2){
          int pst = Integer.parseInt(s1.substring(3));
          int pkt = Integer.parseInt(s2.substring(3));
          int gbt = Integer.parseInt(s1.substring(0, 2));
          int gkt = Integer.parseInt(s2.substring(0, 2));
          if(pkt < pst){
              pkt += 60;
              --gkt;
          }
          return (gkt - gbt) * 60 + (pkt - pst);         
      }
      public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        int n = Integer.parseInt(sc.nextLine());
        HashMap<String, Integer> map = new HashMap<>();
        HashMap<String, Long> map1 = new HashMap<>();
        HashMap<String, Long> map2 = new HashMap<>();
        ArrayList<LM> a = new ArrayList<>();
        int cnt = 0;
        for(int i = 1 ; i <= n;i++){
            String tentram = sc.nextLine();
            String st = sc.nextLine();
            String end = sc.nextLine();
            long lm = Long.parseLong(sc.nextLine());
            if(!map.containsKey(tentram)){
                ++cnt;
                a.add(new LM(cnt, tentram, st, end, lm));
                map.put(tentram, 1); 
            }
            else{
                map.put(tentram, map.get(tentram) + 1);
            }
            if(!map1.containsKey(tentram)){
                map1.put(tentram, change(st, end));
            }
            else{
                map1.put(tentram, map1.get(tentram) + change(st, end));
            }
            if(!map2.containsKey(tentram)){
                map2.put(tentram, lm);
            }
            else{
                map2.put(tentram, map2.get(tentram) + lm);
            }
        }
        for(LM x : a){
            System.out.println(x + " " + String.format("%.2f", (1f * map2.get(x.getTram())) / (1f * map1.get(x.getTram())) * 60));
        }
    }
    
}
