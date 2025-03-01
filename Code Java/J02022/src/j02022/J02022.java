
import java.util.Scanner;


public class J02022 {
    public static int[] a;
    public static int n;
    public static boolean[] dd;
    
    public static void check(){
        for(int i = 1; i < n; i++){
            if(Math.abs(a[i] - a[i + 1]) == 1){
                return;
            }
        }
        for(int i = 1; i <= n; i++){
            System.out.print(a[i]);
        }
        System.out.println();
    }
    
    public static void Try(int i){
        for(int j = 1; j <= n; j++){
            if(dd[j] == false){
                dd[j] = true;
                a[i] = j;
                if(i == n){
                    check();
                }
                else{
                    Try(i + 1);
                }
                dd[j] = false;
            }
        }
    }
    
    public static void main(String args[]) {
        Scanner in = new Scanner(System.in);
        int t = in.nextInt();
        while(t-->0){
            n = in.nextInt();
            a = new int[n + 1];
            dd = new boolean[n + 1];
            Try(1);
        }
    }
}
