import java.util.Scanner;

public class J01011 {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int t = in.nextInt();
        while(t-->0){
            long a = in.nextLong();
            long b = in.nextLong();
            long usc = gcd(a, b);
            long bsc = a * b / usc;
            System.out.printf("%d %d",bsc,usc);
            System.out.println();
        }
    }
    public static long gcd(long a, long b){
        while(b != 0){
            long x = a % b;
            a = b;
            b = x;
        }
        return a;
    }
}
