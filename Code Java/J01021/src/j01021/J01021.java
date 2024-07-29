
import java.util.Scanner;

public class J01021 {
    public static final int mod = (int)1e9 + 7;
    public static long pow(long a, long b){
        if(b == 0) return 1;
        if(b == 1) return a % mod;
        long tmp = pow(a, b/2);
        if(b % 2 == 0) return (tmp * tmp) % mod;
        else return ((tmp * tmp) % mod * a) % mod;
    }
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        while(true){
            long a = in.nextLong();
            long b = in.nextLong();
            if(a == 0 && b == 0) break;
            else{
                System.out.println(pow(a,b));
            }
        }
    }
    
}
