
import java.util.Scanner;

public class J01009 {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int n = in.nextInt();
        long tmp = 1;
        long tong = 0;
        for(int i = 1; i <= n; i++){
            tmp *= i;
            tong += tmp;
        }
        System.out.println(tong);
    }
    
}
