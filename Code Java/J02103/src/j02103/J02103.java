
import java.util.Scanner;

public class J02103 {

    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int test = in.nextInt();
        for(int t = 1; t <= test; t++){
            int n = in.nextInt();
            int m = in.nextInt();
            int[][] a = new int[n][m];
            int[][] b = new int[m][n];
            int[][] kq = new int[n][n];
            for(int i = 0; i < n; i++){
                for(int j = 0; j < m; j++){
                    a[i][j] = in.nextInt();
                    b[j][i] = a[i][j];
                }
            }
            for(int i = 0; i < n; i++){
                for(int j = 0; j < n; j++){
                    kq[i][j] = 0;
                    for(int k = 0; k < m; k++){
                        kq[i][j] += a[i][k] * b[k][j];
                    }
                }
            }
            System.out.printf("Test %d:\n", t);
            for(int i = 0; i < n; i++){
                for(int j = 0; j < n; j++){
                    System.out.printf(kq[i][j] + " ");
                }
                System.out.println();
            }
        }
    }
    
}
