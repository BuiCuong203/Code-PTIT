
import java.util.Scanner;


public class J01008 {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int t = in.nextInt();
        for(int i = 1; i <= t; i++){
            long n = in.nextLong();
            System.out.printf("Test %d: ", i);
            for(int j = 2; j <= Math.sqrt(n); j++){
                int dem = 0;
                while(n % j == 0){
                    dem++;
                    n /= j;
                }
                if(dem != 0){
                    System.out.printf("%d(%d) ",j,dem);
                }
            }
            if(n != 1){
                System.out.printf("%d(%d)",n,1);
            }
            System.out.println();
        }
    }
}
