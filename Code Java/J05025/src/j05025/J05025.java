package j05025;

import java.util.ArrayList;
import java.util.Collections;
import java.util.Comparator;
import java.util.Scanner;

public class J05025 {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = Integer.parseInt(sc.nextLine());
        ArrayList<GV> a = new ArrayList<>();
        for(int i = 1; i <= t; i++){
            String ten = sc.nextLine();
            String mon = sc.nextLine();
            a.add(new GV(i, ten, mon));
        }
        Collections.sort(a, new Comparator<GV>(){
            @Override
            public int compare(GV o1, GV o2){
                if(o1.getTen().equals(o2.getTen())){
                    if(o1.getMa() < o2.getMa()) return -1;
                    else return 1;
                }
                else{
                    return o1.getTen().compareTo(o2.getTen());
                }
            }
        });
        for(GV x : a){
            System.out.println(x);
        }
    }
    
}
