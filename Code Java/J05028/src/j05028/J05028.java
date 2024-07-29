package j05028;

import java.util.ArrayList;
import java.util.Collections;
import java.util.Comparator;
import java.util.Scanner;

public class J05028 {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = Integer.parseInt(sc.nextLine());
        ArrayList<DN> a = new ArrayList<>();
        for(int i = 0; i < t; i++){
            String ma = sc.nextLine();
            String ten = sc.nextLine();
            int sv = Integer.parseInt(sc.nextLine());
            a.add(new DN(ma, ten, sv));
        }
        Collections.sort(a, new Comparator<DN>(){
            @Override
            public int compare(DN o1, DN o2){
                if(o1.getSv() == o2.getSv()){
                    return o1.getMa().compareTo(o2.getMa());
                }
                else{
                    if(o1.getSv() > o2.getSv()) return -1;
                    else return 1;
                }
            }
        });
        for(DN x : a){
            System.out.println(x);
        }
    }
    
}
