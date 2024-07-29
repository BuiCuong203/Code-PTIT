package j05061;

import java.util.ArrayList;
import java.util.Collections;
import java.util.Comparator;
import java.util.Scanner;

public class J05061 {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = Integer.parseInt(sc.nextLine());
        ArrayList<XT> a = new ArrayList<>();
        for(int i = 1; i <= t; i++){
            a.add(new XT(i, sc.nextLine(), sc.nextLine(), Float.parseFloat(sc.nextLine()), Float.parseFloat(sc.nextLine())));
        }
        Collections.sort(a, new Comparator<XT>(){
            @Override
            public int compare(XT o1, XT o2) {
                if(o1.getDiemtb() == o2.getDiemtb()){
                    if(o1.getMa() < o2.getMa()) return -1;
                    return 1;
                }
                else{
                    if(o1.getDiemtb() > o2.getDiemtb()) return -1;
                    return 1;
                }
            }
            
        });
        for(XT x : a){
            System.out.println(x);
        }
    }
    
}
