
import java.util.Scanner;

public class J01022 {
    public static long f[] = new long[93];
    public static void fb(){
        f[1] = 1;
        f[2] = 1;
        for(int i = 3; i <= 92; i++){
            f[i] = f[i-2] + f[i-1];
        }
    }
    public static char change(int n, long k){
        if(n == 1) return '0';
        if(n == 2) return '1';
        if(k <= f[n-2]) return change(n-2, k);
        return change(n-1, k - f[n-2]);
    }
    public static void main(String[] args) {
        fb();
        Scanner in = new Scanner(System.in);
        int t = in.nextInt();
        while(t-->0){
            int n = in.nextInt();
            long k = in.nextLong();
            System.out.println(change(n,k));
        }
    }
    
}
