package j05048;

import java.util.ArrayList;
import java.util.Scanner;

public class J05048 {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = Integer.parseInt(sc.nextLine());
        ArrayList<QL> a = new ArrayList<>();
        for(int i = 0; i < t; i++){
            String ma = sc.nextLine();
            int nhap = Integer.parseInt(sc.nextLine());
            a.add(new QL(ma, nhap));
        }
        for(QL x : a){
            System.out.println(x);
        }
    }
    
}
