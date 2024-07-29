package j05064;

import java.util.ArrayList;
import java.util.HashMap;
import java.util.Scanner;

public class J05064 {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = Integer.parseInt(sc.nextLine());
        ArrayList<GV> a = new ArrayList<>();
        HashMap<String, Integer> map = new HashMap<>();
        while(t-->0){
            String ma = sc.nextLine();
            String ten = sc.nextLine();
            int lcb = Integer.parseInt(sc.nextLine());
            a.add(new GV(ma, ten, lcb));
        }
        for(GV x : a){
            if(!map.containsKey(x.getMa())){
                System.out.println(x);
                map.put(x.getMa(), 1);
            }
            else{
                if(x.getMa().equals("HP") && map.get("HP") < 2){
                    System.out.println(x);
                    map.put(x.getMa(), map.get(x.getMa()) + 1);
                }
                if(x.getMa().equals("GV")){
                    System.out.println(x);
                }
            }
        }
    }
    
}
