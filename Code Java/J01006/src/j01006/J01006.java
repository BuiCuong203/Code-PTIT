
import java.util.Scanner;

public class J01006 {
    public static Scanner in = new Scanner(System.in);
    public static long fb[] = new long[100];
    public static void main(String[] args) {
        check();
        int t = in.nextInt();
        while(t-->0){
            int n = in.nextInt();
            System.out.println(fb[n]);
        }
    }
    public static void check(){
        fb[1] = 1L;
        fb[2] = 1L;
        for(int i=3; i <= 92; i++){
            fb[i] = fb[i-1] + fb[i-2];
        }
    }
}
