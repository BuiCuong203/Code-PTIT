package j05037;

import java.util.ArrayList;
import java.util.Collections;
import java.util.Comparator;
import java.util.Scanner;

public class J05037 {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = Integer.parseInt(sc.nextLine());
        ArrayList<MH> a = new ArrayList<>();
        for(int i = 1; i <= t; i++){
            a.add(new MH(i, sc.nextLine(), sc.nextLine(), Integer.parseInt(sc.nextLine()), Integer.parseInt(sc.nextLine())));
        }
        Collections.sort(a, new Comparator<MH>(){
            @Override
            public int compare(MH o1, MH o2){
                if(o1.getGb() > o2.getGb()) return -1;
                else return 1;
            }
        });
        for(MH x : a){
            System.out.println(x);
        }
    }
    
}
