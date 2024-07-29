package j05041;

import java.util.ArrayList;
import java.util.Collections;
import java.util.Comparator;
import java.util.Scanner;

public class J05041 {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = Integer.parseInt(sc.nextLine());
        ArrayList<NV> a = new ArrayList<>();
        for(int i = 1; i <= t; i++){
            a.add(new NV(i, sc.nextLine(), Integer.parseInt(sc.nextLine()), Integer.parseInt(sc.nextLine()), sc.nextLine()));
        }
        Collections.sort(a, new Comparator<NV>(){
            @Override
            public int compare(NV o1, NV o2){
                if(o1.Tl() > o2.Tl()) return -1;
                else return 1;
            }
        });
        for(NV x : a){
            System.out.println(x);
        }
    }
    
}
