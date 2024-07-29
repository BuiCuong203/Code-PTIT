
import java.util.Scanner;

public class J02034 {

    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int n = in.nextInt();
        int[] a = new int[201];
        boolean check = true;
        int max = 0;
        for(int i = 0; i < n; i++){
            int x = in.nextInt();
            max = Math.max(max, x);
            a[x] = 1;
        }
        for(int i = 1; i <= max; i++){
            if(a[i] == 0){
                check = false;
                System.out.println(i);
            }
        }
        if(check){
            System.out.println("Excellent!");
        }
    }
    
}
