import java.io.*;
import java.util.*;

public class J07004 {

    public static void main(String[] args) throws FileNotFoundException {
        Scanner in = new Scanner(new File("DATA.in"));
        int[] a = new int[1000];
        while(in.hasNextInt()){
            a[in.nextInt()]++;
        }
        for(int i = 0; i < 1000; i++){
            if(a[i] > 0){
                System.out.println(i + " " + a[i]);
            }
        }
    }
    
}
