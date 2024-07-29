package b1;

import java.util.ArrayList;
import java.util.Collections;
import java.util.Comparator;
import java.util.HashMap;
import java.util.Scanner;

public class B1 {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        while(t-->0){
            int n = sc.nextInt();
            int[] a = new int[1001];
            for(int i = 0; i < n; i++){
                int x = sc.nextInt();
                a[x]++;
            }
            for(int i = 0; i < 1001; i+=2){
                if(a[i] > 0){
                    System.out.print(i + " ");
                }
            }
            System.out.println("");
            for(int i = 999; i >= 1; i-=2){
                if(a[i] > 0){
                    System.out.print(i + " ");
                }
            }
            System.out.println("");
        }
    }
    
}
