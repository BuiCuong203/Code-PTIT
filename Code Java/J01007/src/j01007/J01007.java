
import java.util.Scanner;

public class J01007 {
    public static Scanner in = new Scanner(System.in);
    public static long fb[] = new long[100];
    public static void main(String[] args) {
        int t = in.nextInt();
        while(t-->0){
            long n = in.nextLong();
            if(check(n)){
                System.out.println("YES");
            }
            else{
                System.out.println("NO");
            }
        }
    }
    public static boolean check(long n){
        fb[1] = 1L;
        fb[2] = 2L;
        for(int i = 3; i <= 92; i++){
            fb[i] = fb[i-1] + fb[i-2];
        }
        for(long i : fb){
            if(i == n) return true;
            else{
                if(i > n) return false;
            }
        }
        return false;
    }
}
