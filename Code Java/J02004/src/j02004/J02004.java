
import java.util.Scanner;

public class J02004 {
    public static Scanner in = new Scanner(System.in);
    public static void test(){
        int n = in.nextInt();
        int[] a = new int[n];
        for(int i = 0; i < n; i++){
            a[i] = in.nextInt();
        }
        for(int i = 0; i < n/2; i++){
            if(a[i] != a[n-1-i]){
                System.out.println("NO");
                return;
            }
        }
        System.out.println("YES");
    }
    public static void main(String[] args) {
        int t = in.nextInt();
        while(t-->0){
            test();
        }
    }
    
}
