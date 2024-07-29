
import java.util.Scanner;

public class J02021 {

    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int n = in.nextInt();
        int k = in.nextInt();
        int dem = 0;
        int[] a = new int[k + 1];
        for(int i = 1; i <= k; i++) a[i] = i;
        while(true){
            dem++;
            for(int i = 1; i <= k; i++){
                System.out.printf(a[i] + "");
            }
            System.out.printf(" ");
            int i = k;
            while(a[i] == n - k + i && i > 0) i--;
            if(i == 0) break;
            else{
                a[i]++;
                for(int j = i + 1; j <= k; j++) a[j] = a[i] + j - i;
            }
        }
        System.out.printf("\nTong cong co %d to hop\n", dem);
    }
    
}
