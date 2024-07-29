
import java.util.Scanner;

public class J01013 {
    public static final int N = (int) 2e6;
    public static int a[] = new int[N+1];
    public static void sang(){
        for(int i = 2; i <= Math.sqrt(N); i++){
            if(a[i] == 0){
                for(int j = i; j <= N; j+=i){
                    if(a[j] == 0){
                        a[j] = i;
                    }
                }
            }
        }
        for(int i = 2; i <= N; i++){
            if(a[i] == 0) a[i] = i;
        }
    }
    public static int tinh(int n){
        int tong = 0;
        while(n != 1){
            tong += a[n];
            n /= a[n];
        }
        return tong;
    }
    public static void main(String[] args) {
        sang();
        Scanner in = new Scanner(System.in);
        int t = in.nextInt();
        long tong = 0;
        while(t-->0){
            int x = in.nextInt();
            tong += tinh(x);
        }
        System.out.println(tong);
    }
    
}
