
import java.util.Scanner;

public class J02010 {

    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int n = in.nextInt();
        int[] a = new int[n];
        for(int i = 0; i < n; i++){
            a[i] = in.nextInt();
        }
        for(int i = 0; i < n - 1; i++){
            for(int j = i + 1; j < n; j++){
                if(a[i] > a[j]){
                    int tmp = a[i];
                    a[i] = a[j];
                    a[j] = tmp;
                }
            }
            System.out.printf("Buoc %d: ", i + 1);
            for(int j = 0; j < n; j++){
                System.out.printf("%d ", a[j]);
            }
            System.out.println();
        }
    }
    
}
