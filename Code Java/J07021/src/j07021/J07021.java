package j07021;

import java.io.File;
import java.io.FileNotFoundException;
import java.util.Scanner;

public class J07021 {

    public static void main(String[] args) throws FileNotFoundException {
        Scanner sc = new Scanner(new File("DATA.in"));
        while(true){
            String line = sc.nextLine();
            if(line.equals("END")) break;
            String[] a = line.trim().split("\\s+");
            String s = "";
            for(int i = 0; i < a.length; i++){
                s += a[i].toUpperCase().charAt(0);
                s += a[i].toLowerCase().substring(1);
                s += " ";
            }
            System.out.println(s);
        }
    }
    
}
