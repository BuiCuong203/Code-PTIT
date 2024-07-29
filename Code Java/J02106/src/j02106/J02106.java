
import java.util.Scanner;

public class J02106 {

    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int n = in.nextInt();
        int dem = 0;
        for(int i = 0; i < n; i++){
            int dem1 = 0;
            for(int j = 0; j < 3; j++){
                int x = in.nextInt();
                if(x == 1) dem1++;
            }
            if(dem1 > 1) dem++;
        }
        System.out.println(dem);
    }
    
}
