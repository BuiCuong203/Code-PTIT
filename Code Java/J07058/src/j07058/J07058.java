package j07058;

import java.io.File;
import java.io.FileNotFoundException;
import java.util.ArrayList;
import java.util.Collections;
import java.util.Scanner;

public class J07058 {

    public static void main(String[] args) throws FileNotFoundException {
        Scanner in = new Scanner(new File("MONHOC.in"));
        int t = Integer.parseInt(in.nextLine());
        ArrayList<MonThi> a = new ArrayList<>();
        for(int i = 0; i < t; i++){
            a.add(new MonThi(in.nextLine(), in.nextLine(), in.nextLine()));
        }
        Collections.sort(a);
        for(MonThi x : a){
            System.out.println(x);
        }
    }
    
}
