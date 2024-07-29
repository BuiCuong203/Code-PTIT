package j05056;

import java.util.ArrayList;
import java.util.Collections;
import java.util.Comparator;
import java.util.HashMap;
import java.util.Scanner;

public class J05056 {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = Integer.parseInt(sc.nextLine());
        ArrayList<VDV> a = new ArrayList<>();
        for(int i = 1; i <= t; i++){
            VDV x = new VDV(i, sc.nextLine(), sc.nextLine(), sc.nextLine(), sc.nextLine());
            a.add(x);
        }
        Collections.sort(a, new Comparator<VDV>(){
            @Override
            public int compare(VDV o1, VDV o2) {
                return o1.getTtXh().compareTo(o2.getTtXh());
            }
        });
        int cnt = 1;
        HashMap<String, Integer> map = new HashMap<>();
        for(int i = 0; i < t; i++){
            if(i == 0) map.put(a.get(i).getTtXh(), cnt);
            else{
                if(!a.get(i).getTtXh().equals(a.get(i - 1).getTtXh())){
                    cnt += 1;
                    map.put(a.get(i).getTtXh(), cnt);
                }
                else{
                    cnt++;
                }
            }
        }
        for(VDV x : a){
            System.out.println(x + " " + map.get(x.getTtXh()));
        }
    }
    
}
