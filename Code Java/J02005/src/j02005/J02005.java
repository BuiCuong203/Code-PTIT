
import java.util.Scanner;

public class J02005 {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int n = in.nextInt();
        int m = in.nextInt();
        int[] a = new int[n];
        int[] b = new int[m];
        int[] dd1 = new int[1001];
        int[] dd2 = new int[1001];
        for(int i = 0; i < n; i++){
            a[i] = in.nextInt();
            dd1[a[i]] = 1; 
        }
        for(int i = 0; i < m; i++){
            b[i] = in.nextInt();
            dd2[b[i]] = 1; 
        }
        for(int i = 1; i < 1001; i++){
            if(dd1[i] == 1 && dd2[i] == 1){
                System.out.print(i + " ");
            }
        }
    }
    
}
