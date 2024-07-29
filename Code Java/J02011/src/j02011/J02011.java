
import java.util.Scanner;

public class J02011 {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int n = in.nextInt();
        int[] a = new int[n];
        for(int i = 0; i < n; i++){
            a[i] = in.nextInt();
        }
        for(int i = 0; i < n - 1; i++){
            int x = i;
            for(int j = i + 1; j < n; j++){
                if(a[x] > a[j]){
                    x = j;
                }
            }
            int tmp = a[i];
            a[i] = a[x];
            a[x] = tmp;
            System.out.printf("Buoc %d: ", i + 1);
            for(int j = 0; j < n; j++){
                System.out.printf("%d ", a[j]);
            }
            System.out.println();
        }
    }
    
}
