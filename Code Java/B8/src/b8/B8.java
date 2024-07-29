package b8;

import java.util.Scanner;

public class B8 {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = Integer.parseInt(sc.nextLine());
        while(t-->0){
            String s = sc.nextLine();
            String[] str = s.trim().split("\\s+");
            for(int i = str.length - 1; i >= 0; i--){
                System.out.print(str[i] + " ");
            }
            System.out.println("");
        }
    }
    
}
