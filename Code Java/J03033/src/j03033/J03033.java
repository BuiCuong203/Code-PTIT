
import java.util.Scanner;
import java.math.BigInteger;

public class J03033 {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int t = in.nextInt();
        while(t-->0){
            BigInteger a = new BigInteger(in.next());
            BigInteger b = new BigInteger(in.next());
            System.out.println(a.multiply(b).divide(a.gcd(b)));
        }
    }
    
}
