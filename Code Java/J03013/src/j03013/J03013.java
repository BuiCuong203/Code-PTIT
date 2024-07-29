
import java.math.BigInteger;
import java.util.Scanner;

public class J03013 {

    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int t = in.nextInt();
        while(t-->0){
            BigInteger a = in.nextBigInteger();
            BigInteger b = in.nextBigInteger();
            String s = a.subtract(b).abs().toString();
            int max = Math.max(a.toString().length(), b.toString().length());
            while(s.length() < max){
                s = '0' + s;
            }
            System.out.println(s);
        }
    }
    
}
