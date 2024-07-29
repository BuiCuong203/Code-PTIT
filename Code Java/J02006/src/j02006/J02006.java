package j02006;


import java.util.Scanner;

public class J02006 {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int n = in.nextInt();
        int m = in.nextInt();
        int[] a = new int[n];
        int[] b = new int[m];
        int[] dd = new int[1001];
        for(int i = 0; i < n; i++){
            a[i] = in.nextInt();
            dd[a[i]] = 1;
        }
        for(int i = 0; i < m; i++){
            b[i] = in.nextInt();
            dd[b[i]] = 1;
        }
        for(int i = 1; i < 1001; i++){
            if(dd[i] == 1){
                System.out.print(i + " ");
            }
        }
    }
    
}
