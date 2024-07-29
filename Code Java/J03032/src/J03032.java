
import java.util.Scanner;

public class J03032 {

    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int t = in.nextInt();
        in.nextLine();
        while(t-->0){
            String[] a = in.nextLine().split("\\s+");
            for(String i : a){
                StringBuilder s = new StringBuilder(i).reverse();
                System.out.print(s + " ");
            }
            System.out.println();
        }
    }
    
}