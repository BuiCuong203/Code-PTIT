import java.util.*;

public class J01012 {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int t = in.nextInt();
        while(t-->0){
            long n = in.nextLong();
            int dem = 0;
            for(int i = 2; i <= Math.sqrt(n); i++){
                if(n % i == 0){
                    if(i % 2 == 0) dem++;
                    if((n/i) % 2 == 0 && i != Math.sqrt(n)) dem++;
                }
            }
            if(n % 2 == 0) dem++;
            System.out.println(dem);
        }
    }
    
}
