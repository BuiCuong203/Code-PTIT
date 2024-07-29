
import java.util.Scanner;

public class J02013 {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int n = in.nextInt();
        int[] a = new int[n];
        for(int i = 0; i < n; i++){
            a[i] = in.nextInt();
        }
        for(int i = 0; i < n - 1; i++){
            boolean check = false;
            for(int j = 0; j < n - 1 - i; j++){
                if(a[j] > a[j + 1]){
                    int tmp = a[j];
                    a[j] = a[j + 1];
                    a[j + 1] = tmp;
                    check = true;
                }
            }
            if(check == false){
                continue;
            }
            System.out.printf("Buoc %d: ", i + 1);
            for(int j = 0; j < n; j++){
                System.out.printf("%d ", a[j]);
            }
            System.out.println();
        }
    }
    
}
