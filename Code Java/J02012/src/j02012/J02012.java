
import java.util.Scanner;

public class J02012 {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int n = in.nextInt();
        int[] a = new int[n];
        for(int i = 0; i < n; i++){
            a[i] = in.nextInt();
        }
        for(int i = 0; i < n; i++){
            int x = i;
            while(x > 0 && a[x] < a[x - 1]){
                int tmp = a[x];
                a[x] = a[x - 1];
                a[x - 1] = tmp;
                x--;
            }
            System.out.printf("Buoc %d: ", i);
            for (int j = 0; j <= i; j++){
                System.out.printf("%d ", a[j]);
            }
            System.out.println();
        }
    }
    
}
