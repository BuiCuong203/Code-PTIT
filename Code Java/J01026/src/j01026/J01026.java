
import java.util.Scanner;

public class J01026 {
    public static boolean check(long n){
        long a = (long)Math.sqrt(n);
        if(n == a * a) return true;
        return false;
    }
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int t = in.nextInt();
        while(t-->0){
            long n = in.nextLong();
            if(check(n)){
                System.out.println("YES");
            }
            else System.out.println("NO");
        }
    }
    
}
