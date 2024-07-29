
import java.util.Scanner;

public class J02007 {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int t = in.nextInt();
        for(int i = 1; i <= t; i++){
            int n = in.nextInt();
            int[] a = new int[n];
            int[] b = new int[100001];
            for(int j = 0; j < n; j++){
                a[j] = in.nextInt();
                b[a[j]]++;
            }
            System.out.printf("Test %d:\n", i);
            for(int j = 0; j < n; j++){
                if(b[a[j]] > 0){
                    System.out.printf("%d xuat hien %d lan\n", a[j], b[a[j]]);
                    b[a[j]] = 0;
                }
            }
        }
    }
    
}
