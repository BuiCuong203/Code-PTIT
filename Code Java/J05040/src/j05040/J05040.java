package j05040;

import java.util.ArrayList;
import java.util.Scanner;

public class J05040 {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = Integer.parseInt(sc.nextLine());
        ArrayList<NV> a = new ArrayList<>();
        for(int i = 1; i <= t; i++){
            a.add(new NV(i, sc.nextLine(), Integer.parseInt(sc.nextLine()), Integer.parseInt(sc.nextLine()), sc.nextLine()));
        }
        for(NV x : a){
            System.out.println(x);
        }
    }
    
}
