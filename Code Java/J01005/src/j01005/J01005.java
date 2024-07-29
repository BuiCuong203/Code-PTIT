
import java.util.Scanner;

public class J01005 {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int t = in.nextInt();
        while(t-->0){
            int n = in.nextInt();
            int h = in.nextInt();
            for(int i = 1; i < n; i++){
                System.out.printf("%.6f ",(double)(Math.sqrt(1.00 * i / n) * 1.00 * h));
            }
            System.out.println();
        }
    }
    
}
