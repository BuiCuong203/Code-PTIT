
import java.util.Scanner;

public class J02014 {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int t = in.nextInt();
        while(t-->0){
            int n = in.nextInt();
            int[] a = new int[n];
            int[] f = new int[n];
            int sum = 0;
            int res = -1;
            for(int i = 0; i < n; i++){
                a[i] = in.nextInt();
                sum += a[i];
                if(i == 0) f[i] = a[i];
                else{
                    f[i] = f[i - 1] + a[i];
                }
            }
            for(int i = 1; i < n; i++){
                if(f[i - 1] == sum - f[i]){
                    res = i + 1;
                    break;
                }
            }
            System.out.println(res);
        }
    }
    
}
