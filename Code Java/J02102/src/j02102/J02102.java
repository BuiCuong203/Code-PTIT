
import java.util.Arrays;
import java.util.Scanner;

public class J02102 {

    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int n = in.nextInt();
        int[] a = new int[n * n];
        for(int i = 0; i < n * n; i++){
            a[i] = in.nextInt();
        }
        Arrays.sort(a);
        int top = 0, down = n - 1, left = 0, right = n - 1;
        int cnt = 0;
        int[][] b = new int[n][n];
        while(true){
            for(int i = left; i <= right; i++){
                b[top][i] = a[cnt];
                cnt++;
            }
            top++;
            if(cnt == n * n) break;
            for(int i = top; i <= down; i++){
                b[i][right] = a[cnt];
                cnt++;
            }
            right--;
            if(cnt == n * n) break;
            for(int i = right; i >= left; i--){
                b[down][i] = a[cnt];
                cnt++;
            }
            down--;
            if(cnt == n * n) break;
            for(int i = down; i >= top; i--){
                b[i][left] = a[cnt];
                cnt++;
            }
            left++;
            if(cnt == n * n) break;
        }
        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
                System.out.print(b[i][j] + " ");
            }
            System.out.println();
        }
    }
    
}
