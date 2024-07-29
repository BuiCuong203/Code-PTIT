package j05049;

import java.util.ArrayList;
import java.util.Collections;
import java.util.Comparator;
import java.util.Scanner;

public class J05049 {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = Integer.parseInt(sc.nextLine());
        ArrayList<QL> a = new ArrayList<>();
        for(int i = 0; i < t; i++){
            String ma = sc.nextLine();
            int nhap = Integer.parseInt(sc.nextLine());
            a.add(new QL(ma, nhap));
        }
        Collections.sort(a, new Comparator<QL>(){
            @Override
            public int compare(QL o1, QL o2){
                if(o1.Thue() > o2.Thue()) return -1;
                else return 1;
            }
        });
        char nhom = sc.next().charAt(0);
        for(QL x : a){
            if(x.getMa().charAt(0) == nhom){
                System.out.println(x);
            }
        }
    }
    
}
