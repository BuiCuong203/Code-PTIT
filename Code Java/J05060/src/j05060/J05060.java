package j05060;

import java.util.ArrayList;
import java.util.Scanner;

public class J05060 {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = Integer.parseInt(sc.nextLine());
        ArrayList<XT> a = new ArrayList<>();
        for(int i = 1; i <= t; i++){
            a.add(new XT(i, sc.nextLine(), sc.nextLine(), Float.parseFloat(sc.nextLine()), Float.parseFloat(sc.nextLine())));
        }
        for(XT x : a){
            System.out.println(x);
        }
    }
    
}
